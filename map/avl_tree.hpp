#ifndef AVL_TREE_HPP
#define AVL_TREE_HPP
#include <iostream>
#include "my_utility.hpp"

namespace ft
{
template<class value_type>
struct node
{
	public:
	// T key;
	// U value;
	// typedef ft::pair<const T, U>        			value_type;
	// typedef T1  first_type;
    //     typedef T2  second_type;
	typedef typename value_type::first_type first_type;
	typedef typename value_type::second_type second_type;
	typedef	node<value_type>*										pointer_node;


	value_type		pt;
	struct node    *parent;
	int hight; // hight evry node
	struct node    *right;
	struct node    *left;
	node(): parent(0), right(0), left(0) {}
	// node(const m &at)
	// {
	// 	std::cout << "loooooooool" << "\n";
	// }
	node(value_type p): pt(p), parent(0), right(0), left(0) {}
	node(const first_type &first, const second_type &second): pt(first, second), parent(0), right(0), left(0) {}
	// node(const node)
	// {
	// 	std::cout << "here 123" << std::endl'
	// }
	void operator==(const node cp)
	{
		this->pt = cp.pt;
		this->right = cp.right;
		this->parent = cp.parent;
		this->left = cp.left;
	}
};



template<class value_type>
class avl_tree
{

public:
	typedef size_t                      							size_type;
	// typedef typename ft::node<value_type>::value_type        		value_type;
	typedef typename node<value_type>::first_type							key_type;
	typedef typename node<value_type>::second_type							mapped_value;
	typedef	node<value_type>*										pointer_node;
	typedef value_type* 											pointer;
	// typedef typename pointer_node::first							first;
	// typedef typename pointer_node::second							second;		

public:
	pointer_node root; // underline containre
	bool is_del;
public:
	size_t size;
	avl_tree() : root(NULL)
	{
		// std::cout << "default here" << std::endl;
	}
	avl_tree(const avl_tree &at)
	{
		// std::cout << "copy const" << std::endl;
		*this = at;
	}
	avl_tree(const pointer_node &at): root(at){} // node gnrate one
	void operator=(const avl_tree &at)
	{
		this->root = copy_helper(at.root);
	}
	~avl_tree(){}
	//getter
	struct node<value_type> *get() const 
	{
		return root;
	}
	// const int get()->pt.first;
	// #define a b
	struct node<value_type> * copy_helper(node<value_type> *cp)
	{
		if (cp == NULL)
			return NULL;
		struct node<value_type> *copy = new node<value_type>(cp->pt.first, cp->pt.second);
		// copy->pt.first = cp->pt.first;
		// copy->pt.second = cp->pt.second;
		copy->hight = cp->hight;
		copy->parent = cp->parent;
		copy->left = copy_helper(cp->left);
		copy->right = copy_helper(cp->right);
		return copy;
		
	}
	int bf(node<value_type> *&n)
	{
		if (n->right && n->left)
			return n->left->hight - n->right->hight;
		else if (n->right == NULL && n->left)
			return n->left->hight;
		else if (n->right && n->left == NULL)
			return -n->right->hight;
		return 1;
	}

	struct node<value_type> *LLrotation(node<value_type> *n)
	{
		struct node<value_type> *p;
		struct node<value_type> *tm_p;

		p = n; //copy from our struct

		tm_p = p->left;
		tm_p->parent = p->parent;
		p->left = tm_p->right;
		p->parent = tm_p;


		tm_p->right = p;
		// std::cout << "left - left rotation" << std::endl;
		return tm_p;
	}

	struct node<value_type> *RRrotation(node<value_type> *n)
	{
		struct node<value_type> *p;
		struct node<value_type> *tm_p;

		p = n; // copy of out node


		tm_p = p->right;
		tm_p->parent = p->parent;
		p->right = tm_p->left;
		p->parent = tm_p;


		tm_p->left = p;

		// std::cout << "right - right rotation" << std::endl;
		return tm_p;
	}

	struct node<value_type> *RLrotation(node<value_type> *n)
	{
		struct node<value_type> *p;
		struct node<value_type> *tm_p;
		struct node<value_type> *tm_p2;

		p = n; // first copy from n node
		tm_p = p->right;
		tm_p2 = tm_p->left;

		p->right = tm_p2->left;
		tm_p2->left->parent = p;
		tm_p->left = tm_p2->right;
		tm_p2->right->parent = tm_p;


		tm_p2->left = p;
		tm_p2->left->parent = tm_p2;
		tm_p2->right = tm_p;
		tm_p2->right->parent = tm_p2;
		tm_p2->parent = NULL; // null for root tree

		// std::cout << "right-left rotation" << std::endl;
		return tm_p2;

	}
	

	struct node<value_type> *LRrotation(node<value_type> *n)
	{
		struct node<value_type> *p;
		struct node<value_type> *tm_p;
		struct node<value_type> *tm_p2;

		p = n; // copy node 
		tm_p = p->left;
		tm_p2 = tm_p->right;

		//  start edit 
		p->left = tm_p2->right;
		tm_p2->right->parent = p;
		tm_p->right = tm_p2->left;
		tm_p2->left->parent = tm_p;

		tm_p2->right = p; 
		tm_p2->right->parent = tm_p2;
		tm_p2->left  = tm_p;
		tm_p2->left->parent  = tm_p2;
		tm_p2->parent = NULL;   // null for root tree

		// std::cout << "left-right rotation" << std::endl;
		return tm_p2;
	}

	bool  add_new(node<value_type> *&r, const value_type& val, struct node<value_type>   *parent)
	{
		bool ret = false;
		if (r == NULL)
	   {

			r = new node<value_type>(ft::make_pair(val.first, val.second));
			r->hight = 1;
			r->parent = parent;
			r->right = NULL;
			r->left =  NULL;
			return true;
	   }
	   else
	   {
		  if(val.first == r->pt.first)
		  {
			 	// std::cout << "why not here" << std::endl;
		  		return false; 
		  }
			else if  (val.first > r->pt.first)
				ret = add_new(r->right, val, r);
			else if (val.first < r->pt.first)
				ret = add_new(r->left, val, r);
	   }
	   if(ret == false)
	   		return ret;
	   	r->hight = cal_hight(r);
	   	if (bf(r) == 2 && bf(r->left) == 1)
			r = LLrotation(r); // left-left rotation
		else if (bf(r) == -2 && bf(r->right) == -1)
			r = RRrotation(r);//  right-right rotation
		else if (bf(r) == -2 && bf(r->right) == 1)
			r = RLrotation(r);// right-left rotation
		else if (bf(r) == 2 && bf(r->left) == -1)
			r = LRrotation(r); // left-right rotation
	   return ret;
	}

	int cal_hight(node<value_type> *r)
	{
		if (r->right && r->left)
		{
			if (r->left->hight < r->right->hight)
				return r->right->hight  + 1;
			else
				return r->left->hight + 1;
		}
		else if(r->right && r->left == NULL)
		{
				return r->right->hight + 1;
		}
		else if (r->right == NULL && r->left)
			return r->left->hight + 1;
		return 0;
	}

	bool insert (const value_type& val) // add deletion
	{
		// std::cout << "dkhal ==> " << val.first << std::endl;
		bool ret = add_new(root, val, NULL);
		// if (ret == true )
		// size++;
		return ret;
	}

	struct node<value_type> *inorder_predecessor(struct node<value_type> *tc)
	{
		//the largest element of the left sub tree.
		node<value_type> *t = tc;
		while(t->right != NULL)
			t = t->right;
		return t;
	}

	struct node<value_type> *inorder_successor(struct node<value_type> *tc)
	{
		//the smallest element of the right sub tree
		node<value_type> *t = tc;

		while(t->left != NULL)
			t = t->left;
		return t;
	}

	struct node<value_type> *deleteNode(node<value_type> *r, key_type k)
	{
		if ((r->left == NULL && r->right == NULL))
		{
			if(k == r->pt.first)
			{
				is_del = true;
				// std::cout << "here" << std::endl;
				delete r;
			}
			else
				is_del = false;
			return NULL;
		}
		struct node<value_type> *tmp;
		if (k < r->pt.first)
		{
			// std::cout << "left test" << std::endl;
			r->left = deleteNode(r->left, k);
		}
		// else if(r->pt.first == k)
		// {
		// 	if(k == r->pt.first)
		// 	{
		// 		is_del = true;
		// 		// std::cout << "here" << std::endl;
		// 		delete r;
		// 	}
		// 	else
		// 		is_del = false;
		// 	return NULL;
		// }
		else if (k > r->pt.first)
		{
			// std::cout << "right test" << std::endl;
			r->right = deleteNode(r->right, k);
		}
		else
		{
			if (r->left != NULL)
			{
				tmp = inorder_predecessor(r->left);
				// r->pt.first = tmp->pt.first;
				// r->pt.second = tmp->pt.second;
				r = new node<value_type>(tmp->pt.first, tmp->pt.second);
				r->left =  deleteNode(r , tmp->pt.first);
			}
			else if (r->right != NULL)
			{
				tmp = inorder_successor(r->right);
				// r->pt.first = tmp->pt.first;
				// r->pt.second = tmp->pt.second;
				r->right = new node<value_type>(tmp->pt.first, tmp->pt.second);
				r = deleteNode(r , tmp->pt.first);
			}
		}
		//balance cases
		if(bf(r) == 2 && bf(r->left) == 1)
			r = LLrotation(r); // left-left rotation;
		else if (bf(r) == 2 && bf(r->left) == -1)
			r = LRrotation(r); // left-right rotation;
		else if(bf(r) == 2 && bf(r->left) == 0)
			r = LLrotation(r); // left-left rotation;
		else if (bf(r) == -2 && bf(r->right) == -1)
			r = RRrotation(r); // right-right rotation;
		else if(bf(r) == -2 && bf(r->right) == 1)
			r = RLrotation(r); // right-left rotation
		else if(bf(r) == -2 && bf(r->right) == 0)
			r = RRrotation(r); // right-right rotation
		return r;
	}


	int dele(key_type data) // return size
	{
		root = deleteNode(root, data);
		return 0;
	}
	// void print(node<value_type> * ptr)
	// {
	// 	if(ptr->parent != NULL)
	// 	{
	// 		if (ptr->left != NULL)
	// 		{
	// 			print(ptr->left);
	// 		}
	// 		std::cout << " value = " << ptr->pt.first << std::endl;
	// 		if(ptr->right != NULL)
	// 		{
	// 				print(ptr->right);
	// 		}

	// 	}
	// }
	// void test_plus_plus_1(node<value_type> * pr)
	// {
	// 	if(pr->left == NULL && pr->right == NULL)
	// 	{
	// 		if (pr->key < pr->parent->key)
	// 		{
	// 			pr= pr->parent;
	// 			std::cout << "pr = " << pr->key << std::endl; 
	// 		}
	// 	}
	// 	else if (pr->left != NULL)
	// 	{
	// 		pr = inorder_successor(pr);
	// 		std::cout << "pr = " << pr->key << std::endl; 
	// 	}
	// 	else if(pr->right != NULL)
	// 	{

	// 	}
	// }


	bool operator==(const avl_tree& cp)
	{
		return (root == cp.root);
	}


	value_type& operator*() const
	{
		// std::cout << "heree" << std::endl;
		
		return (root->pt);
	}

	pointer operator->()
	{
		return (&operator*());
	}

	//preoprator ++ mean ++a;
	avl_tree begin()
	{
		return avl_tree(inorder_successor(root));
	}

	avl_tree end()
	{
		return (avl_tree());
	}
	avl_tree &operator++()
	{
		struct node<value_type> *tmp;
		//first check if node has right or not
		if(root->right != NULL)
		{
			// if has right go to most left
			root = root->right;
			root = inorder_successor(root);
		}
		else
		{
			//if not, return to parent
			tmp = root->parent;
			while (tmp != NULL && root == tmp->right)
			{
				root = tmp;
				tmp = tmp->parent;
			}
			// if right-most
			root = tmp;
		}
		return *this;
	}
	avl_tree operator++(int) // post-operator ++ mean a++
	{
		// add logic from ++ avl
		avl_tree _tmp(*this);
		++(*this);
		return _tmp;
	}

	avl_tree &operator--() // pre-operator -- 
	{
				struct node<value_type> *tmp;
		//check left to return most left one
		if(root->left != NULL)
		{
			// if has right go to most left
			root = root->left;
			root = inorder_predecessor(root); // get most-right
		}
		else
		{
			//if not, return to parent
			tmp = root->parent;
			while (tmp != NULL && root == tmp->left)
			{
				root = tmp;
				tmp = tmp->parent;
			}
			// if right-most
			root = tmp;
		}
		return *this;
	}

	
	avl_tree operator--(int)
	{
		avl_tree _tmp(*this);
		--(*this);
		return _tmp;
	}
	
	mapped_value &search(const key_type& k, node<value_type> *r)
	{
		try
		{
			if(r && k == r->pt.first)
			{
				std::cout << "find" << std::endl;
				return r->pt.second;
			}
			if (r && k < r->pt.first)
			{
				// std::cout << "lef" << std::endl;
				return(search(k, r->left));
			}
			else if (r && k > r->pt.first)
			{
				return(search(k, r->right));
			}
			throw "Error";
		}
		catch(const char *s)
		{
			throw s;
		}
		// return r->pt;
	}

	avl_tree search_uniq(const key_type& k, node<value_type> *r)
	{
		try
		{
			if(r && k == r->pt.first)
			{
				// std::cout << "find" << std::endl;
				avl_tree tmp;
				tmp.root  = r;
				return tmp;
			}
			if (r && k < r->pt.first)
			{
				// std::cout << "lef" << std::endl;
				return(search_uniq(k, r->left));
			}
			else if (r && k > r->pt.first)
			{
				return(search_uniq(k, r->right));
			}
			throw "Error";
		}
		catch(const char *s)
		{
			throw s;
		}
		// return r->pt;
		
	}


	
};


}




#endif