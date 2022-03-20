#ifndef MAP_ITERATOR_HPP
#define MAP_ITERATOR_HPP

#include "my_utility.hpp"
#include "iterator_traits.hpp"

namespace ft
{

template<class pointer_node, class value>
class map_iterator
{

public:
	typedef	pointer_node											iterator_type;
	typedef value													value_type;
	typedef typename value_type::first_type       					key_type;
	typedef typename value_type::second_type						mapped_type;
	typedef std::bidirectional_iterator_tag							iterator_category;
	typedef value_type*												pointer;
	typedef ptrdiff_t												difference_type;
	typedef	value&													reference;


	
private:
	typedef map_iterator<iterator_type, const value>  const_iterator;
	iterator_type 		root; // root save node
	iterator_type 		re_node; // operator node 
	iterator_type 		last_node; // end()
	iterator_type inorder_predecessor(iterator_type tc)
	{
		//the largest element of the left sub tree.
		while(tc->right != NULL)
			tc = tc->right;
		return tc;
	}
	iterator_type inorder_successor(iterator_type tc)
	{
		//the smallest element of the right sub tree
		// iterator_type t = tc;
		while(tc->left != NULL)
			tc = tc->left;
		return tc;
	}
public:
	
	operator const_iterator()
	{
		// overload for const cast
		return const_iterator(root, re_node, last_node);
	} 
	// new contractor
	map_iterator(): root(NULL), re_node(NULL), last_node(NULL){} 
	map_iterator(const iterator_type cp_root, const iterator_type cp_re_node, iterator_type cp_last): root(cp_root), re_node(cp_re_node), last_node(cp_last){}
	map_iterator(const map_iterator &cp_it): root(cp_it.root), re_node(cp_it.re_node), last_node(cp_it.last_node){} // copy constructor
	
	void operator=(  map_iterator const &cp_it ) //
	{
		this->root = cp_it.root;
		this->re_node = cp_it.re_node;
		this->last_node = cp_it.last_node;
	}

	~map_iterator(){}
	//overload operator
	
	bool operator==(const map_iterator& it)
	{
		return (re_node == it.re_node);
	}
	bool operator!=(const map_iterator& it)
	{
		return re_node != it.re_node;
	}
	reference operator*() const
	{
		return (re_node->pt);
	}
	pointer operator->() const
	{
		return (&operator*());
	}

	map_iterator &operator++()		//prefix oprator ++ mean ++a; 
	{
		iterator_type tmp;
		if(re_node->right != nullptr)
		{
			// if has right go to most left
			re_node = re_node->right;
			re_node = inorder_successor(re_node);
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
		}
		if(re_node == nullptr)
		{
			re_node = last_node;
		}
		return *this;

	}
	map_iterator operator++(int) // // post-operator ++ mean a++
	{
		map_iterator	_tmp(*this);
		++(*this);
		return _tmp;
	}

	map_iterator &operator--() // pre-operator --
	{
		if(this->re_node == last_node)
		{
			re_node = last_node->parent;
			return *this;
		}
		else if(re_node->left != NULL)
		{
			// if has right go to most left
			re_node = re_node->left;
			re_node = inorder_predecessor(re_node); // get most-right
		}
		else
		{
			//if not, return to parent
			iterator_type tmp = re_node->parent;
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
	

	map_iterator operator--(int) // post-operator -- mean a--
	{
		map_iterator	_tmp(*this);
		--(*this);
		return _tmp;
	}
};


}





#endif

