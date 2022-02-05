#ifndef MAP_ITERATOR_HPP
#define  MAP_ITERATOR_HPP




namespace ft
{
	template<class I>
	class map_iterator
	{
		public:
			typedef I                                   value_type;
			typedef typename value_type::first_type     first_type;
			typedef typename value_type::second_type    second_type;
			// typedef typename value_type::first          first;
			// typedef typename value_type::second			second;
			// first_type first;
			// first_type second;
		private:
			value_type itr;
		public:
			first_type first;
			first_type second;
			//		constructor
			map_iterator() //df
			{
				first = itr.first;
				second = itr.second;
			}
			map_iterator(const map_iterator& mp)// copy constructor
			{
				*this = mp;
			}
			//assing operator
			map_iterator& operator=(map_iterator const &mp)
			{
				this->first =  mp.first;
            	this->second = mp.second;
				return *this;
			}
			~map_iterator(){}                                                                                                                                                                                                                                           



	};
}



#endif