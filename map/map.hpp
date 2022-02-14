#ifndef MAP_HPP
#define MAP_HPP
#include "../vector/vector.hpp"
#include "my_utility.hpp"
#include "map_iterator.hpp"
#include "avl_tree.hpp"
#include "../vector/vector_iterator.hpp"


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
			typedef Key                                 		key_type;
			typedef T                                   		mapped_type;
			typedef ft::pair<const key_type, mapped_type>    	value_type;
			typedef Compare                             		key_compare;
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
			typedef Alloc														allocator_type;
			typedef	value_type&													reference;
			typedef const value_type&											const_reference;
			typedef value_type*													pointer;
			typedef	const value_type* 											const_pointer;	
			typedef  ft::map_iterator<ft::avl_tree<value_type> > 				iterator;	//a bidirectional iterator to value_type
			typedef ft::map_iterator<ft::avl_tree<const value_type> > 			const_iterator;	//a bidirectional iterator to value_type
			typedef ft::reverse_iterator<iterator>								reverse_iterator;
			typedef ft::reverse_iterator<const_iterator>						const_reverse_iterator;
			typedef typename iterator_traits<iterator>::difference_type			difference_type;
			typedef size_t														size_type;
			private:
				ft::avl_tree<value_type> tree_base;
			public:
			// //Iterators function
			iterator begin()
			{
				return (iterator(tree_base.begin()));
			}
			const_iterator begin() const
			{
				return (const_iterator(tree_base.begin()));
			}
			iterator end()
			{
				return (iterator(tree_base.end()));
			}
			const_iterator end() const
			{
				return (const_iterator(tree_base.end()));
			}	

			reverse_iterator rbegin()
			{
				return (reverse_iterator(end()));
			}
			const_reverse_iterator rbegin() const
			{
				return (const_reverse_iterator(end()));
			}
			reverse_iterator rend()
			{
				return (reverse_iterator(begin()));
			}
			const_reverse_iterator	rend ()		const	
			{ 
				return (const_reverse_iterator(begin())); 
			}

			//Capacity function
			bool empty() const
			{
				
			}



	};

}




#endif