#ifndef MAP_ITERATOR_HPP
#define MAP_ITERATOR_HPP

#include <iterator>


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

private:
	iterator_type tree;
	map_iterator(){} // default

	map_iterator(const map_iterator &cp_it) // copy constructor
	{
		this->tree(cp_it.tree);    
	}
	void operator=(const map_iterator &cp_it) //
	{
		this->tree = cp_it.tree;
	}
	~map_iterator(){}


	//overload operator
	bool operator==(const map_iterator& it)
	{
		return (tree == it.tree);
	}
	bool operator!=(const map_iterator& it)
	{
		return !(tree == it.tree);
	}

	// value_type& operator*() const
	// {
	// 	return (tree.operator*());
	// }

	
	


	

};



}





#endif

