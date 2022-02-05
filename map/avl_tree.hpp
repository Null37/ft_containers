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
	struct node    *right;
	struct node    *left;

	
};



template<class key, class value>
class avl_tree
{

public:
	typedef size_t                      size_type;
	typedef ft::pair<key, value>        value_type;
// private:
	struct node<key, value> *root; // underline containre
public:
	avl_tree()
	{
		// root.key = 0;
		// root.value = 0;
		// root.right = NULL;
		// root.left = NULL;
		root = NULL;
	}
	~avl_tree(){}
	void add_new(node<key, value> *&r, value_type& val)
	{
		r = new struct node<key, value>;
		r->key = val.first;
		r->value =  val.second;
		r->right = NULL;
		r->left =  NULL;
		// return r;
	}
	bool insert (value_type& val)
	{
	   if (root == NULL)
	   {
			add_new(root, val);
			std::cout << "key is " << root->key << std::endl;
		   return true; 
	   }
	   else
	   {
		   if (val.first > root->key)
		   {
		   		// insert (val, root->right);
				// root = 
				add_new(root->right, val);
				std::cout << "key is " << root->right->key << std::endl;
		   }
			// else
			// 	insert (val, root->left);
	   }
		return false;
	}
};


}




#endif