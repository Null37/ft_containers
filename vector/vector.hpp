#ifndef VECTOR_HPP
#define VECTOR_HPP


#include <iostream>

namespace ft
{
template < class category, class T, class Distanse = ptrdiff_t, class Pointer =  T*, class Reference = T&>
struct itrator
{
	typedef		T 			value_type;
	typedef		Distanse 	difference_pointer;
	typedef		Pointer		pointer;
	typedef		Reference 	reference;
	typedef		category	itrator_categor;
};
template <class T>
class random_access_iterator: public itrator< std::random_access_iterator_tag, T>
{
	private:
		T *it;
		typedef random_access_iterator my_iterator;
	public:
		//constaractors and destractor
		random_access_iterator(){}
		random_access_iterator(T *value): it(value){}
		//random_access_iterator(const random_access_iterator& cp): it(cp.it){}
		~random_access_iterator(){}

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
		T& operator*()
		{
			return *it;
		}
		T* operator->()
		{
			return *it;
		}

	
};
template < class T, class _Allocator = std::allocator<T> >
class vector 
{

private:
	T* dy_arr;
public:
	typedef size_t                                      size_type;
	typedef T                                         	value_type;
	typedef _Allocator                                  allocator_type;
	typedef typename allocator_type::reference	        reference;
	typedef typename allocator_type::const_reference    const_reference;
	typedef typename allocator_type::pointer            pointer;
	typedef typename allocator_type::const_pointer      const_pointer;
	typedef ft::random_access_iterator<value_type>			iterator;

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