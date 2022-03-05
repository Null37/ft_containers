#ifndef MAP_HPP
#define MAP_HPP
#include "../vector/vector.hpp"
#include "my_utility.hpp"
#include "map_iterator.hpp"
#include "avl_tree.hpp"
#include  "../type_trais/type_traits.hpp"
#include "../vector/vector_iterator.hpp"

// edit end() ==> map
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
			typedef Compare                             		key_compare; // uset to compare 
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
			typedef Alloc																	 allocator_type;
			typedef	value_type&																 reference;
			typedef const value_type&														 const_reference;
			typedef value_type*																 pointer;
			typedef	const value_type* 														 const_pointer;	
			typedef ft::map_iterator<ft::avl_tree<value_type, key_compare, allocator_type> > iterator;	//a bidirectional iterator to value_type
			typedef ft::map_iterator<ft::avl_tree<value_type, key_compare, allocator_type> > const_iterator;	//a bidirectional iterator to value_type
			typedef ft::reverse_iterator<iterator>											 reverse_iterator;
			typedef ft::reverse_iterator<const_iterator>									 const_reverse_iterator;
			typedef typename iterator_traits<iterator>::difference_type						 difference_type;
			typedef size_t																	 size_type;
			public:
			typedef  ft::avl_tree<value_type, key_compare,  allocator_type> tree_type;
				tree_type													tree_base;
				size_type 													map_size;
				allocator_type												alloc;
			public:
			// //Iterators function

			// Constructs
			explicit map (const key_compare& comp = key_compare(), const allocator_type& alloc = allocator_type()) : tree_base()
			{
				map_size = 0;
				this->alloc = alloc;
			}

			template <class InputIterator>
			map (InputIterator first, InputIterator last, const key_compare& comp = key_compare(), const allocator_type& alloc = allocator_type())
			{
				insert(first, last);
			}
			map (const map& x): tree_base()
			{
				this->map_size = x.map_size;
				this->alloc = x.alloc;
				*this = x;
			}

			map& operator= (const map& x)
			{
				if (*this != x)
				{
					this->tree_base =  x.tree_base;
				}
				return *this;
			}
			~map()
			{
				// if map embty size ===  0 and begin ==  end  and dont need to remove ;)
				clear();
			}

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
				// add map_size for protect
				if (tree_base.get() == NULL || map_size == 0)
					return true;
				return false;
			}

			size_type size() const
			{
				return (this->map_size);
			}

			size_type max_size() const
			{
				// return alloc.max_size();
				return Alloc::template rebind<tree_type>.max_size();
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
					// std::cout << "key is  == > " << k << " value is == " << mapped_type() << std::endl;
				}
				return tree_base.root->pt.second;
				
			}
			// Modifiers:

			ft::pair<iterator,bool>insert (const value_type& val) // single element (1)
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
				// std::cout << " test is here " << std::endl;
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
					map_size--;
			}

			size_type erase (const key_type& k)
			{
				tree_base.dele(k);
				if (tree_base.is_del ==  true)
				{
					map_size--;
					return 1;
				}
				else
					return 0;
			}

			void erase (iterator first, iterator last)
			{
				for(;first != last ; first++)
				{
					erase(first->first);
					if (tree_base.is_del ==  true)
						map_size--;
				}
			}
			void clear()
			{
				// iterator it = begin();
				// iterator itend = end();
				// while (it != itend)
				// {
				// 	std::cout << " here " << std::endl;
				// 	erase(it->first);
				// 	++it;
				// }
				// for(;it != itend ; it++)
				// {
				// 	std::cout << " here " << std::endl;
			 	// 	erase(it->first);
				while (tree_base.root  != NULL)
				{
					erase(tree_base.root->pt.first);
				}
				
			}

			void swap (map& x)
			{
				tree_type tmp = this->tree_base;
				size_type size_tmp = this->map_size;
				this->tree_base = x.tree_base;
				this->map_size  = x.map_size;
				x.tree_base =  tmp;
				x.map_size = size_tmp;
			}


			//Observers:
			key_compare key_comp() const
			{
				return (key_comp);
			}
			value_compare value_comp() const
			{
				return (value_comp);
			}


			// Operations functoion
			iterator find (const key_type& k)
			{
				if(tree_base.root != NULL)
				{
					try
					{
						return (iterator(tree_base. search_uniq(k, tree_base.root)));
					}
					catch(const char *s)
					{
						return end();
					}	
				}
				else
					return end();
			}

			size_type count (const key_type& k) const // 0 and 1 bc key is unique
			{
				if (find(k) != end())
					return 1;
				return 0;
			}
			
			iterator lower_bound (const key_type& k) // edit return to return iterator
			{
				return (iterator(tree_base.lower_bound(k)));
			}

			const_iterator lower_bound (const key_type& k) const
			{
				return const_iterator(tree_base.lower_bound(k));
			}

			iterator upper_bound (const key_type& k)
			{
				return iterator(tree_base.upper_bound(k));
			}

			const_iterator upper_bound (const key_type& k) const
			{
				return const_iterator(tree_base.upper_bound(k));
			}

			ft::pair<iterator,iterator>  equal_range (const key_type& k)
			{
				return ft::make_pair<iterator, iterator>(lower_bound(k), upper_bound(k)); 
			}

			ft::pair<const_iterator,const_iterator> equal_range (const key_type& k) const
			{
				return ft::make_pair<const_iterator, const_iterator>(lower_bound(k), upper_bound(k)); 
				
			}
			// Allocator:
			allocator_type get_allocator() const
			{
				return alloc;
			}
			friend 	bool operator==( const ft::map<Key,T,Compare,Alloc>& lhs, const ft::map<Key,T,Compare,Alloc>& rhs );
			friend bool operator!=( const ft::map<Key,T,Compare,Alloc>& lhs, const ft::map<Key,T,Compare,Alloc>& rhs );
	};

	// non-function operator
	template< class Key, class T, class Compare, class Alloc >
	bool operator==(const ft::map<Key,T,Compare,Alloc>& lhs, const ft::map<Key,T,Compare,Alloc>& rhs )
		{
			return lhs.size() && rhs.size() &&  ft::equal(lhs.begin(), lhs.end(), rhs.begin());
		}
	template< class Key, class T, class Compare, class Alloc >
	 bool operator!=( const ft::map<Key,T,Compare,Alloc>& lhs, const ft::map<Key,T,Compare,Alloc>& rhs )
	 {
		 return !(lhs == rhs);
	 }

}




#endif