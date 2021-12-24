#include <vector>
#include "vector.hpp"
#include <iostream>




int main()
{
    // try
    // {
        std::vector<int> tt;
        tt.push_back(1);
        tt.push_back(2);
        tt.push_back(3);
        tt.push_back(4);

    // tt.push_back(55);
    //    std::vector<int>::iterator it = tt.begin();
    //    std::vector<int>::iterator it2(it);

    //    it2 =  tt.end()  - 1;
    //    std::cout << *it << std::endl;

    // int k = 5;
    // int *tt = &k;

    // std::cout << ++(*tt) << std::endl;

    std::vector<int>::iterator it1 = tt.begin();
    // *it1;
    std::cout << *it1 << std::endl;
    
    
    ft::vector<int>::iterator my;
    std::cout << *my << std::endl;
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
    // ft::vector<int> vv(5, 6);
    // std::cout << *it << std::endl;
}
