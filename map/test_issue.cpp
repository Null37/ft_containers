#include <map>
#include <iostream>
#include "avl_tree.hpp"
#include "map_iterator.hpp"
#include "map.hpp"
#include <vector>
#include <math.h>
#include <limits>
#include "../vector/vector.hpp"



int main()
{
    ft::map<int, int> test;
    ft::map<int, int> test2;

    test.insert(ft::pair<int, int>(1,90));
    test.insert(ft::pair<int, int>(2,90));
    test.insert(ft::pair<int, int>(3,90));
    std::cout << "test 1" << std::endl;

    ft::map<int, int>::iterator it1 = test.begin();


    test2.insert(it1, test.end());
    	ft::map<int, int>::iterator it2  = test2.begin();
	// std::cout << "lol ==> " << it2->first << std::endl;

	// std::cout << it2->first << std::endl;
	for(; it2 != test2.end(); it2++)
	{
		// std::cout << "Null> " << it2.tree.root << std::endl;
		std::cout << "my ===> " << it2->first  << std::endl;
	}
 

}

