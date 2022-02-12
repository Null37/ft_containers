#ifndef AVL_TREE_HPP
#define AVL_TREE_HPP
#include <iostream>
#include "my_utility.hpp"

namespace ft
{
template<class T, class U>
struct node
{
	public:
	// T key;
	// U value;
	typedef ft::pair<const T, U>        			value_type;
	value_type		pt;
	struct node    *parent;
	int hight; // hight evry node
	struct node    *right;
	struct node    *left;
	node(): parent(0), right(0), left(0) {}
	node(value_type p): pt(p), parent(0), right(0), left(0) {}
	node(const T &first, const U &second): pt(first, second), parent(0), right(0), left(0) {}
};



template<class key, class value>
class avl_tree
{

public:
	typedef size_t                      							size_type;
	typedef typename ft::node<key, value>::value_type        		value_type;
	typedef key														key_type;
	typedef value													mapped_value;
	
private:
	struct node<key, value> *root; // underline containre
public:
	avl_tree() : root(NULL)
	{
		std::cout << "default here" << std::endl;
	}
	avl_tree(const avl_tree &at)
	{
		std::cout << "copy const" << std::endl;
		*this = at;
	}
	void operator=(const avl_tree &at)
	{
		this->root = copy_helper(at.root);
	}
	~avl_tree(){}
	//getter
	struct node<key, value> *get() const 
	{
		return root;
	}

	struct node<key, value> * copy_helper(node<key, value> *cp)
	{
		if (cp == NULL)
			return NULL;
		struct node<key, value> *copy = new node<key, value>(cp->pt.first, cp->pt.second);
		// copy->pt.first = cp->pt.first;
		// copy->pt.second = cp->pt.second;
		copy->hight = cp->hight;
		copy->parent = cp->parent;
		copy->left = copy_helper(cp->left);
		copy->right = copy_helper(cp->right);
		return copy;
		
	}
	int bf(node<key, value> *&n)
	{
		if (n->right && n->left)
			return n->left->hight - n->right->hight;
		else if (n->right == NULL && n->left)
			return n->left->hight;
		else if (n->right && n->left == NULL)
			return -n->right->hight;
		return 1;
	}

	struct node<key, value> *LLrotation(node<key, value> *n)
	{
		struct node<key, value> *p;
		struct node<key, value> *tm_p;

		p = n; //copy from our struct

		tm_p = p->left;
		p->left = tm_p->right;

		tm_p->right = p;
		std::cout << "left - left rotation" << std::endl;
		return tm_p;
	}

	struct node<key, value> *RRrotation(node<key, value> *n)
	{
		struct node<key, value> *p;
		struct node<key, value> *tm_p;

		p = n; // copy of out node
		tm_p = p->right;

		p->right = tm_p->left;

		tm_p->left = p;

		std::cout << "right - right rotation" << std::endl;
		return tm_p;
	}

	struct node<key, value> *RLrotation(node<key, value> *n)
	{
		struct node<key, value> *p;
		struct node<key, value> *tm_p;
		struct node<key, value> *tm_p2;

		p = n; // first copy from n node
		tm_p = p->right;
		tm_p2 = tm_p->left;

		p->right = tm_p2->left;
		tm_p->left = tm_p2->right;


		tm_p2->left = p;
		tm_p2->right = tm_p;

		std::cout << "right-left rotation" << std::endl;
		return tm_p2;

	}
	

	struct node<key, value> *LRrotation(node<key, value> *n)
	{
		struct node<key, value> *p;
		struct node<key, value> *tm_p;
		struct node<key, value> *tm_p2;

		p = n;
		tm_p = p->left;
		tm_p2 = tm_p->right;

		p->left = tm_p2->right;
		tm_p->right = tm_p2->left;

		tm_p2->right =  p;
		tm_p2->left  = tm_p;

		std::cout << "left-right rotation" << std::endl;
		return tm_p2;
	}

	int  add_new(node<key, value> *&r, const value_type& val, struct node<key, value>   *parent)
	{
		int ret;
		if (r == NULL)
	   {

			r = new node<key, value>(ft::make_pair(val.first, val.second));
			// r->pt.first = val.first;
			// r->pt.second =  val.second;
			// r->pt = ;

			r->hight = 1;
			r->parent = parent;
			r->right = NULL;
			r->left =  NULL;
			return true;
	   }
	   else
	   {
		  if(val.first == r->pt.first)
		  		return false; 
			else if  (val.first > r->pt.first)
				ret = add_new(r->right, val, r);
			else
				ret = add_new(r->left, val, r);
	   }
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

	int cal_hight(node<key, value> *r)
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

		int ret = add_new(root, val, NULL);
		
		return ret;
	}

	struct node<key_type, value> *inorder_predecessor(struct node<key_type, value> *t)
	{
		//the largest element of the left sub tree.
		while(t->right != NULL)
			t = t->right;
		return t;
	}

	struct node<key_type, value> *inorder_successor(struct node<key_type, value> *t)
	{
		//the smallest element of the right sub tree
		while(t->left != NULL)
			t = t->left;
		return t;
	}

	struct node<key_type, value> *deleteNode(node<key_type, value> *r, key_type k)
	{
		if (r->right == NULL && r->left == NULL)
		{
			if(k == r->pt.first)
			{
				std::cout << "here" << std::endl;
				delete r;
			}
			return NULL;
		}
		struct node<key_type, value> *tmp;
		if (k < r->pt.first)
		{
			std::cout << "left test" << std::endl;
			r->left = deleteNode(r->left, k);
		}
		else if (k > r->pt.first)
		{
			std::cout << "right test" << std::endl;
			r->right = deleteNode(r->right, k);
		}
		else
		{
			if (r->left != NULL)
			{
				tmp = inorder_predecessor(r->left);
				r->pt.first = tmp->pt.first;
				r->pt.second = tmp->pt.second;
				r->left = deleteNode(r->left, tmp->pt.first);
			}
			else if (r->right != NULL)
			{
				tmp = inorder_successor(r->right);
				r->pt.first = tmp->pt.first;
				r->pt.second = tmp->pt.second;
				r->right = deleteNode(r->right, tmp->pt.second);
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


	int dele(int data) // return size
	{
		root = deleteNode(root, data);
		return 0;
	}

	// void print(node<key, value> * ptr)
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
	// void test_plus_plus_1(node<key, value> * pr)
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
		std::cout << "heree" << std::endl;
		
		return (root->pt);
	}

	struct node<key, value> *operator->() const
	{
		return (&operator*());
	}

	//preoprator ++ mean ++a;
	avl_tree begin()
	{
		root = inorder_successor(root);
		return *this;
	}

	avl_tree end()
	{
		return (avl_tree());
	}
	avl_tree &operator++()
	{
		struct node<key, value> *tmp;
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
				struct node<key, value> *tmp;
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

	}

	



	
};


}




#endif