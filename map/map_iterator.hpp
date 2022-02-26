#ifndef MAP_ITERATOR_HPP
#define MAP_ITERATOR_HPP


//#include <iterator>
#include "../iterator_traits.hpp"

namespace ft
{

template<class avl_base>
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
	iterator_type tree;
public:
	// const int ft::pair<const int, int>::first;
	map_iterator(){} // default
	map_iterator(iterator_type cp): tree(cp){}
	map_iterator(const map_iterator &cp_it):tree(cp_it.tree){} // copy constructor
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

