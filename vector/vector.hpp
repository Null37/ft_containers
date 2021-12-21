#ifndef VECTOR_HPP
#define VECTOR_HPP


#include <iostream>

namespace ft
{
	template < class _Tp, class _Allocator = std::allocator<_Tp> >
	class vector;
}

template < class _Tp, class _Allocator>
class ft::vector
{
private:
	_Tp *dy_arr;
public:
	typedef size_t                                      size_type;
	typedef _Tp                                         value_type;
	typedef _Allocator                                  allocator_type;
	typedef typename allocator_type::reference	        reference;
	typedef typename allocator_type::const_reference    const_reference;
	typedef typename allocator_type::pointer            pointer;
	typedef typename allocator_type::const_pointer      const_pointer;
	typedef __wrap_iter<pointer>						irerator;

	vector()
	{

	}
	vector(size_t element, int  contant = 0)
	{
		_Allocator a;
		dy_arr = a.allocate(element);
		for (int i = 0; i < element; i++)
			dy_arr[i] = contant;
	}
	~vector()
	{
		
	}
};


template<class ITER>
class __wrap_iter
{
private:
	ITER it_P;

public:
	// template <class _Iter1, class _Iter2>
	// friend bool operator==(const __wrap_iter<_Iter1>&, const __wrap_iter<_Iter2>&)
	// {

	// }

	// template <class _Iter1, class _Iter2>
	// friend bool operator<(const __wrap_iter<_Iter1>&, const __wrap_iter<_Iter2>&)
	// {

	// }

	// template <class _Iter1, class _Iter2>
	// friend bool operator!=(const __wrap_iter<_Iter1>&, const __wrap_iter<_Iter2>&)
	// {

	// }

	// template <class _Iter1, class _Iter2>
	// friend bool operator>(const __wrap_iter<_Iter1>&, const __wrap_iter<_Iter2>&)
	// {

	// }

	// template <class _Iter1, class _Iter2>
	// friend bool operator>=(const __wrap_iter<_Iter1>&, const __wrap_iter<_Iter2>&)
	// {

	// }

	// template <class _Iter1, class _Iter2>
	// friend bool operator<=(const __wrap_iter<_Iter1>&, const __wrap_iter<_Iter2>&)
	// {

	// }

	// template <class _Iter1>
	// friend __wrap_iter<_Iter1> operator+(__wrap_iter<_Iter1> , __wrap_iter<_Iter1>)
	// {

	// }


	
}

#endif