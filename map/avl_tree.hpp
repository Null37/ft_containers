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
	typedef typename value_type::first_type first_type;
	typedef typename value_type::second_type second_type;
	typedef	node<value_type>*										pointer_node;
	typedef value_type*												pointer;
	value_type		pt;
	pointer_node parent;
	pointer_node right;
	pointer_node left;
	int hight; // hight evry node
	node(): parent(0), right(0), left(0) {}
	node(value_type p): pt(p), parent(0), right(0), left(0) {}
	node(const first_type &first, const second_type &second): pt(first, second), parent(0), right(0), left(0), hight(0) {}
	node(const first_type &first, const second_type &second, pointer_node cp, pointer_node rp, pointer_node lp, int hp): pt(first, second), parent(cp), right(rp), left(lp), hight(hp) {}

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
// pravite:
	pointer_node root; // underline containre
	pointer_node last_node;
	bool is_del;
	key_compare comp;
	alloc_type  alloc; // rebind allocation
	size_type 	avl_size;
public:
	//size_t size;
	avl_tree() : root(NULL)
	{
		last_node =  alloc.allocate(1); // create end
		comp = key_compare();
		is_del = false;
		alloc = alloc_type();
	}
	avl_tree(const avl_tree &at): comp()
	{
		this->root = NULL;
		this->last_node = NULL;
		this->alloc = alloc_type();
		*this = at;
	}

	avl_tree &operator=(const avl_tree &at)
	{
		this->is_del = at.is_del;
		this->root = copy_helper(at.root, NULL);
		this->avl_size = at.avl_size;
		this->last_node =  alloc.allocate(1);
		return *this;
	}
	//getter
	struct node<value_type> * copy_helper(node<value_type> *cp, node<value_type> *par_cp)
	{
		if (cp == NULL)
			return NULL;
		node<value_type> *copy = alloc.allocate(1);
		alloc.construct(copy, node<value_type>(cp->pt.first, cp->pt.second));
		copy->hight = cp->hight;
		copy->parent = par_cp;
		copy->left = copy_helper(cp->left, copy);
		copy->right = copy_helper(cp->right, copy);
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

	void parent_correction(node<value_type> *&n, node<value_type> *p)
	{
		if (n == NULL)
			return ;
		parent_correction(n->right, n);
		n->parent = p;
		parent_correction(n->left, n);
	}

	node<value_type> *LLrotation(node<value_type> *x)
	{
		pointer_node y = x->right; // start split nodes
		pointer_node T2 = y->left;

		y->left = x;
		x->right = T2;
	
		parent_correction(y, x->parent); // start set all parrenet

		// update height :)
		if (y->left)
			y->left->hight = cal_hight(y->left);
		if (y->right)
			y->right->hight = cal_hight(y->right);
		y->hight = cal_hight(y);
		return y;
	}

	node<value_type> *RRrotation(node<value_type> *y)
	{
		   pointer_node x = y->left;
		   pointer_node T2 = x->right;

		   x->right = y;
		   y->left = T2;
		parent_correction(x, y->parent);  // start set all parrenet 

		// update height :)
		if (x->right)
			x->right->hight = cal_hight(x->right);
		if (x->left)
			x->left->hight = cal_hight(x->left);
		x->hight =  cal_hight(x);

		return x;
	}

	bool  add_new(node<value_type> *&r, const value_type& val, node<value_type>   *parent)
	{
		bool ret = false;
		if (r == NULL)
	   {
			r = alloc.allocate(1); // create new node
			alloc.construct(r, node<value_type>(ft::make_pair(val.first, val.second))); // set new node use construct
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
		  		return false; // don't set node if seme key bc: map have uniq keys 
		  }
			// else if  (val.first > r->pt.first) // 
			else if (comp(r->pt.first, val.first))
				ret = add_new(r->right, val, r);
			else if (comp(val.first, r->pt.first)) //  add compare(val.first, r.pt.firt)
				ret = add_new(r->left, val, r);
	   }
	   if(ret == false)
	   		return ret;
	   	r->hight = cal_hight(r);

	   	if (bf(r) > 1 && comp(val.first, r->left->pt.first))//val.first < r->left->pt.first
			r = RRrotation(r); // left-left rotation
		else if (bf(r) < -1 &&  comp(r->right->pt.first, val.first))//val.first > r->right->pt.first
			r = LLrotation(r);//  right-right rotation
		else if (bf(r) < -1 && comp(val.first,  r->right->pt.first))//val.first < r->right->pt.first
		{
			r->right = RRrotation(r->right);
			r = LLrotation(r);
		}
		else if (bf(r) > 1 && comp(r->left->pt.first, val.first))//val.first > r->left->pt.first
		{
			r->left = LLrotation(r->left);
			r = RRrotation(r);
		}

		// update height
		if (r->left)
			r->left->parent = r;
		if (r->right)
			r->right->parent = r;
		this->last_node->parent = inorder_predecessor(r); // set end
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
		return 1;
	}

	bool insert (const value_type& val) // add deletion
	{
		bool ret = add_new(root, val, NULL);
		if (ret == true )
			avl_size++;
		return ret;
	}

	node<value_type> *inorder_predecessor(node<value_type> *t)
	{
		//the largest element of the left sub tree.
		while(t->right != NULL)
			t = t->right;
		return t;
	}

	node<value_type> *inorder_successor(node<value_type> *t)
	{
		//the smallest element of the right sub tree

		while(t->left != NULL)
			t = t->left;
		return t;
	}
	node<value_type> *inorder_successor_const(node<value_type> *t) const  // for const functions
	{
		//the smallest element of the right sub tree
		while(t->left != NULL)
			t = t->left;
		return t;
	}

	node<value_type> *deleteNode(node<value_type> *r, key_type k)
	{
		if(r == NULL)
		{
			is_del = false;
			return NULL;
		}
		node<value_type> *tmp;
		if (comp(k, r->pt.first))// k < r->pt.first
		{
			// std::cout << "left test" << std::endl;
			r->left = deleteNode(r->left, k);
		}
		else if (comp(r->pt.first, k))//k > r->pt.first
		{
			// std::cout << "right test" << std::endl;
			r->right = deleteNode(r->right, k);
		}
		else if (k == r->pt.first)
		{
			if (r->left != NULL)
			{
				tmp = inorder_predecessor(r->left);
				pointer_node tmp_r = r->right;
				pointer_node tmp_l = r->left;
				pointer_node tmp_pa = r->parent;
				int tmp_h = r->hight;
				alloc.destroy(r); // destroy old node
				alloc.deallocate(r, 1);
				r  = alloc.allocate(1);
				alloc.construct(r, node<value_type>(tmp->pt.first, tmp->pt.second, tmp_pa, tmp_r, tmp_l, tmp_h)); // copy hieght and parent ........
				r->left =  deleteNode(r->left , tmp->pt.first); // delete next node
			}
			else if (r->right != NULL)
			{
				tmp = inorder_successor(r->right);
				pointer_node tmp_r = r->right;
				pointer_node tmp_l = r->left;
				pointer_node tmp_pa = r->parent;
				int tmp_h = r->hight;
				alloc.destroy(r); // destroy old node
				alloc.deallocate(r, 1);
				r  = alloc.allocate(1);
				alloc.construct(r, node<value_type>(tmp->pt.first, tmp->pt.second, tmp_pa, tmp_r, tmp_l, tmp_h)); // copy hieght and parent ........
				r->right = deleteNode(r->right , tmp->pt.first); // delete next node
			}
			else
			{
				if(k == r->pt.first)
				{
					is_del = true;
					alloc.destroy(r);
					alloc.deallocate(r, 1);
				}
				else
					is_del = false;
				return NULL;

			}
		}
		//balance cases
		if (root == NULL) // if root == null mean no more node for delet 
			return NULL;
		// update heghit
		r->hight = cal_hight(r);
		if (r->left)
			r->left->hight = cal_hight(r->left);
		if (r->right)
			r->right->hight = cal_hight(r->right);

		// update balance
	   	if (bf(r) > 1 && bf(r->left) >= 0)
			r = RRrotation(r); // left-left rotation
		else if (bf(r) < -1 && bf(r->right) <= 0)
			r = LLrotation(r);//  right-right rotation
		else if (bf(r) < -1 && bf(r->right) > 0)
		{
			r->right = RRrotation(r->right); // right-left rotation
			r = LLrotation(r);
		}
		else if (bf(r) > 1 && bf(r->left) < 0)
		{
			r->left = LLrotation(r->left); // left-right rotation
			r = RRrotation(r);
		}

	// update parent
		if (r->left)
			r->left->parent = r;
		if (r->right)
			r->right->parent = r;
		return r;
	}

	int dele(key_type data)  
	{
		if(root == NULL)
			return 0;
		root = deleteNode(root, data);
		if(is_del ==  true)
			avl_size--;
		return 0;
	}

	mapped_value &search(const key_type& k, node<value_type> *r)
	{
		try
		{
			if(r && k == r->pt.first)
			{
				return r->pt.second;
			}
			if (r && comp(k, r->pt.first))//k < r->pt.first
			{
				return(search(k, r->left));
			}
			else if (r && comp(r->pt.first, k))// k > r->pt.first
			{
				return(search(k, r->right));
			}
			throw "Error";
		}
		catch(const char *s)
		{
			throw s;
		}
	}

	avl_tree search_uniq(const key_type& k, node<value_type> *r)
	{
		try
		{
			if(r && k == r->pt.first)
			{
				avl_tree tmp;
				tmp.root  = r;
				return tmp;
			}
			if (r && comp(k, r->pt.first))//k < r->pt.first
			{
				return(search_uniq(k, r->left));
			}
			else if (r && comp(r->pt.first, k))//k > r->pt.first
			{
				return(search_uniq(k, r->right));
			}
			throw "Error";
		}
		catch(const char *s)
		{
			throw s;
		}
	}
	pointer_node search_uniq1(const key_type& k, node<value_type> *r)
	{
		try
		{
			if(r && k == r->pt.first)
			{

				pointer_node tmp;
				tmp   = r;
				return tmp;
			}
			if (r && comp(k, r->pt.first))//k < r->pt.first
			{

				return(search_uniq1(k, r->left));
			}
			else if (r &&  comp(r->pt.first, k))//k > r->pt.first
			{
				return(search_uniq1(k, r->right));
			}
			throw "Error";
		}
		catch(const char *s)
		{
			throw s;
		}

	}
	const pointer_node search_uniq1_const(const key_type& k, node<value_type> *r) const 
	{
		try
		{
			if(r && k == r->pt.first)
			{

				pointer_node tmp;
				tmp   = r;
				return tmp;
			}
			if (r &&  comp(k, r->pt.first) )//k < r->pt.first
			{
				return(search_uniq1_const(k, r->left));
			}
			else if (r && comp(r->pt.first, k))//k > r->pt.first
			{
				return(search_uniq1_const(k, r->right));
			}
			throw "Error";
		}
		catch(const char *s)
		{
			throw s;
		}
	}

};


}

#endif
