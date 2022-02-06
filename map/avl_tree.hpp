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
	struct node<key, value> *get()
	{
		return root;
	}
	int  add_new(node<key, value> *&r, value_type& val)
	{
		if (r == NULL)
	   {
			r = new node<key, value>;
			r->key = val.first;
			r->value =  val.second;
			r->hight = 0;
			r->right = NULL;
			r->left =  NULL;
			return true;
	   }
	   else
	   {
		  if(val.first == r->key)
		  		return false; 
			else if  (val.first > r->key)
				return (add_new(r->right, val));
			else
				return (add_new(r->left, val));
	   }
	   return false;
	}
	// int cal_hight(node<key, value> *r)
	// {
	// 	if (r->right && r->left)
	// 	{
	// 		if (r->right->hight < r->left->hight)
	// 			return r
	// 	}
	// 	return 0;
	// }

	bool insert (value_type& val) // add deletion
	{
									//add balance
		// 	add_new(root, val);
		// //    if (val.first == root->key)
		// //    		return false;
		//    if (val.first > root->key)
		// 		add_new(root->right, val);
		// 	// else
		// 	//  	add_new(root->left, val);
		add_new(root, val);


		
		return false;
	}
};


}




#endif