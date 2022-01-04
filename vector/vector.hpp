#ifndef VECTOR_HPP
#define VECTOR_HPP

#include "vector_iterator.hpp"
#include <iostream>
#include <stdexcept>  // out of range header
#include "../type_trais/type_traits.hpp"


namespace ft
{
template < class T, class _Allocator = std::allocator<T> >
class vector 
{

public:
	//member type
	typedef T                                         				value_type;
	typedef _Allocator                                  			allocator_type;
	typedef typename allocator_type::reference	        			reference;
	typedef typename allocator_type::const_reference    			const_reference;
	typedef typename allocator_type::pointer           				pointer; // T*
	typedef typename allocator_type::const_pointer      			const_pointer; //const T*
	typedef ft::my_iterator<pointer>								iterator;
	typedef ft::my_iterator<const_pointer>							const_iterator;
	typedef ft::reverse_iterator<iterator>							reverse_iterator;
	typedef ft::reverse_iterator<const_iterator>					const_reverse_iterator;
	typedef typename ft::iterator_traits<iterator>::difference_type	difference_type;
	typedef std::size_t													size_type;

private:
	pointer		   dy_arr;
	allocator_type alloc;
	size_type	   _size;
	size_type	   _capacity;

public:
	//constractor and ds....
	explicit vector (const allocator_type& alloc = allocator_type()) //default constractor
	{
		dy_arr = nullptr;
		_size = 0;
		_capacity = 0;
	}
	explicit vector (size_type n, const value_type& val = value_type(), const allocator_type& alloc = allocator_type()) // fill constractor
	{
		dy_arr = this->alloc.allocate(n);
		_size  = n;
		_capacity = _size;
		for(difference_type i = 0; i < n; i++)
			this->alloc.construct((dy_arr + i), val);
	}
	template <class InputIterator>
    vector (InputIterator first, InputIterator last, const allocator_type& alloc = allocator_type(), typename ft::enable_if<!is_integral<InputIterator>::value, InputIterator>::type = InputIterator())
	{
		dy_arr = this->alloc.allocate(_size);
		for(first; first != last; first++)
			this->alloc.construct(first, *first);
	}
	vector (const vector& x)
	{
		
	}
	~vector()
	{
		// if (this->dy_arr != nullptr)
		// 	alloc.deallocate(dy_arr);

	}
	vector& operator=(const vector& __v)
	{
		return *this;
	}


	//function return iteratur
	iterator begin()
	{
		return (iterator(dy_arr));
	}
	const_iterator begin() const
	{
		return (const_iterator(dy_arr));
	}
	iterator end()
	{
		return (iterator(dy_arr + _size));
	}
	const_iterator end() const
	{
		return (const_iterator(dy_arr + _size));
	}

    reverse_iterator rbegin()
	{
		return (reverse_iterator(dy_arr + _size));
	}
	const_reverse_iterator rbegin() const
	{
		return(const_reverse_iterator(dy_arr + _size));
	}
	reverse_iterator rend()
	{
		return (reverse_iterator(dy_arr + _size));
	}

	//function Capacity
	size_type size() const
	{
		return (_size);
	}
	size_type max_size() const
	{
		return (alloc.max_size());
	}
	void resize (size_type n, value_type val = value_type())
	{
		if (n < _size)
		{
			_size = n;
		}
		else if ( n > _capacity)
		{
			if ((_size * 2) > n)
				_capacity = (_size * 2);
			else
				_capacity = n;
			pointer tmp = alloc.allocate(_capacity);
			for(int i = 0; i < _size; i++)
				alloc.construct(tmp + i, dy_arr[i]);
			//destrot all elment and deallocat
			for(int i = 0; i < _capacity; i++)
				alloc.destroy(dy_arr + i);
			alloc.deallocate(dy_arr, _capacity);
			dy_arr = tmp;
			for(int i = _size; i < n; i++)
				alloc.construct(dy_arr + i, val);
			_size = n;
		}
		else if (n > _size)
		{
			for(int i = _size; i < n; i++)
				alloc.construct(dy_arr + i, val);
			_size = n;
		}
	}
	size_type capacity() const
	{
		return (_capacity);
	}
	bool empty() const
	{
		if(_size == 0)
			return true;
		return false;
	}
	void reserve (size_type n)
	{
		if (n > _capacity)
		{
			if (n > max_size())
				throw std::length_error("allocator<T>::allocate(size_t n) 'n' exceeds maximum supported size");
			pointer tmp = alloc.allocate(_capacity);
			for(int i = 0; i < _size; i++)
				alloc.construct(tmp + i, dy_arr[i]);
			//destrot all elment and deallocat
			for(int i = 0; i < _capacity; i++)
				alloc.destroy(dy_arr + i);
			alloc.deallocate(dy_arr, _capacity);
			dy_arr = tmp;
			_capacity = n;
		}
	}

	//Element access:
	reference operator[](size_type n)
	{
		return dy_arr[n];
	}
	const_reference operator[] (size_type n) const
	{
		return dy_arr[n];
	}
	reference at (size_type n)
	{
		std::string str = "out of range";
		if (n >= _size)
			throw std::out_of_range(str);
		return dy_arr[n];
	}
	const_reference at (size_type n) const
	{
		std::string str = "out of range";
		if (n >= _size)
			throw std::out_of_range(str);
		return dy_arr[n];
	}
	reference front()
	{
		return dy_arr[0];
	}
	const_reference front() const
	{
		return dy_arr[0];
	}
	reference back()
	{
		return dy_arr[_size - 1];
	}
	const_reference back() const
	{
		return dy_arr[_size - 1];
	}

	//Modifiers:
	void assign (size_type n, const value_type& val) // fill
	{
		if(empty() == true)
		{
			dy_arr = this->alloc.allocate(n);
			_size  = n;
			_capacity = _size;
			for(difference_type i = 0; i < n; i++)
				this->alloc.construct((dy_arr + i), val);
		}
		else if (n > _size)
		{
			pointer tmp = alloc.allocate(_capacity);
			//destrot all elment and deallocat
			for(int i = 0; i < _capacity; i++)
				alloc.destroy(dy_arr + i);
			alloc.deallocate(dy_arr, _capacity);
			for(int i = 0; i < _size; i++)
				alloc.construct(tmp + i, val);
			dy_arr = tmp;
			_size = n;
			_capacity = _size;
		}
		else
		{
			for(int i = 0; i < _capacity; i++)
				alloc.destroy(dy_arr + i);
			for(int i = 0; i < n; i++)
				alloc.construct(dy_arr + i, val);
			_capacity = _size;
			_size = n;
		}
		
	}
	template <class InputIterator>
  	void assign (InputIterator first, InputIterator last, typename ft::enable_if<!is_integral<InputIterator>::value, InputIterator>::type = InputIterator()) //range
	{
		
	}

	void push_back (const value_type& val) // Add element at the end
	{
		reserve(_size + 1);
		if (empty() == true)
			_capacity = 1;
		else
			_capacity = _size * 2;
		_size += 1;
		dy_arr[_size - 1] = val;
	}

	void pop_back() // delete element at the end
	{
		alloc.destroy(dy_arr + (_size - 1));
		_size -= 1;
	}

	iterator insert (iterator position, const value_type& val) // - single element -
	{

		pointer tmp = alloc.allocate(_capacity * 2);
		int index = 0;
		for(iterator _it = begin(); _it != end(); _it++)
		{
			if (_it == position)
					break;
			index++;
		}
		int i_arr_org = 0;
		for(int i = 0; i < (_capacity +1); i++)
		{
			if (i != index)
			{
				alloc.construct(tmp + i, dy_arr[i_arr_org]);
				i_arr_org++;
			}
			else
			{
				alloc.construct(tmp + i, val);
			}
		}
		//destrot all elment and deallocat
		for(int i = 0; i < _capacity; i++)
			alloc.destroy(dy_arr + i);
		alloc.deallocate(dy_arr, _capacity);
		if (empty() == true)
			_capacity = _size;
		else
			_capacity = _size * 2;
		_size += 1;
		dy_arr = tmp;
		return iterator(dy_arr + index);
	}

	void insert (iterator position, size_type n, const value_type& val) // -fill-
	{
		
	}
	
	template <class InputIterator>
    void insert (iterator position, InputIterator first, InputIterator last) // insertse range
	{

	}


};










}


#endif