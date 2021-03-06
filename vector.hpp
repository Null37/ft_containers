#ifndef VECTOR_HPP
#define VECTOR_HPP

#include "vector_iterator.hpp"
#include <cstddef>
#include <iostream>
// #include <iterator>

#include <stdexcept>  // out of range header
#include <sys/types.h>
#include "type_trais/type_traits.hpp"


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
	typedef ft::my_iterator<pointer>										iterator;
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
		this->alloc = alloc;
	}
	explicit vector (size_type n, const value_type& val = value_type(), const allocator_type& alloc = allocator_type()) // fill constractor
	{
		this->alloc = alloc;
		dy_arr = this->alloc.allocate(n);
		_size  = n;
		_capacity = _size;
		for(size_type i = 0; i < n; i++)
			this->alloc.construct((dy_arr + i), val);
	}
	template <class InputIterator>
    vector (InputIterator first, InputIterator last, const allocator_type& alloc = allocator_type(), typename ft::enable_if<!is_integral<InputIterator>::value, InputIterator>::type = InputIterator())
	{
		this->alloc = alloc;
		// _size = std::distance(first, last);
		size_type j = 0;
		InputIterator firs1 = first;
		InputIterator last1 = last;
		for(; firs1 != last1; firs1++)
			j++;
		_size = j;
		_capacity = _size;
		dy_arr = this->alloc.allocate(_capacity);
		int i = 0;
		for(; first != last; first++)
		{
			this->alloc.construct(dy_arr + i, *first);
			i++;
		}
	}
	vector (const vector& x)
	{
		this->dy_arr = nullptr;
		this->_size = 0;
		this->_capacity = 0;
		this->alloc = allocator_type();
		*this = x;	
	}
	~vector()
	{
		if (this->dy_arr != nullptr)
		{
			for(size_type i = 0; i < _size; i++)
				alloc.destroy(dy_arr + i);
			alloc.deallocate(dy_arr, _capacity);
		}

	}
	vector& operator=(const vector& x)
	{
		if (*this != x)
		{
			// this->alloc = x.alloc;
			for (size_type i = 0; i < this->_size; i++)
				alloc.destroy(this->dy_arr + i);
			if (this->_capacity > 0)
				alloc.deallocate(dy_arr, this->_capacity);
			if (this->capacity() < x.capacity())
				this->_capacity = x.size();
			this->_size = x._size;
			this->dy_arr = alloc.allocate(this->_capacity);
			for(size_type i = 0; i < x._size; i++)
				alloc.construct(this->dy_arr + i, x.dy_arr[i]);
		}
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
		return (reverse_iterator(end()));
	}
	const_reverse_iterator rbegin() const
	{
		return(const_reverse_iterator(end()));
	}
	reverse_iterator rend()
	{
		return (reverse_iterator(begin()));
	}
	const_reverse_iterator	rend ()		const	
	{ 
		return (const_reverse_iterator(begin())); 
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
			size_type save = _size - n;
			for(size_type i = save; i != 0 ; i--)
				alloc.destroy(dy_arr + i);
			_size = n;
		}
		else if ( n > _capacity)
		{
			size_t cp;
			if ((_capacity * 2) > n)
				cp = (_capacity * 2);
			else
				cp = n;
			pointer tmp = alloc.allocate(cp);
			for(size_type i = 0; i < _size; i++)
				alloc.construct(tmp + i, dy_arr[i]);
			for(size_type i = 0; i < _capacity; i++)
				alloc.destroy(dy_arr + i);
			alloc.deallocate(dy_arr, _capacity);
			dy_arr = tmp;
			for(size_type i = _size; i < n; i++)
				alloc.construct(dy_arr + i, val);
			if ((_capacity * 2) > n)
				_capacity = (_capacity * 2);
			else
				_capacity = n;
			_size = n;
		}
		else if (n > _size)
		{
			for(size_type i = _size; i < n; i++)
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
				throw std::length_error("vector");
			pointer tmp = alloc.allocate(n);
			for(size_type i = 0; i < _size; i++)
				alloc.construct(tmp + i, dy_arr[i]);
			//destrot all elment and deallocat
			for(size_type  i = 0; i < _size; i++)
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
		std::string str = "vector";
		if (n >= _size)
		{
			throw std::out_of_range(str);
		}
		return dy_arr[n];
	}
	const_reference at (size_type n) const
	{
		std::string str = "vector";
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
			if(_capacity < _size)
				_capacity = _size;
			for(size_type i = 0; i < n; i++)
				this->alloc.construct(dy_arr + i, val);
		}
		else if (n > _size)
		{
			//std::cerr << "plz heeeelp 22 " << std::endl;
			
			//destrot all elment and deallocat
			for(size_type i = 0; i < _capacity; i++)
				alloc.destroy(dy_arr + i);
			alloc.deallocate(dy_arr, _capacity);
			_size = n;
			_capacity = _size;
			pointer tmp = alloc.allocate(_capacity);
			for(size_type j = 0; j < _size; j++)
				alloc.construct(tmp + j, val);
			dy_arr = tmp;
		}
		else
		{
			for(size_type i = 0; i < _capacity; i++)
				alloc.destroy(dy_arr + i);
			for(size_type i = 0; i < n; i++)
				alloc.construct(dy_arr + i, val);
			_capacity = _size;
			_size = n;
		}
		
	}
	template <class InputIterator>
  	void assign (InputIterator first, InputIterator last, typename ft::enable_if<!is_integral<InputIterator>::value, InputIterator>::type = InputIterator()) //range
	{
		size_type ds = std::distance(first, last);
		if (ds != 0)
		{
			// destory and dealocate dy_arr
			for(size_type i = 0; i < _size; i++)
				alloc.destroy(dy_arr + i);
			alloc.deallocate(dy_arr, _capacity);
			_size = ds;
			if (ds > _capacity)
				_capacity = _size;
			pointer tmp = alloc.allocate(_capacity);
			size_type  i = 0;
			for(; first != last; first++)
			{
				alloc.construct(tmp + i, *first);
				i++;
			}
			dy_arr =  tmp;
		}
		else 
			_size = 0;
	}

	void push_back (const value_type& val) // Add element at the end
	{
		if (empty() == true)
			reserve(1);
		else if (_size + 1 > _capacity)
			reserve(_capacity  * 2);
		this->alloc.construct(this->dy_arr + _size, val);
		_size += 1;
	}

	void pop_back() // delete element at the end
	{
		alloc.destroy(dy_arr + (_size - 1));
		_size -= 1;
	}

	iterator insert (iterator position, const value_type& val) // - single element -
	{
		difference_type ds = std::distance(this->begin(), position);

		if (this->_size == 0)
			this->reserve(1);
		else if (this->_size + 1 > this->_capacity)
				this->reserve(this->_capacity * 2);

		for (size_t i = this->_size;i > (size_t)ds;--i)
		{
			this->alloc.construct(this->dy_arr + i, this->dy_arr[i - 1]);
		}
		
		this->alloc.construct(this->dy_arr + ds, val);
		++(this->_size);
		return (iterator(dy_arr + ds));
	}

	void insert (iterator position, size_type n, const value_type& val) // -fill-
	{
		difference_type ds = std::distance(this->begin(), position);
		
		if (this->_size == 0)
			this->reserve(n);
		else if (this->_size + n > this->_capacity)
		{
			if (n > this->_size)
				reserve(this->_size + n);
			else
				this->reserve(this->_capacity * 2);
		}
			
		for (difference_type i = this->_size - 1;i >= ds;--i)
			this->alloc.construct(this->dy_arr + (i + n), this->dy_arr[i]);

		for (size_t i = 0; i < n; ++i)
			this->alloc.construct(this->dy_arr + ds++, val);
		
		this->_size += n;
	}
	
	template <class InputIterator>
    void insert (iterator position, InputIterator first, InputIterator last, typename ft::enable_if<!is_integral<InputIterator>::value, InputIterator>::type = InputIterator()) // insertse range
	{
		
		difference_type		n = std::distance(first, last);
		difference_type		dist = std::distance(this->begin(), position);
		
		if (this->_size == 0)
			this->reserve(n);
		else if ((size_type)(this->_size + n) > this->_capacity)
		{
			if (this->_capacity * 2 < this->_size + n)
				reserve(this->_size + n);
			else
				reserve(this->_capacity * 2);
		}

		for (difference_type i = this->_size - 1;i >= dist;--i)
			this->alloc.construct(this->dy_arr + (i + n), this->dy_arr[i]);

		for (size_t i = 0; i < (size_t)n; ++i)
			this->alloc.construct(this->dy_arr + dist++, *first++);
		
		this->_size += n;
	}

	iterator erase (iterator position) // change the size and remove one elemant
	{
		difference_type index = std::distance(begin(), position);

				this->alloc.destroy(this->dy_arr + index);
				for (size_t i = index;i < this->_size - 1;i++)
					this->alloc.construct(this->dy_arr + i, this->dy_arr[i + 1]);
				--this->_size;
				return (iterator(this->dy_arr + index));
	}

	iterator erase (iterator first, iterator last) // remove range from first to last  
	{
		
		difference_type		range = std::distance(first, last);
		difference_type			index = std::distance(begin(), first);

		for (difference_type i = index; i < range;++i)
			this->alloc.destroy(this->dy_arr + i);
		this->_size -= range;

		for (size_type i = index;i < this->_size;++i, ++range)
			this->alloc.construct(this->dy_arr + i, this->dy_arr[range]);
		return (iterator(this->dy_arr + index));
	}

	void swap (vector& x)
	{
		pointer tmp = this->dy_arr;
		size_type _size_tmp = this->_size;
		size_type _capacity_tmp = this->_capacity;
		this->dy_arr = x.dy_arr;
		this->_size = x._size;
		this->_capacity = x._capacity;
		x.dy_arr =  tmp;
		x._size = _size_tmp;
		x._capacity = _capacity_tmp;
	}

	void clear()
	{
		for(size_type i = 0; i < _capacity; i++)
			alloc.destroy(dy_arr + i);
		alloc.deallocate(dy_arr, _capacity);
		dy_arr = nullptr;
		_size = 0;
	}
	allocator_type get_allocator() const
	{
		return (this->alloc);
	}
};

			//relational operators
	template <class T, class Alloc>
	bool operator== (const vector<T,Alloc>& lhs, const vector<T,Alloc>& rhs)
	{
		if (lhs.size() == rhs.size())
			return ft::equal(lhs.begin(), lhs.end(), rhs.begin());
		else
			return false;
	}

	template <class T, class Alloc>
  	bool operator!= (const vector<T,Alloc>& lhs, const vector<T,Alloc>& rhs)
  	{
		  return !(lhs == rhs);
  	}

	template <class T, class Alloc>
  	bool operator<  (const vector<T,Alloc>& lhs, const vector<T,Alloc>& rhs)
  	{
		return ft::lexicographical_compare(lhs.begin(), lhs.end(), rhs.begin(), rhs.end());  	
  	}
	template <class T, class Alloc>
  	bool operator<= (const vector<T,Alloc>& lhs, const vector<T,Alloc>& rhs)
	{
		return !(rhs < lhs);
	}
	template <class T, class Alloc>
  	bool operator>  (const vector<T,Alloc>& lhs, const vector<T,Alloc>& rhs)
  	{
		return rhs < lhs;
  	}

	template <class T, class Alloc>
  	bool operator>= (const vector<T,Alloc>& lhs, const vector<T,Alloc>& rhs)
	{
		return !(lhs < rhs);
	}


	template <class T, class Alloc>
  	void swap (vector<T,Alloc>& x, vector<T,Alloc>& y)
	{
		x.swap(y);
	}


}


#endif