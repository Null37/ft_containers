#ifndef MAP_HPP
#define MAP_HPP
#include "../vector/vector.hpp"
#include "my_utility.hpp"



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
			typedef Key                                 key_type;
			typedef T                                   mapped_type;
			typedef pair<const key_type,mapped_type>    value_type;
			typedef Compare                             key_compare;
			class value_compare
			{
				  friend class map;
				protected:
				Compare comp;
				value_compare (Compare c) : comp(c) {}  // constructed with map's comparison object
				public:
				typedef bool result_type;
				typedef value_type first_argument_type;
				typedef value_type second_argument_type;
				result_type operator() (const first_argument_type& x, const second_argument_type& y) const
				{
					return comp(x.first, y.first);
				}
			};
			typedef value_compare value_comp;
			typedef Alloc								allocator_type;
			typedef	value_type&							reference;
			typedef const value_type&					const_reference;
			typedef value_type*							pointer;
			typedef	const value_type* 					const_pointer;	
			//typedef  map_iterator                       iterator;	//a bidirectional iterator to value_type		
	};

}




#endif