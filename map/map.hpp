#ifndef MAP_HPP
#define MAP_HPP
#include "../vector/vector.hpp"
#include "my_utility.hpp"
#include "avl_tree.hpp"


namespace ft
{

template < class Key,                                     // map::key_type
		   class T,                                       // map::mapped_type
		   class Compare = std::less<Key>,                     // map::key_compare ===> 
		   class Alloc = std::allocator<ft::pair<const Key, T> >    // map::allocator_type ==>
			>
	class map
	{
		public:
			//Member types
			typedef Key                                 	key_type;
			typedef T                                   	mapped_type;
			typedef pair<const key_type, mapped_type>    	value_type;
			typedef Compare                             	key_compare;
			//member class value_compare
			class value_compare
			{
				  friend class map;
				protected:
				key_compare comp;
				value_compare (key_compare c) : comp(c) {}  // constructed with map's comparison object
				public:
				bool operator() (const value_type& x, const value_type& y) const
				{
					return comp(x.first, y.first);
				}
			};
			// typedef value_compare value_comp; 
			typedef Alloc													allocator_type;
			typedef	value_type&												reference;
			typedef const value_type&										const_reference;
			typedef value_type*												pointer;
			typedef	const value_type* 										const_pointer;	
			typedef  ft::avl_tree<key_type, mapped_type>                    iterator;	//a bidirectional iterator to value_type
			

	};

}




#endif