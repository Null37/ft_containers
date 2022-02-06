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
	   		// left-left rotetion
		
		
	   return ret;
	}

	int cal_hight(node<key, value> *r)
	{
		if (r->right && r->left)
		{
			if (r->right->hight < r->left->hight)
				return r->left->hight  + 1;
			else
				return r->right->hight + 1;
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