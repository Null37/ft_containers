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
			typedef ft::map_iterator<ft::avl_tree<value_type> > 				iterator;	//a bidirectional iterator to value_type
			typedef ft::map_iterator<ft::avl_tree<const value_type> > 			const_iterator;	//a bidirectional iterator to value_type
			typedef ft::reverse_iterator<iterator>								reverse_iterator;
			typedef ft::reverse_iterator<const_iterator>						const_reverse_iterator;
			typedef typename iterator_traits<iterator>::difference_type			difference_type;
			typedef size_t														size_type;
			private:
				ft::avl_tree<value_type> 	tree_base;
				size_type 					map_size;
				allocator_type				alloc;
			public:
			// //Iterators function

			// Constructs
			explicit map (const key_compare& comp = key_compare(), const allocator_type& alloc = allocator_type())
			{
				// tree_base = NULL;
				map_size = 0;
				this->alloc = alloc;
			}

			// template <class InputIterator>
			// map (InputIterator first, InputIterator last, const key_compare& comp = key_compare(),
			// 	const allocator_type& alloc = allocator_type())
			// {

			// }
			// map (const map& x)
			// {

			// }
			iterator begin()
			{
				return (iterator(tree_base.begin()));
			}
			// const_iterator begin() const
			// {
			// 	return (const_iterator(tree_base.begin()));
			// }
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
				if (tree_base.get() == NULL)
					return true;
				return false;
			}

			size_type size() const
			{
				return (this->map_size);
			}

			size_type max_size() const
			{
				return alloc.max_size();
			}

			// Element access
			mapped_type& operator[] (const key_type& k)
			{
				
				try
				{
					return(tree_base.search(k, tree_base.get()));
				}
				catch(...) // else not found insert
				{
					map_size++;
					tree_base.insert(ft::make_pair(k,mapped_type()));
					std::cout << "key is  == > " << k << " value is == " << mapped_type() << std::endl;
				}
				return tree_base.root->pt.second;
				
			}
			// Modifiers:

			ft::pair<iterator,bool> insert (const value_type& val) // single element (1)
			{
				bool ret = tree_base.insert(val);
				if (ret == true)
					map_size++;
				iterator it = find(val.first);
				return(ft::make_pair(it, ret));
			}

			iterator insert (iterator position, const value_type& val) //with hint (2)	
			{
				static_cast<void>(position);
				if(tree_base.insert(val) == true)
					map_size++;
				return (find(val.first));
			}
			template <class InputIterator>
  			void insert (InputIterator first, InputIterator last)
			{
				while(first != last)
				{
					insert(*first);
					map_size++;
					first++;
				}
				
			}
			void erase (iterator position)
			{
				tree_base.dele(position->first);
				if (tree_base.is_del ==  true)
					map_size++;
			}

			size_type erase (const key_type& k)
			{
				tree_base.erase(k);
				if (tree_base.is_del ==  true)
					map_size++;
			}

			void erase (iterator first, iterator last)
			{
				for(;first != last ; first++)
				{
					erase(first->first);
					if (tree_base.is_del ==  true)
						map_size++;
				}
			}

			void swap (map& x)
			{
				ft::avl_tree<value_type> tmp = this->tree_base;
				size_type size_tmp = this->map_size;
				this->tree_base = x.tree_base;
				this->map_size  = x.map_size;
				x.tree_base =  tmp;
				x.map_size = size_tmp;
			}

			// Operations functoion
			iterator find (const key_type& k)
			{
				if(tree_base.root != NULL)
				{
					try
					{
						return (iterator(tree_base.search_uniq(k, tree_base.root)));
					}
					catch(const char *s)
					{
						return end();
					}	
				}
				else
					return end();
			}


	};

}




#endif