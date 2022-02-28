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
	// struct node    *end;
	node(): parent(0), right(0), left(0) {}
	// node(const m &at)
	// {
	// 	std::cout << "loooooooool" << "\n";
	// }
	node(value_type p): pt(p), parent(0), right(0), left(0) {}
	node(const first_type &first, const second_type &second): pt(first, second), parent(0), right(0), left(0), hight(0) {}
	node(const first_type &first, const second_type &second, struct node  *cp, struct node    *rp, struct node    *lp, int hp): pt(first, second), parent(cp), right(rp), left(lp), hight(hp) {}

	// node(const node)
	// {
	// 	std::cout << "here 123" << std::endl'
	// }
	// void operator=(const node cp)
	// {
	// 	std::cerr << "test is here " << std::endl;
	// 	// this->pt = cp.pt;
	// 	// this->right = cp.right;
	// 	// this->parent = cp.parent;
	// 	// this->left = cp.left;
	// }
};



template<class value_type,  class compare, class Alloc >
class avl_tree
{

public:
	typedef size_t                      							size_type;
	// typedef typename ft::node<value_type>::value_type        		value_type;
	typedef typename node<value_type>::first_type					key_type;
	typedef typename node<value_type>::second_type					mapped_value;
	typedef	node<value_type>*										pointer_node;
	typedef value_type* 												pointer;
	typedef compare														key_compare;
	typedef typename Alloc::template rebind<node<value_type> >::other  alloc_type;
	// typedef typename pointer_node::first							first;
	// typedef typename pointer_node::second							second;		

public:
	pointer_node root; // underline containre
	pointer_node re_node;
	bool is_del;
	key_compare comp;
	alloc_type  alloc; // rebind allocation
public:
	size_t size;
	avl_tree() : root(NULL), comp(), re_node(NULL), is_del(false), alloc(alloc_type())
	{
		
		// std::numeric_limits<short> a;
		// int save = a.max(); /// max short 
		// re_node  = new node<value_type>(save, mapped_value());
		// std::cout << "default here" << std::endl;
	}
	avl_tree(const avl_tree &at)
	{
		// std::cout << "copy const" << std::endl;
		*this = at;
	}
	avl_tree(pointer_node root_p, pointer_node node_p) // create new one 
	{
		// std::cout << "here " << std::endl;
		// this->root = root_p;
		this->root =  copy_helper(root_p);
		// this->re_node = node_p;
		this->re_node = copy_helper(node_p);
	}
	avl_tree(const pointer_node &at): root(at){} // node gnrate one // deep copy
	void operator=(const avl_tree &at)
	{
		this->root = copy_helper(at.root);
		this->re_node = copy_helper(at.re_node);
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
		// struct node<value_type> *copy = new node<value_type>(cp->pt.first, cp->pt.second); // change to rebind
		node<value_type> *copy = alloc.allocate(1);
		alloc.construct(copy, node<value_type>(cp->pt.first, cp->pt.second));
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
		tm_p->left->parent = p->parent;
		tm_p->left = tm_p2->right;
		tm_p->parent = tm_p2;


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
		tm_p->right->parent = p->parent;
		tm_p->right = tm_p2->left;
		tm_p->parent = tm_p2;

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

			// r = new node<value_type>(ft::make_pair(val.first, val.second)); // change this to  allocator rebind
			r = alloc.allocate(1);
			alloc.construct(r, node<value_type>(ft::make_pair(val.first, val.second)));
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
			else if  (val.first > r->pt.first) // 
				ret = add_new(r->right, val, r);
			else if (comp(val.first, r->pt.first)) //  add compare(val.first, r.pt.firt)
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

	struct node<value_type> *inorder_successor(node<value_type> *tc)
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
				pointer_node tmp_r = r->right;
				pointer_node tmp_l = r->left;
				pointer_node tmp_pa = r->parent;
				int tmp_h = r->hight;
				// r = new node<value_type>(tmp->pt.first, tmp->pt.second, tmp_pa, tmp_r, tmp_l, tmp_h); // change to alloc
				r  = alloc.allocate(1);
				alloc.construct(r, node<value_type>(tmp->pt.first, tmp->pt.second, tmp_pa, tmp_r, tmp_l, tmp_h));
				r->left =  deleteNode(r->left , tmp->pt.first);
			}
			else if (r->right != NULL)
			{
				tmp = inorder_successor(r->right);
				pointer_node tmp_r = r->right;
				pointer_node tmp_l = r->left;
				pointer_node tmp_pa = r->parent;
				int tmp_h = r->hight;
				// r = new node<value_type>(tmp->pt.first, tmp->pt.second, tmp_pa, tmp_r, tmp_l, tmp_h);
				r  = alloc.allocate(1);
				alloc.construct(r, node<value_type>(tmp->pt.first, tmp->pt.second, tmp_pa, tmp_r, tmp_l, tmp_h));
				r->right = deleteNode(r->right , tmp->pt.first);
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
		return (re_node->pt == cp.re_node->pt);
	}


	value_type& operator*() const
	{
		// std::cout << "heree" << std::endl;
		
		return (re_node->pt);
	}

	pointer operator->()
	{
		return (&operator*());
	}

	//preoprator ++ mean ++a;
	avl_tree begin()
	{
		// return avl_tree(inorder_successor(root)); version 1
		return avl_tree(root, inorder_successor(root));
	}

	avl_tree end()
	{
		// return (avl_tree(re_node)); // version 1
		std::numeric_limits<short> a;
		int save = a.max(); /// max short
		pointer_node tmp_node;
		// tmp_node  = new node<value_type>(save, mapped_value()); // new one two end
		tmp_node =  alloc.allocate(1);
		alloc.construct(tmp_node, node<value_type>(save, mapped_value()));
		return avl_tree(root, tmp_node);
	}
	avl_tree &operator++()
	{
		struct node<value_type> *tmp;
		//first check if node has right or not
		if(re_node->right != NULL)
		{
			// if has right go to most left
			re_node = re_node->right;
			re_node = inorder_successor(re_node);
			// return *this;
		}
		else
		{
			//if not, return to parent
			tmp = re_node->parent;
			while (tmp != NULL && re_node == tmp->right)
			{
				re_node = tmp;
				tmp = tmp->parent;
			}
			// if right-most
			re_node = tmp;
			// return *this;
		}
		// std::cerr << "here " << std::endl;
		// return end();
		if(re_node == nullptr)
		{
			// return end() if no more ++
			std::numeric_limits<short> a;
			int save = a.max(); /// max short
			pointer_node tmp_node;
			// tmp_node  = new node<value_type>(save, mapped_value()); // new one two end
			tmp_node =  alloc.allocate(1);
			alloc.construct(tmp_node, node<value_type>(save, mapped_value()));
			re_node = tmp_node;
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
		avl_tree tmp2 = end();
		avl_tree tmp3 = begin();
		if (re_node == tmp2.re_node) // check if last
		{
			// std::cerr << "error  is here" << std::endl;
			re_node =  inorder_predecessor(root);
		}
		else if (re_node->pt == tmp3.re_node->pt)
		{
			// std::cerr << " if this begin " << std::endl;
			re_node = tmp2.re_node;
		}
		//check left to return most left one
		else if(re_node->left != NULL)
		{
			// if has right go to most left
			re_node = re_node->left;
			re_node = inorder_predecessor(re_node); // get most-right
		}
		else
		{
			struct node<value_type> *tmp;
			//if not, return to parent
			tmp = re_node->parent;
			while (tmp != NULL && re_node == tmp->left)
			{
				re_node = tmp;
				tmp = tmp->parent;
			}
			// if right-most
			re_node = tmp;
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

	avl_tree lower_bound (const key_type& k) // unique search for avl tree
	{
		avl_tree tmp = begin();
		// while (comp(tmp.root->pt.first, k))
		// {
		// 	std::cout << tmp.root->pt.first << std::endl;
		// 	tmp++;
		// }
		do
		{
			if(comp((*tmp).first, k)  == false || k == (*tmp).first)
			{
				// std::cout << "my test  ==> " << tmp->first << " mys >> " << tmp->second  << std::endl;
				return (avl_tree(root, tmp.re_node));
			}
		} while (comp((*tmp++).first, k));
		return end();
	}

	avl_tree upper_bound (const key_type& k)
	{
		avl_tree tmp = begin();
		do
		{
			if(comp(k, (*tmp).first)  == true  || k == (*tmp).first)
			{
				if (k == (*tmp).first)
					tmp++;
				// std::cout << "my map  ==> " << tmp->first << " mys >> " << tmp->second  << std::endl;
				return (avl_tree(root, tmp.re_node));
			}
		} while (comp((*tmp++).first, k));
		return end();
	}

	
};


}




#endif