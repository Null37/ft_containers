#ifndef VECTOR_HPP
#define VECTOR_HPP

#include "../iterator_traits.hpp"

#include <iostream>


namespace ft
{

template <class T>
class my_iterator 
{
	private:
		T it;
	public:
		typedef typename ft::iterator_traits<T>::value_type			value_type;
		typedef typename ft::iterator_traits<T>::pointer			pointer;
		typedef typename ft::iterator_traits<T>::reference			reference;
		typedef typename ft::iterator_traits<T>::difference_type	difference_type;
		typedef typename ft::iterator_traits<T>::iterator_category 	iterator_category;
		//constaractors and destractor
		my_iterator(){it = NULL;}
		my_iterator(T *value): it(value){}
		//my_iterator(const my_iterator& cp): it(cp.it){}
		~my_iterator(){}

		// start overload obertator
		void operator=(my_iterator &cp)
		{
			//possible deep copy, 
			this->it = cp.it;
		}
		bool operator==(my_iterator &cp)
		{
			return (this->it == cp.it);
		}
		bool operator!=(my_iterator &cp)
		{
			return (this->it != cp.it);
		}

		reference operator*()
		{
			return *it;
		}

		pointer operator->()
		{
			return *it;
		}

		//prefix oprator ++ mean ++a;
		my_iterator &operator++()
		{
			++it;
			return(*this);
		}

		my_iterator operator++(int)
		{
			my_iterator __tmp(*this); 
			++(*this); 
			return __tmp;
		}
		my_iterator &operator--()
		{
			--it;
			return(*this);
		}

		my_iterator operator--(int)
		{
			my_iterator __tmp(*this); 
			--(*this); 
			return __tmp;
		}
		

		

		

};

template < class T, class _Allocator = std::allocator<T> >
class vector 
{

public:
	typedef size_t                                      size_type;
	typedef T                                         	value_type;
	typedef _Allocator                                  allocator_type;
	typedef typename allocator_type::reference	        reference;
	typedef typename allocator_type::const_reference    const_reference;
	typedef typename allocator_type::pointer           	pointer; // T*
	typedef typename allocator_type::const_pointer      const_pointer; //const T*
	typedef ft::my_iterator<pointer>					iterator;
	typedef ft::my_iterator<const pointer>				const_iterator;

private:
	pointer dy_arr;

public:
	vector()
	{
			
	}
	vector(size_t element, int  contant = 0)
	{
		
	}
	~vector()
	{
		
	}
	
};










}


#endif