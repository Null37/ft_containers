#ifndef MAP_ITERATOR_HPP
#define MAP_ITERATOR_HPP

//#include <iterator>
#include "my_utility.hpp"
#include "../iterator_traits.hpp"

namespace ft
{

template<class root_node, class return_node, class compare, class Alloc>
class map_iterator
{

public:
	typedef	avl_base											iterator_type;
	typedef typename avl_base::key_type         				key_type;
	typedef typename avl_base::mapped_value						mapped_type;
	typedef ft::pair<const key_type, mapped_type>				value_type;
	typedef std::bidirectional_iterator_tag						iterator_category;
	typedef typename avl_base::pointer							pointer;
	typedef ptrdiff_t											difference_type;
	typedef	avl_base&											reference;

public:
	typedef map_iterator<const avl_base>  const_iterator;
	typedef typename avl_base::pointer_node pointer_node;
public:
	iterator_type tree;
	// pointer_node root; // underline containre
	// pointer_node re_node;
public:
	// const int ft::pair<const int, int>::first;
	// map_iterator(const pointer_node &root_p,const  pointer_node &node_p): tree(root_p, node_p){} // default
	map_iterator(const iterator_type &cp): tree(cp){
		// std::cout << "test 1 is here" << std::endl;

	}
	
	map_iterator(const map_iterator &cp_it):tree(cp_it.tree){} // copy constructor
	
	operator const_iterator()
	{
		std::cerr << " testt test " << std::endl;
		exit(12);
			// return const_iterator(this->tree);
	} 
	void operator=(const map_iterator &cp_it) //
	{
		this->tree = cp_it.tree;
	}

	~map_iterator(){}
	public:
	//overload operator
	
	bool operator==(const map_iterator& it)
	{
		return (tree == it.tree);
	}
	bool operator!=(const map_iterator& it)
	{
		return !(tree == it.tree);
	}

	value_type& operator*() const
	{
		return (tree.operator*());
	}
	pointer operator->()
	{
		return (tree.operator->());
	}

	map_iterator &operator++()		//prefix oprator ++ mean ++a;
	{
		++tree;
		// tree.operator++();
		return(*this);
	}
	map_iterator operator++(int) // // post-operator ++ mean a++
	{
		map_iterator	_tmp(*this);
		++(*this);
		// std::cout << "tmp ==> " << _tmp.tree.root->pt.first << std::endl;
		return _tmp;
	}

	map_iterator &operator--() // pre-operator --
	{
		--tree;
		return (*this);
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

