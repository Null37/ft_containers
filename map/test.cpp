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
    
    // //test my avl
    // {
    //     std::pair<int, int> a(5, 5);
    //     ft::avl_tree<int, int> tree(a);
    // }



    {
        // test return 
        // std::map<int, int> a;
        // std::pair<std::map<int, int>::iterator, bool> s =  a.insert(std::pair<int, int>(50, 90));
        // std::cout << std::boolalpha << s.second <<  std::endl;
    }
    // {
    //     //test my avl algo
    //     ft::avl_tree<int, int> test;
    //     ft::pair<int, int> l(5,5);
    //     ft::pair<int, int> l2(3,5);
    //     bool ss = test.insert(l);
    //     // std::cout <<  ss << std::endl;
    //     ss = test.insert(l2);
    //     // std::cout <<  ss << std::endl;
    //     ft::pair<int, int> l3(1,5);
    //     ss = test.insert(l3);
    //     // std::cout <<  ss << std::endl;
    // }
    // test tree data structre

    {
        ft::avl_tree<int, int> test1;
        ft::pair<int, int> a(1,1);
        ft::pair<int, int> a2(2,1);
        ft::pair<int, int> a3(3,1);
        ft::pair<int, int> a4(0,1);
        test1.insert(a);
        test1.insert(a2);
        test1.insert(a3);
         test1.insert(a4);
        std::cout << "key is " << test1.get()->key << std::endl;
        std::cout << "key is " << test1.get()->right->key << std::endl;
        std::cout << "key is " << test1.get()->right->right->key << std::endl;
        std::cout << "key is " << test1.get()->left->key << std::endl;

        //  std::cout << test1->root->key << std::endl;
        // std::cout << test1->right->key << std::endl;
    }
}