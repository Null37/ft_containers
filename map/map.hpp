#ifndef MAP_HPP
#define MAP_HPP
#include "../vector/vector.hpp"
#include "my_ utility.hpp"



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
			typedef key                                 key_type;
			typedef T                                   mapped_type;
			typedef pair<const key_type,mapped_type>    value_type;
			typedef Compare                             key_compare;
			// create funcion value_compare .......... 
			typedef Alloc								allocator_type;
			typedef	value_type&							reference;
			typedef const value_type&					const_reference;
			typedef value_type*							pointer;
			typedef	const value_type* 					const_pointer;	
			//typedef  map_iterator                       iterator;	//a bidirectional iterator to value_type		
	};

}




#endif