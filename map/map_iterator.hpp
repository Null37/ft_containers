#ifndef MAP_ITERATOR_HPP
#define MAP_ITERATOR_HPP





namespace ft
{

template<class avl_base>
class map_iterator
{
private:
	avl_base tree;
public:
	typedef typename avl_base::key_type         				key_type;
	typedef typename avl_base::mapped_value						mapped_type;
	// typedef typename ft::pair<key_type, mapped_type>::first 	first;
	// typedef typename ft::pair<key_type, mapped_type>::second 	second;
	typedef ft::pair<const key_type, mapped_type>						value_type;

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

