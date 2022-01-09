#ifndef VECTOR_ITERATOR_HPP
#define VECTOR_ITERATOR_HPP

#include "../iterator_traits.hpp"


namespace ft
{
	template <class T>
class my_iterator 
{

	
	public:
		typedef T													iterator_type;
		typedef typename ft::iterator_traits<T>::value_type			value_type;
		typedef typename ft::iterator_traits<T>::pointer			pointer;
		typedef typename ft::iterator_traits<T>::reference			reference;
		typedef typename ft::iterator_traits<T>::difference_type	difference_type;
		typedef typename ft::iterator_traits<T>::iterator_category 	iterator_category;
	private:
			iterator_type it;
	public:
		//constaractors and destractor
		my_iterator(){it = NULL;}
		my_iterator(iterator_type value): it(value){}
		template <class it1>
		my_iterator(const my_iterator<it1>& cp): it(cp.base()){}
		~my_iterator(){}
		// start overload obertator


		//just getter
		
		iterator_type base() const
		{
			return it;
		}

		//all random_accssece operators overload 

		void operator=(const my_iterator &cp)
		{
			this->it = cp.it;
		}
		template< class it1, class it2>
		friend bool operator == (const my_iterator<it1> &cp1 , const my_iterator<it2> &cp2);

		template< class it1, class it2>
		friend	bool	operator != (const my_iterator<it1> &cp1, const my_iterator<it2> &cp2);

		template< class it1, class it2>
		friend bool operator<(const my_iterator<it1> &cp1 , const my_iterator<it2> &cp2);


		template< class it1, class it2>
		friend bool operator>(const my_iterator<it1> &cp1 , const my_iterator<it2> &cp2);

		template< class it1, class it2>
		friend bool operator<=(const my_iterator<it1> &cp1 , const my_iterator<it2> &cp2);

		template< class it1, class it2>
		friend bool operator>=(const my_iterator<it1> &cp1 , const my_iterator<it2> &cp2);

		reference operator*()
		{
			return *it;
		}

		pointer operator->()
		{
			return it;
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
		my_iterator operator-(difference_type nb)
		{
			return (this->it - nb);
		}
		my_iterator operator+(difference_type nb)
		{
			my_iterator __w(*this); 
			__w.it = __w.it + nb; 
			return __w;
		}
		template<class it1, class it2>
		friend typename my_iterator<it1>::difference_type operator-(const my_iterator<it1> &cp1, const my_iterator<it2> &cp2);
		template<class it1>
		friend my_iterator<it1> operator+(typename my_iterator<it1>::difference_type n, const my_iterator<it1> &cp);
		my_iterator &operator+=(difference_type a)
		{
			this->it += a;
			return (*this);
		}
		my_iterator &operator-=(difference_type a)
			{
				this->it -= a;
				return (*this);
			}
		reference    operator[](difference_type n)
		{
			return it[n];
		}
};

	template< class it1, class it2>
bool operator == (const my_iterator<it1> &cp1 , const my_iterator<it2> &cp2)
{
	return (cp1.base() == cp2.base());
}

	template< class it1, class it2>
bool	operator != (const my_iterator<it1> &cp1, const my_iterator<it2> &cp2)
{ 
	return (cp1.base() != cp2.base()); 
}

	template< class it1, class it2>
bool operator<(const my_iterator<it1> &cp1 ,const  my_iterator<it2> &cp2)
{
	return (cp1.base() < cp2.base());
}
template< class it1, class it2>
bool operator>(const my_iterator<it1> &cp1 , const my_iterator<it2> &cp2)
{
	return (cp1.base() > cp2.base());
}

template< class it1, class it2>
bool operator<=(const my_iterator<it1> &cp1 ,const my_iterator<it2> &cp2)
{
	return (cp1.base() <= cp2.base());
}

template< class it1, class it2>
bool operator>=(const my_iterator<it1> &cp1 , const my_iterator<it2> &cp2)
{
	return (cp1.base() >= cp2.base());
}

template<class it1, class it2>
typename my_iterator<it1>::difference_type operator-(const my_iterator<it1> &cp1, const my_iterator<it2> &cp2)
{
	return cp1.base() - cp2.base();
}

template<class it1>
my_iterator<it1> operator+(typename my_iterator<it1>::difference_type n, const my_iterator<it1> &cp)
{
		return my_iterator<it1>(cp.base() + n);
}


template < class iterator>
class reverse_iterator
{
	public:
	typedef	iterator 										 	iterator_type;
	typedef typename iterator_traits<iterator>::difference_type difference_type;
    typedef typename iterator_traits<iterator>::reference       reference;
    typedef typename iterator_traits<iterator>::pointer         pointer;

	private:
		iterator_type rv;

	public:
	// constrators and ds 
	reverse_iterator() :  rv(){}
	explicit reverse_iterator(iterator_type x): rv(x) {}
	template<class it1>
	reverse_iterator(const reverse_iterator<it1>& cp): rv(cp.base()){}
	template <class it1>
	reverse_iterator& operator=(const reverse_iterator<it1>&cp)
	{
		this->rv = cp.base();
		return *this;
	}
	~reverse_iterator(){}
	
	// just getter
	iterator_type base() const
	{
		return  (rv);
	}

	//operators overload
	reference operator*() const
	{
		iterator_type tmp = rv;
		--tmp;
		return *tmp;
	}
	pointer operator->() const
	{
		return (&(operator*()));
	}

	reverse_iterator& operator++()
	{
		--rv;
		return *this;
	}

	reverse_iterator operator++(int)
	{
		reverse_iterator tmp = *this;
		--rv;
		return  tmp;
	}

	reverse_iterator& operator--()
	{
		++rv;
		return *this;
	}

	reverse_iterator operator--(int)
	{
		reverse_iterator tmp = *this;

		++rv;
		return tmp;
	}

	reverse_iterator operator+(difference_type n)
	{
		return (reverse_iterator(rv - n));
	}
	reverse_iterator& operator+=(difference_type __n) 
	{
		rv -= __n; 
		return *this;
	}
	reverse_iterator  operator- (difference_type n)
	{
		return (reverse_iterator(rv + n)); 
	}
	reverse_iterator& operator-=(difference_type n) 
	{
		rv += n; 
		return *this;
	}
	reference  operator[](difference_type __n) 
	{
		return *(*this + __n);
	}
	template <class it1, class it2>
	friend bool operator<  (const reverse_iterator<it1>& cp1, const reverse_iterator<it2>& cp2);
};
//Non-member function overloads
//relational operators (reverse_iterator)
template <class it1, class it2>
bool operator==(const reverse_iterator<it1>& cp1, const reverse_iterator<it2>& cp2)
{
    return cp1.base() == cp2.base();
}

template <class it1, class it2>
bool operator<  (const reverse_iterator<it1>& cp1, const reverse_iterator<it2>& cp2)
{
    return (cp1.base() > cp2.base());
}
template <class it1, class it2>
bool operator>  (const reverse_iterator<it1>& cp1, const reverse_iterator<it2>& cp2)
{
    return (cp1.base() < cp2.base());
}

template <class it1, class it2>
bool operator!=(const reverse_iterator<it1>& cp1, const reverse_iterator<it2>& cp2)
{
    return cp1.base() != cp2.base();
}

template <class it1, class it2>
bool operator<=(const reverse_iterator<it1>& cp1, const reverse_iterator<it2>& cp2)
{
    return cp1.base() >= cp2.base();
}

template <class it1, class it2>
bool operator>=(const reverse_iterator<it1>& cp1, const reverse_iterator<it2>& cp2)
{
    return cp1.base() <= cp2.base();
}

//operator- (reverse_iterator)
template <class it1, class it2>
typename reverse_iterator<it1>::difference_type operator-(const reverse_iterator<it1>& __x, const reverse_iterator<it2>& __y)
{
    return (__y.base()) - (__x.base());
}

template <class it1>
reverse_iterator<it1> operator+(typename reverse_iterator<it1>::difference_type __n, const reverse_iterator<it1>& __x)
{
    return reverse_iterator<it1>((__x.base()) - __n);
}


}



#endif