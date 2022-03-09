#ifndef MAP_ITERATOR_HPP
#define MAP_ITERATOR_HPP

//#include <iterator>
#include "my_utility.hpp"
#include "../iterator_traits.hpp"

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
	typedef	pointer_node&												reference;

// private:
// 	typedef map_iterator<const avl_base>  const_iterator;
// 	typedef typename avl_base::pointer_node pointer_node;
private:
	// iterator_type tree;
	iterator_type root;
	iterator_type re_node;
	iterator_type last_node;
	iterator_type inorder_predecessor(iterator_type tc)
	{
		//the largest element of the left sub tree.
		iterator_type t = tc;
		while(t->right != NULL)
			t = t->right;
		return t;
	}

	iterator_type inorder_successor(iterator_type tc)
	{
		//the smallest element of the right sub tree
		iterator_type t = tc;

		while(t->left != NULL)
			t = t->left;
		return t;
	}
public:
	// const int ft::pair<const int, int>::first;
	// map_iterator(const pointer_node &root_p,const  pointer_node &node_p): tree(root_p, node_p){} // default
	// map_iterator(const iterator_type &cp): tree(cp){
	// 	// std::cout << "test 1 is here" << std::endl;

	// }
	
	// new contractor
	map_iterator(){};
	map_iterator(const iterator_type cp_root, const iterator_type cp_re_node, iterator_type cp_last): root(cp_root), re_node(cp_re_node), last_node(cp_last){}
	map_iterator(const map_iterator &cp_it)
	{
		*this = cp_it;
	} // copy constructor
	
	// operator const_iterator()
	// {
	// 	std::cerr << " testt test " << std::endl;
	// 	exit(12);
	// 		// return const_iterator(this->tree);
	// } 
	void operator=(const map_iterator &cp_it) //
	{
		this->root = cp_it.root;
		this->re_node = cp_it.re_node;
	}

	~map_iterator(){}
	public:
	//overload operator
	
	bool operator==(const map_iterator& it)
	{
		return (re_node->pt == it.re_node->pt);
	}
	bool operator!=(const map_iterator& it)
	{
		return !(re_node->pt == it.re_node->pt);
	}
	value_type& operator*() const
	{
		return (re_node->pt);
	}
	pointer operator->()
	{
		return (&operator*());
	}

	map_iterator &operator++()		//prefix oprator ++ mean ++a; 
	{
		iterator_type tmp;
		if(re_node->right != NULL)
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
			re_node =  inorder_predecessor(root);
		}
		else if(re_node->left != NULL)
		{
			// if has right go to most left
			re_node = re_node->left;
			re_node = inorder_predecessor(re_node); // get most-right
		}
		else
		{
			pointer_node tmp;
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
	

	map_iterator operator--(int) // post-operator -- mean a--
	{
		map_iterator	_tmp(*this);
		--(*this);
		return _tmp;
	}
	// map_iterator begin()
	// {
	// 	return (tree.begin());
	// }
	// map_iterator end()
	// {
	// 	return (tree.end());
	// }
	// my fucntion
	private:
	// map_iterator end()
	// {
	// 	pointer_node tmp_node;
	// 	// tmp_node  = new node<value_type>(save, mapped_value()); // new one two end
	// 	tmp_node =  alloc.allocate(1);
	// 	// alloc.construct(tmp_node, node<value_type>(save, mapped_value()));
	// 	return map_iterator(root, tmp_node)
	// }
};


// template<class Iterator>
// class reverse_iterator
// {
// 	public:
// 		// Member types
// 	typedef Iterator 												iterator_type;
// 	typedef typename iterator_traits<Iterator>::iterator_category	iterator_category;
// 	typedef typename iterator_traits<Iterator>::value_type			value_type;
// 	typedef typename iterator_traits<Iterator>::difference_type 	difference_type;
// 	typedef typename iterator_traits<Iterator>::pointer 			pointer;
// 	typedef typename iterator_traits<Iterator>::reference			reference;
// 	private:
// 		iterator_type rv_it;
// 	public:
// 	//Member functions
// 	reverse_iterator() : rv_it() {}
// 	explicit reverse_iterator (iterator_type it): rv_it(it) {}
// 	template <class Iter>
//   	reverse_iterator (const reverse_iterator<Iter>& rev_it): rv_it{rev_it.base()}

	


// };


		


}





#endif

