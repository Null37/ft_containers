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
	T key;
	U value;
	int hight; // hight evry node
	struct node    *right;
	struct node    *left;
};



template<class key, class value>
class avl_tree
{

public:
	typedef size_t                      size_type;
	typedef ft::pair<key, value>        value_type;
private:
	struct node<key, value> *root; // underline containre
public:
	avl_tree()
	{
		root = NULL;
	}
	~avl_tree(){}
	//getter
	struct node<key, value> *get()
	{
		return root;
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
	

	int  add_new(node<key, value> *&r, value_type& val)
	{
		int ret;
		if (r == NULL)
	   {
			r = new node<key, value>;
			r->key = val.first;
			r->value =  val.second;
			r->hight = 1;
			r->right = NULL;
			r->left =  NULL;
			return true;
	   }
	   else
	   {
		  if(val.first == r->key)
		  		return false; 
			else if  (val.first > r->key)
				ret = add_new(r->right, val);
			else
				ret = add_new(r->left, val);
	   }
	   r->hight = cal_hight(r);
	   	if (bf(r) == 2 && bf(r->left) == 1)
			r = LLrotation(r); // left-left rotation
		else if (bf(r) == -2 && bf(r->right) == -1)
			r = RRrotation(r);//  right-right rotation
		else if (bf(r) == -2 && bf(r->right) == 1)
			r = RLrotation(r);// right-left rotation
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

	bool insert (value_type& val) // add deletion
	{

		int ret = add_new(root, val);
		
		return ret;
	}
};


}




#endif