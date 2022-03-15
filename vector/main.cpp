#include <vector>
#include "vector.hpp"
#include <iostream>
#include <iomanip>      // std::setw


#include <iterator>

class r
{
	private:
		int kk;
	public:
	r(const int i = 5)
	{
		std::cout << "anahna" << std::endl;
		std::cout << i;
	}
	~r(){}
};


class lol
{
	int i;
	public:
	lol()
	{
		std::cout << "hna" << std::endl;
	}
	lol(int c)
	{

		std::cout << "hna 6" << std::endl;
		// std::cout << a << std::endl;
	}
	~lol(){}
};


void test1(int k)
{
	std::cout << "ana test2" << std::endl;
}
template<class T>
void test1(T k, typename ft::enable_if<!ft::is_integral<T>::value, T>::type = T())
{
	std::cout << "ana test1" << std::endl;
}

#define N 8
template<class T, class U>
void compare(T a, U b)
{
	if (a == b)
		std::cout << "\033[1;32mOK";
	else
		std::cout << "\033[1;31mKO";
	//reset
	std::cout << "\033[1;0m" << std::endl;
}

int main()
{
	//test iterator
	std::vector<int> test(5,88);
	std::vector<int>::iterator it = test.begin();
	ft::vector<int> test1(5,88);
	ft::vector<int>::iterator it2 = test1.begin();
	std::cout << "begin = " ; compare(*it, *it2);
	std::vector<int>::iterator it3 = test.end();
	ft::vector<int>::iterator it4 = test1.end();
	std::cout << "end = " ; compare(*it4, *it3);

	// reverse iterator
	std::vector<int>::reverse_iterator it5 = test.rbegin();
	ft::vector<int>::reverse_iterator it6 = test1.rbegin();
	std::cout << "rbegin = " ; compare(*it5, *it6);
	std::vector<int>::reverse_iterator it7 = test.rend();
	std::vector<int>::reverse_iterator it8 = test.rend();
	std::cout << "rend = " ; compare(*it7, *it8);

	//test size()
	std::cout << std::setw(20) << "\033[1;33mtest size"  << "\033[1;0m "<< std::endl;
//test 1 size funtion embty vector
	std::vector<int> ts;
	ft::vector<int> ts2;
	std::cout << "size() = " ; compare(ts.size(), ts2.size());
//test 2 size function 
	std::vector<int> ts3(90);
	ft::vector<int> ts4(90);
	std::cout << "size() = " ; compare(ts3.size(), ts4.size());
//test 3 size with copy constractur


	//test max size
	std::cout << std::setw(24) << "\033[1;33mtest max size"  << "\033[1;0m "<< std::endl;
	std::vector<int> ts5(90);
	ft::vector<int> ts6(90);
	std::cout << "max_size() = " ; compare(ts5.max_size(), ts6.max_size());

	






	

}