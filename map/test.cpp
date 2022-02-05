#include <map>
#include <iostream>
#include "map_iterator.hpp"
#include "avl_tree.hpp"

int main()
{
    // std::map<std::string, int> a;
    // a.insert(std::pair<std::string, int> ("lol", 5000));
    // // a.insert(std::pair<int, int>(6, 6000));
    // // a.insert(std::pair<int, int>(1, 1000));
    // // a.insert(std::pair<int, int>(2, 2000));
    // // a.insert(std::pair<int, int>(3, 3000));
    // // a.insert(std::pair<int, int>(4, 4000));
    // // a.insert(std::pair<int, int> (5, 5000));

    // // a.insert(p);
    // std::map<std::string, int>::iterator itm = a.begin();

    // std::cout << "this ->>> " << a.begin()++ << std::endl;
    // ++a.begin();
    // for(std::map<int, int>::iterator itm = a.begin(); itm != a.end(); itm++)
    // {
    //  std::cout << "this ->>> first " << itm->first << "this--> last   "  << itm->second  << std::endl;

    // }
    // std::pair<int, int> pa = *itm;
    // std::cout << pa.first << std::endl;
    //  test ++
    // // shoow all map
    // {
    //     std::cout << "----------------------------- show what in map ------------------------" << std::endl;
    //     for(std::map<std::string, int>::iterator itm = a.begin(); itm != a.end(); itm++)
    //     {
    //     std::cout << "this ->>> first " << itm->first << " this--> last   "  << itm->second  << std::endl;

    //     }
    //     std::cout <<  "--------------------------------------------end map --------------------" << std::endl;
    // }
    // {
    //     std::cout << "---------------------- test ++ -------------------------" << std::endl;
    //     itm++;
    //     std::cout << "first = " << itm->first << " second = " << itm->second << std::endl;
    // }
    
    // // {
        
    // // }
    // {
    //     // test 
    //     std::pair<std::string, int> a("lo", 5);
        
    // }
    // {
    //     //test map if key is string 
    //     std::map<std::string, int> a;
    //     a.insert(std::pair<std::string, int>("baa", 55));
    //     a.insert(std::pair<std::string, int>("abc", 1111111111));
    //     a.insert(std::pair<std::string, int>("c", 0));

    //     for(std::map<std::string, int>::iterator itm = a.begin(); itm != a.end(); itm++)
    //     {
    //         std::cout << "this ->>> first " << itm->first << " this--> last   "  << itm->second  << std::endl;
    //     }
    //     //ok test
    //     std::string test1 = "baa";
    //     std::string test2 = "abc"; 
    //     bool bl = test1 > test2;
    //     std::cout <<  std::boolalpha << bl << std::endl;
    // }
    
    //test my avl
    {
        std::pair<int, int> a(5, 5);
        ft::avl_tree<int, int> tree(a);
    }

}