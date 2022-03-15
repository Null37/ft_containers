#include <map>
#include <iostream>
#include "avl_tree.hpp"
// #include "map_iterator.hpp"
#include "map.hpp"
#include <vector>
#include <set>
#include <math.h>
#include <limits>
#include "../vector/vector.hpp"
#define EQUAL(x) ((x) ? (std::cout << "\033[1;32mAC\033[0m\n") : (std::cout << "\033[1;31mWA\033[0m\n"))
#include <iterator>
#include <random>

template <typename Iter1, typename Iter2>
bool compareMaps(Iter1 first1, Iter1 last1, Iter2 first2, Iter2 last2)
{
    for (; (first1 != last1) && (first2 != last2); ++first1, ++first2)
	{
		// std::cout << "first 1 " << first1->first << " firt2 " << first2->first << std::endl;
        if (first1->first != first2->first || first1->second != first2->second)
            return false;
	}
    return true;
}
bool fncomp(char lhs, char rhs) { return lhs < rhs; }
struct classcomp
{
    bool operator()(const char &lhs, const char &rhs) const
    {
        return lhs < rhs;
    }
};

// // bool testMapConstructors()
// // {  bool cond;
// //     std::map<char, int> first;
// //     ft::map<char, int> m_first;
// // 	size_t i = 97;
// //     for (; i < 110; i++)
// //     {
// //         first[i - 97] = i;
// //         m_first[i - 97] = i;
// //     }
// // 	// std::cout << "to " <<  i << std::endl;
// // 	// for(ft::map<char, int>::iterator t = m_first.begin(); t != m_first.end(); t++)
// // 	// 	std::cout << t->second << std::endl;
// //     std::map<char, int> copy(first);
// //     ft::map<char, int> m_copy(m_first);
// // 	first = std::map<char, int>();
// //     m_first = ft::map<char, int>();
// // 	for(ft::map<char, int>::iterator t = m_copy.begin(); t != m_copy.end(); t++)
// // 		std::cout << t->second << std::endl;
// //     // cond = first.size() == m_first.size() && compareMaps(first.begin(), first.end(), m_first.begin(), m_first.end());

// //     // std::map<char, int> second(first.begin(), first.end());
// //     // ft::map<char, int> m_second(m_first.begin(), m_first.end());

// //     // cond = cond && second.size() == m_second.size() && compareMaps(second.begin(), second.end(), m_second.begin(), m_second.end());
// //     // std::map<char, int> third(second);
// //     // ft::map<char, int> m_third(m_second);

// //     // cond = cond && third.size() == m_third.size() && compareMaps(third.begin(), third.end(), m_third.begin(), m_third.end());

// //     // std::map<char, int, classcomp> fourth;  // class as Compare
// //     // ft::map<char, int, classcomp> m_fourth; // class as Compare

// //     // cond = fourth.size() == m_fourth.size() && cond && compareMaps(fourth.begin(), fourth.end(), m_fourth.begin(), m_fourth.end());

// //     // bool (*fn_pt)(char, char) = fncomp;
// //     // std::map<char, int, bool (*)(char, char)> fifth(fn_pt);  // function pointer as Compare
// //     // ft::map<char, int, bool (*)(char, char)> m_fifth(fn_pt); // function pointer as Compare

// //     // cond = fifth.size() == m_fifth.size() && cond && compareMaps(fifth.begin(), fifth.end(), m_fifth.begin(), m_fifth.end());

// //     // first = std::map<char, int>();
// //     // m_first = ft::map<char, int>();
// // 	// ft::map<char, int>::iterator first1  = m_copy.begin();
// // 	// std::map<char, int>::iterator first2  = copy.begin();
// // 	// std::map<char, int>::iterator last2  = copy.end();
// // 	// ft::map<char, int>::iterator last1  = m_copy.end();


// // 	// 	// ++first1;
// // 	// 	// ++first1;
// // 	// 	// ++first1;
// // 	// 	// ++first1;
// // 	// 	// ++first1;
// // 	// 	// ++first1;
// // 	// 	// std::cout <<  m_copy.size() << std::endl;

// // 	// 	++first2;
// // 	// 	++first2;
// // 	// 	++first2;
// // 	// 	++first2;
// // 	// 	++first2;
// // 	// 	++first2;
// // 		// // first1++;
// // 		// ++first2;
// // 		// ++first1;
// // 		// ++first1;
// // 		// ++first1;
// // 		// ++first1;
// // 		// ++first1;
// // 		// ++first1;

// // 		// std::cout << "| "<< first2->second << "|" << std::endl;

// // //    for (; (first1 != last1) && (first2 != last2); ++first1, ++first2)
// // // 	{
// // // 		// std::cout << "first 1 " << first1->first << " firt2 " << first2->first << std::endl;
// // //         if (first1->first != first2->first || first1->second != first2->second)
// // // 		{
// // //             return false;
// // // 		}
// // // 	}

//    // cond = copy.size() == m_copy.size()  && cond && compareMaps(copy.begin(), copy.end(), m_copy.begin(), m_copy.end());

//     // return cond;
// // }
// // struct ft::node<int, int> *getbigpp(struct ft::node<int, int> *root)
// // {
// // 	if (root->right)
// // 	{
// // 		std::cout << " here   " << std::endl;
// // 		root = root->right;
// // 		std::cout << "--------------- " << root->key << std::endl;
// // 		if (root->left)
// // 		{
// // 			while(root->left)
// // 				root = root->left;
// // 			std::cout << "true = ";
// // 			return (root);


// // 		}
// // 		else
// // 		{
// // 			std::cout << "bruh = ";
// // 			return (root);
// // 		}
// // 	}
// // 	else
// // 	{
// // 		std::cout << "first " << std::endl;
// // 		root = root->parent;
// // 	}
// // 	return (root);
// // }

// int main()
// {
// 	// std::map<std::string, int> a;
// 	// a.insert(std::pair<std::string, int> ("lol", 5000));
// 	// // a.insert(std::pair<int, int>(6, 6000));
// 	// // a.insert(std::pair<int, int>(1, 1000));
// 	// // a.insert(std::pair<int, int>(2, 2000));
// 	// // a.insert(std::pair<int, int>(3, 3000));
// 	// // a.insert(std::pair<int, int>(4, 4000));
// 	// // a.insert(std::pair<int, int> (5, 5000));

// 	// // a.insert(p);
// 	// std::map<std::string, int>::iterator itm = a.begin();

// 	// std::cout << "this ->>> " << a.begin()++ << std::endl;
// 	// ++a.begin();
// 	// for(std::map<int, int>::iterator itm = a.begin(); itm != a.end(); itm++)
// 	// {
// 	//  std::cout << "this ->>> first " << itm->first << "this--> last   "  << itm->second  << std::endl;

// 	// }
// 	// std::pair<int, int> pa = *itm;
// 	// std::cout << pa.first << std::endl;
// 	//  test ++
// 	// // shoow all map
// 	// {
// 	//     std::cout << "----------------------------- show what in map ------------------------" << std::endl;
// 	//     for(std::map<std::string, int>::iterator itm = a.begin(); itm != a.end(); itm++)
// 	//     {
// 	//     std::cout << "this ->>> first " << itm->first << " this--> last   "  << itm->second  << std::endl;

// 	//     }
// 	//     std::cout <<  "--------------------------------------------end map --------------------" << std::endl;
// 	// }
// 	// {
// 	//     std::cout << "---------------------- test ++ -------------------------" << std::endl;
// 	//     itm++;
// 	//     std::cout << "first = " << itm->first << " second = " << itm->second << std::endl;
// 	// }

// 	// // {

// 	// // }
// 	// {
// 	//     // test 
// 	//     std::pair<std::string, int> a("lo", 5);

// 	// }
// 	// {
// 	//     //test map if key is string 
// 	//     std::map<std::string, int> a;
// 	//     a.insert(std::pair<std::string, int>("baa", 55));
// 	//     a.insert(std::pair<std::string, int>("abc", 1111111111));
// 	//     a.insert(std::pair<std::string, int>("c", 0));

// 	//     for(std::map<std::string, int>::iterator itm = a.begin(); itm != a.end(); itm++)
// 	//     {
// 	//         std::cout << "this ->>> first " << itm->first << " this--> last   "  << itm->second  << std::endl;
// 	//     }
// 	//     //ok test
// 	//     std::string test1 = "baa";
// 	//     std::string test2 = "abc"; 
// 	//     bool bl = test1 > test2;
// 	//     std::cout <<  std::boolalpha << bl << std::endl;
// 	// }

// 	// //test my avl
// 	// {
// 	//     std::pair<int, int> a(5, 5);
// 	//     ft::avl_tree<int, int> tree(a);
// 	// }



// 	{
// 		// test return 
// 		// std::map<int, int> a;
// 		// std::pair<std::map<int, int>::iterator, bool> s =  a.insert(std::pair<int, int>(50, 90));
// 		// std::cout << std::boolalpha << s.second <<  std::endl;
// 	}
// 	// {
// 	//     //test my avl algo
// 	//     ft::avl_tree<int, int> test;
// 	//     ft::pair<int, int> l(5,5);
// 	//     ft::pair<int, int> l2(3,5);
// 	//     bool ss = test.insert(l);
// 	//     // std::cout <<  ss << std::endl;
// 	//     ss = test.insert(l2);
// 	//     // std::cout <<  ss << std::endl;
// 	//     ft::pair<int, int> l3(1,5);
// 	//     ss = test.insert(l3);
// 	//     // std::cout <<  ss << std::endl;
// 	// }
// 	// test tree data structre

// 	{
// 		// ft::avl_tree<int, int> test1;
// 		// ft::pair<int, int> a(3,450);
// 		// ft::pair<int, int> a2(2,300);
// 		// ft::pair<int, int> a3(1,100);
// 		// ft::pair<int, int> a4(5,1);
// 		// test1.insert(a);
// 		// test1.insert(a2);
// 		// test1.insert(a3);
// 		//  test1.insert(a4);
// 		// std::cout << "key is " << test1.get()->key << " hight  " << test1.get()->hight << std::endl;
// 		// std::cout << "key is " << test1.get()->left->key << " hight  " << test1.get()->left->hight << std::endl;
// 		// std::cout << "key is " << test1.get()->right->key << " hight  " << test1.get()->right->hight<< std::endl;
// 		// std::cout << "key is " << test1.get()->right->right->key << " hight  " << test1.get()->right->right->hight << std::endl;
// 		// std::cout << "key is " << test1.get()->left->key << " hight  " << test1.get()->left->hight << std::endl;

// 		//  std::cout << test1->root->key << std::endl;
// 		// std::cout << test1->right->key << std::endl;
// 	}
// // 	{
// // 		std::map<int, int> a;
// // 		a.insert(std::pair<int, int>(5,5));
// // 		a.insert(std::pair<int, int>(6,5));
// // 		a.insert(std::pair<int, int>(9,5));
// // 		std::cout << a.size() << std::endl;
// // 	}

// // {
// // 	// test rrrotation

// // 	ft::avl_tree<int, int> test1;
// // 	ft::pair<int, int> a(3,450);
// // 	ft::pair<int, int> a2(5,300);
// // 	ft::pair<int, int> a3(6,100);
// // 	ft::pair<int, int> a4(4,1);
// // 	test1.insert(a);
// // 	test1.insert(a2);
// // 	test1.insert(a3);
// // 	test1.insert(a4);
// // 	std::cout << "key is " << test1.get()->key << " hight  " << test1.get()->hight << std::endl;
// // 	std::cout << "key is " << test1.get()->right->key << " hight  " << test1.get()->right->hight << std::endl;
// // 	std::cout << "key is " << test1.get()->left->key << " hight  " << test1.get()->left->hight << std::endl;
// // 	std::cout << "key is " << test1.get()->left->right->key << " hight  " << test1.get()->left->right->hight << std::endl;
// // 	//std::cout << "key is " << test1.get()->left->key << " hight  " << test1.get()->left->hight << std::endl;
// // }

// // {
// // 		// test right-left rotation

// // 	ft::avl_tree<int, int> test1;
// // 	ft::pair<int, int> a(20,450);
// // 	ft::pair<int, int> a2(50,300);
// // 	ft::pair<int, int> a3(12,100);
// // 	ft::pair<int, int> a4(40,1);
// // 	ft::pair<int, int> a5(100,155);
// // 	ft::pair<int, int> a6(30,155);

// // 	test1.insert(a);
// // 	test1.insert(a2);
// // 	test1.insert(a3);
// // 	test1.insert(a4);
// // 	test1.insert(a5);
// // 	test1.insert(a6);


// //  	std::cout << "key is " << test1.get()->key << std::endl;
// // 	std::cout << "key is " << test1.get()->right->key << std::endl;
// // 	std::cout << "key is " << test1.get()->left->key << std::endl;
// // 	std::cout << "key is " << test1.get()->left->right->key <<  std::endl;
// // 	std::cout << "key is " << test1.get()->right->right->key << std::endl;
// // 	std::cout << "key is " << test1.get()->left->left->key << std::endl;






// // }

// // {
// // 	//test left-right rotation 

// // 	ft::avl_tree<int, int> test1;
// // 	ft::pair<int, int> a(30,450);
// // 	ft::pair<int, int> a2(10,300);
// // 	ft::pair<int, int> a3(90,100);
// // 	ft::pair<int, int> a4(20,1);
// // 	ft::pair<int, int> a5(5,155);
// // 	ft::pair<int, int> a6(21,155); // add new to blance

// // 	test1.insert(a);
// // 	test1.insert(a2);
// // 	test1.insert(a3);
// // 	test1.insert(a4);
// // 	test1.insert(a5);
// // 	test1.insert(a6);



// // 	std::cout << "root key " << test1.get()->key << std::endl;
// // 	std::cout << "right subtree key " << test1.get()->right->key << std::endl;
// // 	std::cout << "left subtree key " << test1.get()->left->key << std::endl;

// // 	std::cout << "left left key " << test1.get()->left->left->key << std::endl;
// // 	std::cout << "right right key " << test1.get()->right->right->key << std::endl;
// // 	std::cout << "right left key " << test1.get()->right->left->key << std::endl;

// // }

// // {
// // 	//test erase map
// // 	std::map<int, int> test1;
// // 	std::pair<int, int> a(3,450);
// // 	std::pair<int, int> a2(2,300);
// // 	std::pair<int, int> a3(1,100);
// // 	 test1.insert(a);
// // 	 test1.insert(a2);
// // 	 test1.insert(a3);

// // 	std::cout << "return erase " << test1.erase(3) << std::endl;
// // 	std::map<int, int>::iterator it = test1.begin();
// // 	std::cout << "root " << it->first << std::endl;
// // }

// // {


// // 	//tst one node 
// // 	// ft::avl_tree<int, int> test1;
// // 	// ft::pair<int, int> a(30,450);

// // 	// test1.insert(a);
// // 	// std::cout << "key of root " << test1.get()->key << std::endl;
// // 	// test1.dele(a.first);
// // 	// std::cout << "addr of root " << test1.get() << std::endl;

// // 	//test  2 childern
// // 	// {
// // 	// 		ft::avl_tree<int, int> test1;
// // 	// 		ft::pair<int, int> a(3,450);
// // 	// 		ft::pair<int, int> a2(2,40);
// // 	// 		ft::pair<int, int> a3(1,50);

// // 	// 		test1.insert(a);
// // 	// 		test1.insert(a2);
// // 	// 		test1.insert(a3);

// // 	// 		std::cout << "key of left " << test1.get()->left->key << std::endl;
// // 	// 		test1.dele(a3.first);
// // 	// 		std::cout << "addr of left " <<  test1.get()->left << std::endl;
// // 	// }





// // }


// // {
// // 	//test more node 

// // 	ft::avl_tree<int, int> test1;
// // 	struct ft::node<int, int> *root; 
// // 	ft::pair<int, int> a(90,450);
// // 	ft::pair<int, int> a2(100,300);
// // 	ft::pair<int, int> a8(80,300);
// // 	ft::pair<int, int> a3(70,100);
// // 	ft::pair<int, int> a4(82,400);
// // 	ft::pair<int, int> a5(92,1);
// // 	ft::pair<int, int> a6(101,155);
// // 	ft::pair<int, int> a7(81,155); // add new to blance

// // 	test1.insert(a);
// // 	test1.insert(a2);
// // 	test1.insert(a8);
// // 	test1.insert(a3);
// // 	test1.insert(a4);
// // 	test1.insert(a5);
// // 	test1.insert(a6);
// // 	test1.insert(a7);

// // 	test1.test_plus_plus_1(test1.get()->left);
// // 	test1.test_plus_plus_1(test1.get()->left->left);
// // 	// std::cout << "root befor= " << test1.get()->key << std::endl;
// // 	// std::cout << "addres left right befor= " << test1.get()->left->right << " lol = "<< test1.get()->left->right->parent->key << std::endl;
// // 	// test1.dele(90);
// // 	// std::cout << "root after= " << test1.get()->key << std::endl;
// // 	// std::cout << "addres left right after= " << test1.get()->left->right << std::endl;
// // 	// root = test1.get();
// // 	// while (root->left)
// // 	// {
// // 	// 	root = root->left;
// // 	// }

// // 	// std::cout << "smallest: " << root->key << "\n";

// // 	// for(int i = 0; i <= 6; i++)
// // 	// {
// // 	// 	if(root != NULL)
// // 	// 		std::cout << "key == " << root->key << "\n";
// // 	// 	root = getbigpp(root);
// // 	// }

// // 	// while (root)
// // 	// {
// // 	// 	std::cout << "key == " << root->key << "\n";
// // 	// 	root = getbigpp(root);
// // 	// }
// // 	// {
// // 	// 	std::map<int, int> a;
// // 	// 	a.insert(std::pair<int, int>(75, 7775));
// // 	// 	std::map<int, int>::iterator it = a.end();
// // 	// 	std::pair<int, int> s=*it;
// // 	// 	std::cout << "test = f= " << s.first << std::endl;
// // 	// }

// // }

// // {
// // 	// //test iterator

// // 	// std::map<int, int> test1;
// // 	// test1.insert(std::pair<int, int>(90, 300));
// // 	// test1.insert(std::pair<int, int>(80, 5999));
// // 	// test1.insert(std::pair<int, int>(70, 9999));
// // 	// test1.insert(std::pair<int, int>(71, 9959));
// // 	// test1.insert(std::pair<int, int>(60, 8999));




// // 	// // std::cout << "map "

// // 	// std::map<int, int>::iterator  it1 = test1.begin();
// // 	//  std::map<int, int>::iterator  it(it1);
// // 	// //  std::cout << "f = " << it->first << " s= "  << it->second << std::endl;
// // 	// ft::map<int, int> test_map;
// // 	// // ft::map<int, int>::iterator my_it;
// // 	// // std::pair<int,int>a = it;


// // 	// for(; it != test1.end(); it++)
// // 	// {
// // 	// 	std::cout << "it.first = " << it->first << " it.second=  " << it->second << std::endl;
// // 	// }

// // }
// // {
// // 	// test my logic


// // 	ft::avl_tree<int, int> test1;
// // 	ft::pair<int, int> a(3,450);
// // 	ft::pair<int, int> a2(2,300);
// // 	ft::pair<int, int> a3(1,100);
// // 	// ft::pair<int, int> a4(81,1);
// // // 	ft::pair<int, int> a5(70,155);
// // // 	// ft::pair<int, int> a6(21,155); // add new to blance

// // 	test1.insert(a);
// // 	test1.insert(a2);
// // 	test1.insert(a3);
// // // 	test1.insert(a4);
// // // 	test1.insert(a5);


// // 	ft::avl_tree<int, int> test2(test1);

// // }

// // {
// // 	std::map<int, int> p;

// // 	std::map<int, int>::iterator it = p.begin();
// // 	it++;
// // }

// // {
// // 	/// copy constructre
// // 	ft::avl_tree<int, int> test1;
// // 	// struct ft::node<int, int> *root; 
// // 	ft::pair<int, int> a(90,450);
// // 	ft::pair<int, int> a2(100,300);
// // 	ft::pair<int, int> a8(80,300);
// // 	ft::pair<int, int> a3(70,100);
// // 	ft::pair<int, int> a4(82,400);
// // 	ft::pair<int, int> a5(92,1);
// // 	ft::pair<int, int> a6(101,155);
// // 	ft::pair<int, int> a7(81,155); // add new to blance

// // 	test1.insert(a);
// // 	test1.insert(a2);
// // 	test1.insert(a8);
// // 	test1.insert(a3);
// // 	test1.insert(a4);
// // 	test1.insert(a5);
// // 	test1.insert(a6);
// // 	test1.insert(a7);

// // // 	ft::avl_tree<int, int> test(test1);
// // // 	std::cout << "key of root " << test.get()->pt.first << std::endl;
// // // 	std::cout << "key of left " << test.get()->left->pt.first << std::endl;
// // // 	std::cout << "key of right " << test.get()->right->pt.first << std::endl;
// // // 	std::cout << "key of right " << test.get()->right->right->pt.first << std::endl;



// // // }


// // {
// // 	// // test iterator
// // 	// std::map<int, int> a;
// // 	// a.insert(std::pair<int, int>(90, 900));

// // 	// a.insert(std::pair<int, int>(80, 900));

// // 	// std::map<int, int >::iterator it =  a.begin();

// // 	// // b.insert(std::pair<int, int>(90, 900));


// // 	// std::map<int, int>::iterator it2  =  a.begin()++;

// // 	// // std::cout << std::boolalpha << (it == it2) << "\n";
// // 	// std::pair<int, int> lol =  *it;

// // 	// a.insert(std::pair<int, int>(100, 155));
// // 	// a.insert(std::pair<int, int>(80, 5454));
// // 	// a.insert(std::pair<int, int>(101, 885));
// // 	// a.insert(std::pair<int, int>(91, 11195));
// // 	// a.insert(std::pair<int, int>(70, 775));
// // 	// a.insert(std::pair<int, int>(82, 8285));
// // 	// a.insert(std::pair<int, int>(81, 8125));

// // 	// std::map<int, int>::iterator it = a.begin();
// // 	// std::cout << "begin= "  << it->first << std::endl;
// // 	// std::cout << "value= "  << it->second << std::endl;

// // 	// std::map<int, int> a;
// // 	// a.insert();
// // 	// std::map<int, int>::iterator it;
// // 	// bool dsfn = it  == it2;
// // 	// std::map<int, int> a;
// // 	// std::cout << it->first << " " << it2->first << std::endl;
// // 	// std::cout << std::boolalpha << (it  == it) << std::endl;

// // 	// ft::avl_tree<int, int> test1;
// // 	// ft::pair<int, int> l(90, 90);
// // 	// test1.insert(l);



// // 	// std::cout << std::boolalpha << (test1  == test1) << std::endl;
// // 	// std::cout << "test = " << it->first  << it->second << std::endl;



// // 	{
// // 		// ft::avl_tree<int, int> a;
// // 		// ft::pair<int, int> p(5,5);
// // 		// a.insert(p);

// // 	 	// ft::pair<const int, int> it = *a;
// // 		// std::cout << "key-> " << a.get()->pt.first;
// // 		// std::map<int, int> a;
// // 		// a.insert(std::pair<const int, int>(5, 10));
// // 		// std::map<int, int>::iterator it_test = a.begin();
// // 		// std::map<int, int>::iterator it_test;

// // 			// std::pair<int, int> p2(15,5);
// // 		// *it_test =  p2;
// // 		// *it = p2;
// // 	}

// // 	// std::map<int, int> test2;




// // 	// test2.insert(std::pair<int, int>(9,999));
// // 	// test2.insert(std::pair<int, int>(5,6999));

// // 	// std::pair<const int, int> a(5,9);
// // 	// std::map<int, int>::iterator it = test2.begin();
// // 	// std::map<int, int>::iterator it_;
// // 	// //std::cout << "it->  " << it->first << " " << it->second << std::endl;
// // 	// std::pair<const int, int> y = *it;
// // 	// std::cout << "pair 1 " << &y<<"\n";
// // 	// std::pair<int, int> r = *it;
// // 	// std::cout << "pair 1 " << &r <<"\n";
// // 	// std::cout << "pair 1 " << &(*it) <<"\n";
// // 	// std::cout << "pair 1 " << &(*it) <<"\n";
// // 	// std::cout << "pair 1 " << &(*it) <<"\n";
// // 	// std::cout << "pair 1 " << &(*it) <<"\n";
// // 	// std::cout << "pair 1 " << &(*it) <<"\n";
// // 	// std::cout << "pair 1 " << &(*it) <<"\n";

// // 	ft::avl_tree<int, int> my_map;
// // 	// ft::map_iterator<ft::avl_tree<int, int> > k;

// // 	my_map.insert(ft::pair<int, int>(1,99));
// // 	my_map.insert(ft::pair<int, int>(2,10));
// // 	my_map.insert(ft::pair<int, int>(3,20));
// // 	my_map.insert(ft::pair<int, int>(4,30));
// // 	my_map.insert(ft::pair<int, int>(5,40));
// // 	my_map.insert(ft::pair<int, int>(6,50));
// // 	my_map.insert(ft::pair<int, int>(7,60));
// // 	my_map.insert(ft::pair<int, int>(8,70));
// // 	my_map.insert(ft::pair<int, int>(9,80));


// // 	ft::pair<int, int> t_p = *my_map; 
// // 	// std::pair<int, int> testtt;
// // 	// testtt = *it;
// // 	std::cout << "first : " << t_p.first << " second " << t_p.second << "\n";
// // 	// (*it).first = 5;

// // 	// std::cout << testtt.first << " my = " << t_p.first << std::endl;


// // 	// std::iterator<std::bidirectional_iterator_tag, int> it;
// // 	// std::iterator<std::bidirectional_iterator_tag, int> it_2;
// // 	// (*it).second = 1;
// // 	// *it = 22;
// // 	// *it = *it_;
// // 	// *it++;
// // 	// std::cout << it->first << " " << it->second;



// // }


// // {
// 	// // test operaror

// 	// {
// 	// 	std::map<int, int> test;
// 	// 	test.insert(std::pair<int, int>(90,2));
// 	// 	test.insert(std::pair<int, int>(100,2));
// 	// 	test.insert(std::pair<int, int>(80,2));
// 	// 	test.insert(std::pair<int, int>(101,2));
// 	// 	test.insert(std::pair<int, int>(70,2));
// 	// 	test.insert(std::pair<int, int>(85,2));
// 	// 	test.insert(std::pair<int, int>(95,2));


// 	// 	std::map<int, int>::iterator it = test.begin();
// 	// 	it++;
// 	// 	it++;
// 	// 	it++;
// 	// 	std::cout << "org befor ==> " << it->first << std::endl;
// 	// 	--it;
// 	// 	std::cout << "org after == >   " <<  it->first << std::endl;
// 	// 		it--;
// 	// 	std::cout << "org after2 == >   " <<  it->first << std::endl;
// 	// 	it--;
// 	// 	std::cout << "after3 == >   " <<  it->first << std::endl;



// 	// }
// 	//   // test my operator
// 	// ft::avl_tree<int, int> test;
// 	// test.insert(ft::pair<int, int>(90,2));
// 	// test.insert(ft::pair<int, int>(100,2));
// 	// test.insert(ft::pair<int, int>(80,2));
// 	// test.insert(ft::pair<int, int>(101,2));
// 	// test.insert(ft::pair<int, int>(70,2));
// 	// test.insert(ft::pair<int, int>(85,2));
// 	// test.insert(ft::pair<int, int>(95,2));


// 	// test = test.begin();
// 	// test++;
// 	// test++;
// 	// test++;
// 	// std::cout << "test = " <<  test.get()->pt.first << std::endl;
// 	// std::cout << "befor == " <<	 << std::endl;;
// 	// --test;
// 	// std::cout << "my   after == " << test.get()->pt.first << std::endl;
// 	// --test;
// 	// std::cout << "my   after2 == " << test.get()->pt.first << std::endl;
// 	// --test;
// 	// std::cout << "my   after3 == " << test.get()->pt.first << std::endl;
// 	// ++test;
// 	// std::cout << "after3 == " << test.get()->pt.first << std::endl;
// 	// ++test;
// 	// std::cout << "after4 == " << test.get()->pt.first << std::endl;
// 	// ++test;
// 	// std::cout << "after6 == " << test.get()->pt.first << std::endl;
// 	// ++test;
// 	// std::cout << "after7 == " << test.get()->pt.first << std::endl;

// 	//test ->


// {
// 	// ft::pair<int, int> test9;
// 	// ft::avl_tree<ft::pair<const int, int> > a;
// 	// a.insert(ft::pair<int, int>(9,90));
// 	// ft::map_iterator<ft::avl_tree<ft::pair<const int, int> > > test = a.begin();
// 	// std::map<int, int> 	x13;
// 	// std::map<int, int>::iterator it =  x13.begin();

// 	// std::pair<const int, int> aaaa(5, 5);
// 		//test->first;
// 	// ft::value_type_test<ft::pair<int, int> t_t;
// 	// std::cout << test->first << std::endl;
// 	// it->swap(aaaa);



// }

// // {
// // 	//test operator
// // 	// ft::map<int, int> test1;
// // 	// ft::map<int, int>::iterator it = test1.begin();

// // 	std::map<long, int> m;
// // 	ft::map<long, int> test1;

// // 	// // std::cout << "size ==> " << m.size() << std::endl;
// // 	// // std::cout << std::boolalpha << m.empty() << std::endl;
// // 	// std::cout << m.max_size() << std::endl;
// // 	// // size_t a = std::numeric_limits<int>::max();
// // 	// // size_t b = std::numeric_limits<int>::max();
// // 	// // unsigned long  c = a * b;
// // 	// // size_t d = pow(2,64);
// // 	// // std::allocator<std::pair<const int, int> > alloc;
// // 	// // std::cout << alloc.max_size() << std::endl;
// // 	// std::cout << test1.max_size() << std::endl;
// // 	// // std::cout << std::numeric_limits<int>::max() << std::endl;
// // 	// // std::cout << std::numeric_limits<int>::max() << std::endl;
// // 	// // std::map<int, int>::iterator it = m.begin();

// // 	// ft::vector<int> a(abc, abc, std::allocator<int>(), abc);


// // }

// // {
// // 	// test operator
// // 	std::map<int, int> a;
// // 	a.insert(std::pair<int, int>(5, 90000));
// // 	// a.insert(std::pair<int, int>(5, 8888));

// // 	std::cout << a.size() << std::endl;
// // 	a[99] = 7;
// // 	std::map<int, int>::iterator  it =  a.begin();
// // 	it++;
// // 	std::cout <<  it->second << std::endl;
// // 	std::cout << a.size() << std::endl;

// // }

// // 	{
// // 		// ft::avl_tree<ft::pair<int, int> > test1;
// // 		// test1.insert(ft::pair<int, int>(9, 99990));
// // 		// test1.insert(ft::pair<int, int>(10, 90));
// // 		// test1.insert(ft::pair<int, int>(7, 90));
// // 		// try
// // 		// {
// // 		// 		test1.search(9, test1.get()) = 66;
// // 		// 		std::cout << test1.get()->pt.second << std::endl;
// // 		// }
// // 		// catch(...)
// // 		// {
// // 		// 	std::cerr << "lol" << '\n';
// // 		// }
// // 		// ft::map<int, int> a;
// // 		// a.insert(ft::pair<int, int>(9, 9996));
// // 		// a.insert(ft::pair<int, int>(10, 899010));
// // 		// a.insert(ft::pair<int, int>(7, 87777));
// // 		// a[999] = 5;



// // 	}
// // }

// // test insert


// // {
// // 	std::map<int, int> test;


// // 	std::pair<std::map<int, int>::iterator, bool> ret = test.insert(std::pair<int, int>(9, 60));
// // 	std::pair<std::map<int, int>::iterator, bool> ret2 = test.insert(std::pair<int, int>(6, 60));

// // 	std::cout <<  ret.first->first << std::endl;
// // 	std::cout << ret2.first->first << std::endl;



// // }

// // test  type 1  insert

// // {
// // 	ft::map<int, int> test1;
// // 	test1.insert(ft::pair<int, int>(3, 390));
// // 	test1.insert(ft::pair<int, int>(2, 290));
// // 	test1.insert(ft::pair<int, int>(1, 190));
// // 	// std::cout << test1.tree_base.root->pt.first << std::endl;
// // 	ft::pair<ft::map<int, int>::iterator, bool>  it = test1.insert(ft::pair<int, int>(3, 90));
// // 	std::cout << "my === > " << it.first->first << std::endl;
// // 	std::cout << "my === > " <<  std::boolalpha << it.second << std::endl;

// // }

// // {
// // 	std::map<int, int> test1;

// // 	test1.insert(std::pair<int, int>(3, 90));
// // 	test1.insert(std::pair<int, int>(2, 90));
// // 	test1.insert(std::pair<int, int>(1, 90));

// // 	std::pair<std::map<int, int>::iterator, bool>  it = test1.insert(std::pair<int, int>(3, 80));
// // 	std::cout << "org ===> " << it.first->first << std::endl;
// // 	std::cout << "org == > "  << std::boolalpha << it.second << std::endl;

// // }


// // test type 2 inser hint

// // {
// // 	std::map<int, int> test;
// // 	test.insert(std::pair<int, int>(3, 70));
// // 	test.insert(std::pair<int, int>(2, 70));
// // 	test.insert(std::pair<int, int>(1, 70));


// // 	// std::cout << test.begin()->first << std::endl; 
// // 	std::map<int, int>::iterator a =  test.insert(test.begin(), std::pair<int, int>(3, 70));
// // 	std::cout << "org ==== > " << a->first << std::endl;
// // 	// test.insert(test.begin(), std::pair<int, int>(4, 70));
// // 	// std::cout <<  << std::endl; 
// // 	// test.insert(test.begin(), std::pair<int, int>(9, 70));
// // 	// std::cout << "test    " <<  test.begin()->first << std::endl;

// // }

// // {
// // 	ft::map<int, int> test;
// // 	test.insert(ft::pair<int, int>(3, 70));
// // 	test.insert(ft::pair<int, int>(2, 70));
// // 	test.insert(ft::pair<int, int>(1, 70));


// // 	// ft::cout << test.begin()->first << ft::endl; 
// // 	ft::map<int, int>::iterator a =  test.insert(test.begin(), ft::pair<int, int>(3, 70));
// // 	std::cout << "my ==== > " << a->first << std::endl;
// // 	// test.insert(test.begin(), std::pair<int, int>(4, 70));
// // 	// std::cout <<  << std::endl; 
// // 	// test.insert(test.begin(), std::pair<int, int>(9, 70));
// // 	// std::cout << "test    " <<  test.begin()->first << std::endl;
// // }


// // test insert 3
// {
// // 	std::map<int, int> test;
// // 	std::map<int, int> test2;
// // 	test.insert(std::pair<int, int>(3, 22));
// // 	test.insert(std::pair<int, int>(2, 22));
// // 	test.insert(std::pair<int, int>(1, 22));
// // 	test.insert(std::pair<int, int>(4, 22));

// // 	std::map<int, int>::iterator it  = test.begin();
// // 	// // while (it != test.end())
// // 	// // {
// // 	// // 	std::cout << it->first << "\n";
// // 	// // 	it++;
// // 	// // }

// // 	std::cout << &it << "\n";
// // 	it  = test.begin();
// // 	std::cout << &it << "\n";
// // 	std::cout << "lol ==> " << it->first << std::endl;
// // 	test2.insert(it, test.end());
// // 	// test2.insert(std::pair<int, int>(3, 22));
// // 	// test2.insert(std::pair<int, int>(2, 22));
// // 	// test2.insert(std::pair<int, int>(1, 22));
// // 	// test2.insert(std::pair<int, int>(4, 22));
// // 	std::map<int, int>::iterator it2  = test2.begin();

// // 	while (it2 != test2.end())
// // 	{
// // 		std::cout << it2->first << "\n";
// // 		it2++;
// // 	}
// 	// std::map<int, int> test;
// 	// std::map<int, int> test2;
// 	// test.insert(std::pair<int, int>(3, 22));
// 	// test.insert(std::pair<int, int>(2, 22));
// 	// test.insert(std::pair<int, int>(1, 22));
// 	// test.insert(std::pair<int, int>(4, 22));

// 	// std::map<int, int>::iterator it  = test.begin();

// 	// std::cout << "add1: " << &it << std::endl;
// 	// it  = test.begin();
// 	// std::cout << "add1: " << &it << std::endl;
// 	// test2.insert(it, test.end());
// 	// std::map<int, int>::iterator it2  = test2.begin();

// 	// // test 
// 	// for(; it2 != test2.end(); it2++)
// 	// {
// 	// 	std::cout << "org => " << it2->first <<  std::endl;
// 	// }
// 	// std::map<int, int> test;
// 	// std::map<int, int> test2;
// 	// test.insert(std::pair<int, int>(3, 22));
// 	// test.insert(std::pair<int, int>(2, 22));
// 	// test.insert(std::pair<int, int>(1, 22));
// 	// test.insert(std::pair<int, int>(4, 22));

// 	// std::map<int, int>::iterator it  = test.begin();
// 	// test2.insert(test.begin(), test.end());
// 	// std::map<int, int>::iterator it2  = test2.begin();
// 	// for(; it2 != test2.end(); it2++)
// 	// {
// 	// 	// std::cout << "Null> " << it2.tree.root << std::endl;
// 	// 	std::cout << "org ===> " << it2->first  << std::endl;
// 	// }
// }
// // {
// // 	ft::map<int, int> test;
// // 	ft::map<int, int> test2;
// // 	test.insert(ft::pair<int, int>(3, 22));
// // 	test.insert(ft::pair<int, int>(2, 22));
// // 	test.insert(ft::pair<int, int>(1, 22));
// // 	test.insert(ft::pair<int, int>(4, 22));

// // 	ft::map<int, int>::iterator it  = test.begin();
// // 	// // while (it != test.end())
// // 	// // {
// // 	// // 	std::cout << it->first << "\n";
// // 	// // 	it++;
// // 	// // }

// // 	// std::cout << &it << "\n";
// // 	it  = test.begin();
// // 	// std::cout << &it << "\n";
// // 	// std::cout << "lol ==> " << it->first << std::endl;
// // 	test2.insert(it, test.end());
// // 	ft::map<int, int>::iterator it2  = test2.begin();
// // 	test2.erase(it2);
// // 	it2  = test2.begin();
// // 	while (it2 != test2.end())
// // 	{
// // 		std::cout << it2->first << "\n";
// // 		it2++;
// // 	}
// 	// ft::map<int, int>::iterator it2  = test2.begin();
// 	// std::cout << "lol ==> " << it2->first << std::endl;

// 	// // std::cout << it2->first << std::endl;
// 	// for(; it2 != test2.end(); it2++)
// 	// {
// 	// 	// std::cout << "Null> " << it2.tree.root << std::endl;
// 	// 	std::cout << "my ===> " << it2->first  << std::endl;
// 	// }
// 	// 	std::cout << "Null> " << it2.tree.root << std::endl;
// 	// test 
// 	// ft::map<int, int>::iterator it2  = test2.begin();
// 	// std::cout << "my ==>"  << it2->first <<  std::endl;
// 	// it2++;
// 	// std::cout << "my ==>"  << it2->first <<  std::endl;
// // 	for( it2 != test2.end(); it2++)
// // 	{

// // 	}
// // }

// // {
// // 	// test size 
// // 	std::map<int, int> a;
// // 	a.insert(std::pair<int, int>(9, 90));
// // 	a[10] = 4;
// // 	std::cout << "test one insert ==> " << a.size() << std::endl;
// // 	a[9] = 98;
// // 	std::cout << "test 2 insert ==> " << a.size() << std::endl;
// // 	a.erase(9);
// // 	std::cout << "test 3 erase ==> " << a.size() << std::endl;


// // }

// {
// 	// test swap 
// 	// std::map<int, int> test1;
// 	// test1.insert(std::pair<int, int>(19, 92));
// 	// test1.insert(std::pair<int, int>(10, 92));
// 	// test1.insert(std::pair<int, int>(50, 92));
// 	// test1.insert(std::pair<int, int>(90, 92));

// 	// std::map<int, int> test2;
// 	// test2.insert(std::pair<int, int>(190, 92));
// 	// test2.insert(std::pair<int, int>(100, 92));
// 	// test2.insert(std::pair<int, int>(500, 92));
// 	// test2.insert(std::pair<int, int>(900, 92));
// 	// test2.insert(std::pair<int, int>(905, 92));

// 	// std::map<int, int>::iterator it1 = test2.begin();
// 	// std::cout << "begin befor ==> " <<  it1->first << " " << test2.size() << std::endl;

// 	// test2.swap(test1);
// 	// std::map<int, int>::iterator it2 = test2.begin();
// 	// // std::cout << "begin after ==> " <<  it2->first  << " " << test2.size() << std::endl;
// 	// // for(; it2 != test2.end(); it2++)
// 	// // {
// 	// // 	std::cout << " test => " << it2->first << std::endl;
// 	// // }

// 	// for(std::map<int, int>::iterator it3 = test1.begin(); it3 != test1.end(); it3++)
// 	// {
// 	// 	std::cout << " test => " << it3->first << std::endl;
// 	// }

// }
// {
// 	// // test my map
// 	// ft::map<int, int> test1;
// 	// test1.insert(ft::pair<int, int>(19, 92));
// 	// test1.insert(ft::pair<int, int>(10, 92));
// 	// test1.insert(ft::pair<int, int>(50, 92));
// 	// test1.insert(ft::pair<int, int>(90, 92));

// 	// ft::map<int, int> test2;
// 	// test2.insert(ft::pair<int, int>(190, 92));
// 	// test2.insert(ft::pair<int, int>(100, 92));
// 	// test2.insert(ft::pair<int, int>(500, 92));
// 	// test2.insert(ft::pair<int, int>(900, 92));
// 	// test2.insert(ft::pair<int, int>(905, 92));

// 	// ft::map<int, int>::iterator it1 = test2.begin();
// 	// std::cout << "begin befor ==> " <<  it1->first << " " << test2.size() << std::endl;

// 	// test2.swap(test1);
// 	// ft::map<int, int>::iterator it2 = test2.begin();
// 	// std::cout << "begin after ==> " <<  it2->first  << " " << test2.size() << std::endl;
// 	// for(; it2 != test2.end(); it2++)
// 	// {
// 	// 	std::cout << " test2 => " << it2->first << std::endl;
// 	// }
// 	// std::cout << "-----------------------------------------------------------" << std::endl;
// 	// for(ft::map<int, int>::iterator it3 = test1.begin(); it3 != test1.end(); it3++)
// 	// {
// 	// 	std::cout << " test1 => " << it3->first << std::endl;
// 	// }
// 	// test2.clear();
// 	// std::cout << test2.size() << std::endl;
// }



// // {
// // 	// test lower bound
// // 	ft::map<int, int> test1;

// // 	test1.insert(ft::pair<int, int>(9, 80));
// // 	test1.insert(ft::pair<int, int>(80, 80));
// // 	test1.insert(ft::pair<int, int>(19, 810));
// // 	test1.insert(ft::pair<int, int>(29, 80));
// // 	test1.insert(ft::pair<int, int>(239, 80));
// // 	std::map<int, int> test2;

// // 	test2.insert(std::pair<int, int>(9, 80));
// // 	test2.insert(std::pair<int, int>(80, 80));
// // 	test2.insert(std::pair<int, int>(19, 810));
// // 	test2.insert(std::pair<int, int>(29, 80));
// // 	test2.insert(std::pair<int, int>(239, 80));
// // 	// test1.insert(ft::pair<int, int>(89, 8899980));
// // 	// test1.insert(ft::pair<int, int>(90, 80));
// // 	// test1.insert(ft::pair<int, int>(30, 80));
// // 	// test1.insert(ft::pair<int, int>(40, 80));

// // 	// test1.insert(ft::pair<int, int>(90,  70));
// // 	// test1.insert(ft::pair<int, int>(50,  "710"));


// // 	// ft::map<int, int>::iterator bit =  test1.begin();
// // 	test1.lower_bound(100);
// // 	std::map<int, int>::iterator lit = test2.lower_bound(100);
// // 	// ft::map<int, int>::iterator uit =  test1.upper_bound(40);
// // 	// ft::map<int, int>::iterator it =  test1.end();
// // 	// ft::cout << &it << std::endl;

// // 	// std::cout << " test ==>  " <<  bit->first << " s => "  <<  bit->second << std::endl;
// // 	std::cout << " test ==>  " <<  lit->first << " s => "  <<  lit->second << std::endl;
// // 	// std::cout << " upper test ==>  " <<  uit->first << " s => "  <<  uit->second << std::endl;


// // }

// {
// 	///test end
// 	// {
// 	// 	std::map<int, int> m;

// 	// 	m.insert(std::pair<int, int>(3, 50));
// 	// 	m.insert(std::pair<int, int>(2, 50));
// 	// 	m.insert(std::pair<int, int>(1, 50));
// 	// 	std::map<int, int>::iterator it  = m.end();
// 	// 	// std::allocator<int> a;
// 	// 	// std::cout << a.address << std::endl;
// 	// 	// it++;
// 	// 	std::cout << "end1 " << it->first  <<  "   " << it->second << std::endl;
// 	// 	// it--;
// 	// 	// std::cout << "end2 " << it->first << std::endl; 
// 	// }
// 	// {
// 	// 	ft::map<int, int> m;
// 	// 	m.insert(ft::pair<int, int>(3, 50));
// 	// 	m.insert(ft::pair<int, int>(2, 50));
// 	// 	m.insert(ft::pair<int, int>(1, 50));
// 	// 	ft::map<int, int>::iterator it  = m.end();
// 	// 	// std::allocator<int> a;
// 	// 	// std::cout << a.address << std::endl;
// 	// 	// it++;
// 	// 	std::cout << "end1 " << it->first  <<  "   " << it->second << std::endl;
// 	// 	// it--;
// 	// 	// std::cout << "end2 " << it->first << std::endl; 
// 	// }

// 	// std::map<std::string, long> m;

// 	// m.insert(std::pair<std::string, long>("66", 90));
// 	// m.insert(std::pair<std::string, long>("2", 50));
// 	// m.insert(std::pair<std::string, long>("1", 50));
// 	// std::map<std::string, long>::iterator it  = m.end();
// 	// std::cout << "end2 " << it->first << std::endl; 

// 	// std::map<int, int> m2;

// 	// m2.insert(std::pair<int, int>(90, 90));
// 	// m2.insert(std::pair<int, int>(25, 50));
// 	// m2.insert(std::pair<int, int>(19, 50));
// 	// std::map<int, int>::iterator it2  = m2.end();
// 	// // std::cout << "end1 " << it->first << std::endl;
// 	// // it++;
// 	// std::cout << "end2 " << it2->first << std::endl; 
// }

// // {
// // 	// test new logic
// // 	ft::map<int, int> m;
// // 	m.insert(ft::pair<int, int>(3, 50));
// // 	m.insert(ft::pair<int, int>(2, 50));
// // 	m.insert(ft::pair<int, int>(1, 50));
// // 	ft::map<int, int>::iterator it  = m.begin();
// // 	// it++;
// // 	std::cout << it->first << std::endl;
// // 	it--;
// // 	std::cout << it->first << std::endl;
// // }
// // std::cout << "---------------------------" << std::endl;
// // {
// // 	{
// // 	// test new logic
// // 	std::map<int, int> m;
// // 	m.insert(std::pair<int, int>(3, 50));
// // 	m.insert(std::pair<int, int>(2, 50));
// // 	m.insert(std::pair<int, int>(1, 50));
// // 	std::map<int, int>::iterator it  = m.begin();
// // 	// it++;
// // 	std::cout << it->first << std::endl;
// // 	it--;
// // 	std::cout << it->first << std::endl;

// // }
// // }
// // {
// // 	// test logic with map
// // 	std::map<int, int> m;
// // 	m.insert(std::pair<int, int>(3, 50));
// // 	m.insert(std::pair<int, int>(2, 50));
// // 	m.insert(std::pair<int, int>(1, 50));
// // 	std::map<int, int>::iterator it  = m.begin();
// // 	std::cout << it->first << std::endl;
// // 	it++;
// // 	it++;
// // 	it++;
// // 	std::cout << it->first << std::endl;

// // }


// // {
// // 	// // test upper bound
// // 	std::map<int, int> test;

// // 	test.insert(std::pair<int, int>(9, 70));
// // 	test.insert(std::pair<int, int>(95, 70));
// // 	test.insert(std::pair<int, int>(19, 70));
// // 	test.insert(std::pair<int, int>(88, 70));
// // 	test.insert(std::pair<int, int>(1, 70));

// // 	std::map<int, int>::iterator it  = test.upper_bound(9);
// // 	std::map<int, int>::iterator it2  = test.lower_bound(9);
// // 	std::pair<std::map<int, int>::iterator , std::map<int, int>::iterator> itp = test.equal_range(9);
// // 	std::cout << "org map upper ==> " <<  it->first << std::endl;
// // 	std::cout << "org map lower ==> " <<  it2->first << std::endl;
// // 	std::cout << "map eq == > " << itp.first->first <<  " map s eq "  << itp.second->first << std::endl; 
 
// // 	// std::map<int, int>::iterator it =  test.end();
// // 	// it--;
// // 	// std::cout << "test ==> " <<  it->first << std::endl;
// // 	// it++;
// // 	// std::cout << "test ==> " <<  it->first << std::endl;

// // 	// test logic
// // 	// std::map<int, int>::iterator it =  test.begin();
// // 	// it++;
// // 	// std::cout << "test ==> " <<  it->first << std::endl;
// // 	// it++;
// // 	// std::cout << "test ==> " << it->first << std::endl;

// // }

// // std::cout << "------------------------------------------------------" << std::endl;
// // {
// // 	// test my upper_logic
// // 	ft::map<int, int> test;

// // 	test.insert(ft::pair<int, int>(9, 70));
// // 	test.insert(ft::pair<int, int>(95, 70));
// // 	test.insert(ft::pair<int, int>(19, 70));
// // 	test.insert(ft::pair<int, int>(88, 70));
// // 	test.insert(ft::pair<int, int>(1, 70));




// // 	ft::map<int, int>::iterator it  = test.upper_bound(9);
// // 	ft::map<int, int>::iterator it2  = test.lower_bound(9);
// // 	ft::pair<ft::map<int, int>::iterator , ft::map<int, int>::iterator> itp = test.equal_range(9);
// // 	std::cout << "my map upper ==> " <<  it->first << std::endl;
// // 	std::cout << "my map lower ==> " <<  it2->first << std::endl;
// // 	std::cout << "my map eq == > " << itp.first->first <<  " my map s eq "  << itp.second->first << std::endl; 
// //   	// ft::map<int, int>::iterator it =  test.upper_bound(900);
// // 	// std::cout << "my map == " <<  it->first << std::endl;

// // 	// bool i = 9 < 9;
// // 	// std::cout << std::boolalpha << i << std::endl;
// // 	// ft::map<int, int>::iterator it = test.begin();
// // 	// it++;
// // 	// it++;
// // 	// it++;
// // 	// it++;
// // 	// std::cout << "test == " <<  it->first << std::endl;
// // 	// it++;
// // 	// std::cout << "test == " <<  it->first << std::endl;



// // }
// // {
// // 	// test constrator range

// // 	std::map<int, int> test;

// // 	test.insert(std::pair<int, int>(9,10));
// // 	test.insert(std::pair<int, int>(19,10));
// // 	test.insert(std::pair<int, int>(29,10));
// // 	test.insert(std::pair<int, int>(39,10));
// // 	test.insert(std::pair<int, int>(49,10));

// // 	std::map<int, int>::iterator it_b =  test.begin();
// // 	// std::map<int, int>::iterator it_e =  test.end();

// // 	std::map<int, int> test2;

// // 	test2.insert(std::pair<int, int>(39,10));
// // 	test2.insert(std::pair<int, int>(323,10));
// // 	test2.insert(std::pair<int, int>(89,10));
// // 	test2.insert(std::pair<int, int>(79,10));

// // 	std::map<int, int>::iterator it_b2(it_b);
// // 	it_b2++;
// // 	std::cout  << it_b2->first << std::endl;
// // 	std::cout  << it_b->first << std::endl;


// // 	// for(std::map<int, int>::iterator it = test2.begin(); it !=  test2.end(); it++)
// // 	// {
// // 	// 	std::cout << it->first << std::endl;;
// // 	// }
// // 	// // test2(test);
// // 	// std::cout << " ----- " << std::endl;
// // 	// for(std::map<int, int>::iterator it = test2.begin(); it !=  test2.end(); it++)
// // 	// {
// // 	// 	std::cout << it->first << std::endl;;
// // 	// }
// // }
// // std::cout << "--------------- " << std::endl;
// // {
// // 	// test constrator range

// // 	ft::map<int, int> test;
// // 	//2 1 3 9 6 8 5 4 12 29 69 40 23 58 92 11 22 99 1001

// // 	test.insert(ft::pair<int, int>(2,10));
// // 	test.insert(ft::pair<int, int>(1,10));
// // 	test.insert(ft::pair<int, int>(3,10));
// // 	test.insert(ft::pair<int, int>(9,10));
// // 	test.insert(ft::pair<int, int>(6,10));



// // 	// test.insert(ft::pair<int, int>(39,10));
// // 	// test.insert(ft::pair<int, int>(49,10));

// // 	// ft::map<int, int>::iterator it_b =  test.begin();
// // 	// std::cout << "babababkj fhjdhskjf";

// // 	// ft::map<int, int>::iterator it2(it_b);
// // 	// it2++;
// // 	// std::cout  << it2->first << std::endl;
// // 	// std::cout  << it_b->first << std::endl;
// // 	// ft::map<int, int>::iterator it_e =  test.end();

// // 	// ft::map<int, int> test2(it_b, it_e);
// // 	for(ft::map<int, int>::iterator it = test.begin(); it !=  test.end(); it++)
// // 	{
// // 		std::cout << it->first << std::endl;;
// // 	}
// // 	test.clear();
// // }




// {
// 	// ft::map<int, char>::iterator my_it;
// 	// ft::map<int, char>::const_iterator c_it, c_ob(my_it);
// 	// ft::map<int, char>::iterator my_it;
// 	// ft::map<int, char>::const_iterator c_it, c_ob(my_it);

// 	// f:map<int, int> m;
// 	//  m.insert(ft::pair<int, int>(9, 8));
// 	//  m.insert(ft::pair<int, int>(7, 8));
// 	//  m.insert(ft::pair<int, int>(3, 8));
// 	//  m.insert(ft::pair<int, int>(2, 8));
// 	//  m.insert(ft::pair<int, int>(1, 8));t:
// 	// ft::map<int, int>::iterator  it = m.begin();
// 	// ft::map<int, int>::iterator  it2 = --m.end();
// 	// std::cout << it2->first << std::endl;
// 	// std::cout << (--it2)->first << std::endl;
// 	// m.clear();

// 	// for(; it != m.end(); it++)
// 	// 	std::cout << it->first << std::endl;
// 	// //  ft::map<int, int> my, my1;
// 	// //  bool a = m < m1;
// 	// //  bool b = my == my1;
// 	// //  std::cout << std::boolalpha << a << std::endl;
// 	// //  std::cout << std::boolalpha << b << std::endl;

// 	// ft::map<int, int>::iterator it = m.begin();
// 	// (*it).second = 50;
// 	// ft::map<int, int>::iterator it2 = m.begin();
// 	// // // m.clear();
// 	// // it--;
// 	// std::cout << it2->second << std::endl;
// 	// it2++;
// 	// std::cout << it2->first << std::endl;

// 	// ft::map<int, int> a;

// 	// ft::map<int,int> a;
// 	// a.insert(ft::pair<int, int>(3, 710));
// 	// a.insert(ft::pair<int, int>(2, 710));
// 	// a.insert(ft::pair<int, int>(1, 710));

// 	// ft::map<int, int>::iterator it =  a.begin();
// 	// it++;
// 	// it++;
// 	// it++;
// 	// it++;
// 	// it++;


// 	// std::cout << it->first << std::endl;
// 	// std::cout << it->first << std::endl;

// // {
// //             std::map<int, std::string> m;
// //             ft::map<int, std::string> ft_m;
// //             for (size_t i = 0; i < 1e6; ++i)
// //             {
// //                 m.insert(std::make_pair(i, "value"));
// //                 ft_m.insert(ft::make_pair(i, "value"));
// //             }

// //             for (std::map<int, std::string>::iterator it = m.begin(); it != m.end(); ++it)
// //                 ;

// //             for (ft::map<int, std::string>::iterator it = ft_m.begin(); it != ft_m.end(); ++it)
// // 			{
// // 				// bool a = ft_m.begin() != ft_m.end();
// // 				// std::cout << std::boolalpha <<  a << std::endl;
// //                 std::cout << it->first << std::endl;

// // 			}
// // }
// 	// ft::map<int, int>::iterator it  = m.begin();
// 	// ft::map<int, int>::const_iterator it2;
// 	// it2 =  it;

// 	// ft::pair<int, int> r = *m.rbegin();
// 	// //  it++;
// 	//   ft::map<int, int>::const_iterator c_it(it);
// 	//   std::cout <<  it2->first << std::endl;
// 	// }

// // }


// // {
// // 	    // time_t start, end, diff;

// //             std::map<int, std::string> m;
// //             ft::map<int, std::string> ft_m;
// //             for (size_t i = 0; i < 1e6; ++i)
// //             {
// //                 // m.insert(std::make_pair(i, "value"));
// //                 ft_m.insert(ft::make_pair(i, "value"));
// //             }
// // 		// 	ft::map<int,std::string> ft_m;
// // 		// ft_m.insert(ft::pair<int, std::string>(3, "710"));
// // 		// ft_m.insert(ft::pair<int, std::string>(2, "710"));
// // 		// ft_m.insert(ft::pair<int, std::string>(1, "710"));
// //         //     // std::map<int, std::string>::iterator it = --m.end();
// //         //     // for (; it != m.begin(); --it)
// //         //     //     ;
// //             ft::map<int, std::string>::iterator ft_it = --ft_m.end();
// //             // for (; ft_it != ft_m.begin(); --ft_it);
// // 		// std::map<int, int> a;
// // 		// a.insert(std::pair<int, int>(5,5));
// // 		// std::map<int, int>::iterator it = a.begin();
// // 		// it--;
// // 		// std::cout << it->first << std::endl;
// // }

// 	// ft::map<int, int> m;

// 	// m.insert(ft::pair<int, int>(9, 40));
// 	// m.insert(ft::pair<int, int>(1, 40));
// 	// m.insert(ft::pair<int, int>(63, 40));
// 	// m.insert(ft::pair<int, int>(54, 40));
// 	// m.insert(ft::pair<int, int>(6, 40));
// 	// ft::map<int, int>::iterator it = m.begin();
// 	// ft::map<int, int>::iterator op(it);
// 	// std::cout << op->first << std::endl;
// 	// std::cout << "it == > " << &(*it) << std::endl;
// 	// std::cout << "op == > " << &(*op) << std::endl;

// // {
// // 	std::map<int, char> m;
// //     std::map<int, char>::iterator it, it1;

// //     ft::map<int, char> my_m;
// //     ft::map<int, char>::iterator my_it, my_it1, tmp;

// //     for (int i = 0; i < 10; ++i)
// //     {
// //         my_m.insert(ft::make_pair(i, static_cast<char>(i + 97)));
// //         m.insert(std::make_pair(i, static_cast<char>(i + 97)));
// //     }

// //     it = m.begin();
// //     it1 = ++(m.begin());
// //     my_it = my_m.begin();
// //     my_it1 = ++(my_m.begin());
// //     /*----------------------------------*/
// //         ft::map<int, char>::iterator ob(my_it);
// //         EQUAL(&(*my_it) == &(*ob));
// // }


// // {
// 	//    bool cond;
//     // std::map<char, int> first;
//     // ft::map<char, int> m_first;
// 	// int a = 1;
//     // for (size_t i = 97; i < 110; i++)
//     // {
//     //     first[i - 97] = i;
// 	// 	std::cout << " " << a++ << std::endl;
//     //     m_first[i - 97] = i;
// 	// }
// 	// m_first['a'] = 10;
// 	// ft::map<char, int>::iterator it = m_first.begin();
// 	// std::cout << it->second << std::endl;
// 	// for(std::map<char, int>::iterator it = first.begin(); it != first.end(); it++)
// 	// {
// 	// 	std::cout << "| " << it->second << " |" << std::endl;
// 	// }
// 	// std::cout << "-----------------------------------------------" << std::endl;
// 	// for(ft::map<char, int>::iterator it = m_first.begin(); it != m_first.end(); it++)
// 	// {
// 	// 	std::cout << "| " << it->second << " |" << std::endl;
// 	// }

// //     std::map<char, int> copy(first);
// //     ft::map<char, int> m_copy(m_first);
// // 	// std::cout << "begin ==> " << first.begin()->first << " my begin " << m_first.begin()->first << std::endl;
// // 	// std::cout << std::boolalpha << compareMaps(first.begin(), first.end(), m_first.begin(), m_first.end());
// //     // cond = first.size() == m_first.size() && compareMaps(first.begin(), first.end(), m_first.begin(), m_first.end());
// //     // cond = first.size() == m_first.size() && compareMaps(first.begin(), first.end(), m_first.begin(), m_first.end());
// // 	// std::cout << 
// // 	std::cout << std::boolalpha <<  compareMaps(first.begin(), first.end(), m_first.begin(), m_first.end()) << std::endl;
// 	//  std::map<char, int> second(first.begin(), first.end());
//     // ft::map<char, int> m_second(m_first.begin(), m_first.end());

//     // cond = cond && second.size() == m_second.size() && compareMaps(second.begin(), second.end(), m_second.begin(), m_second.end());
//     // std::map<char, int> third(second);
//     // ft::map<char, int> m_third(m_second);
// 	// std::cout << std::boolalpha << cond << std::endl;
// 	// std::cout << "size == " << first.size() << " my size == " <<  m_first.size() << std::endl;
// 	// std::cout << "size == " << second.size() << " my size == " <<  m_second.size() << std::endl;

// 	//  int a = first.size() == m_first.size();
// // 	// std::cout << a  << std::endl;

// }

// // std::map<int, int> test;

// // test[1] = 5;
// // test[1] = 10;
// // std::cout << test.size() << std::endl;
// //  aaa<std::vector> b();



// // bool ret = testMapConstructors();
// // std::cout << std::boolalpha <<  ret << std::endl;
// {
// 	 	// std::map<int, std::string> m1;
//         // std::map<int, std::string> m2;
//         // ft::map<int, std::string> ft_m2;
//         // ft::map<int, std::string> ft_m1;
//         // for (int i = 0; i < 1e4; ++i)
//         // {
//         //     m2.insert(std::make_pair(i, "string2"));
//         //     ft_m2.insert(ft::make_pair(i, "string2"));
//         // }

//         // m1 = m2;
//         // ft_m1 = ft_m2;
//         // m2.begin()->second = "hello";
//         // ft_m2.begin()->second = "hello";
//         // // EQUAL((m1.begin()->second != m2.begin()->second) && (ft_m1.begin()->second != ft_m2.begin()->second));



// }


// {
// 	//  std::map<int, std::string> m1;
//             // for (size_t i = 0; i < 1e6; i++)
//             // {
//             //     m1.insert(std::make_pair(i, "string2"));
//             //     ft_m1.insert(ft::make_pair(i, "string2"));
//             // }
//             // ft::map<int, std::string> ft_m1;
// 			// ft_m1.insert(ft::pair<int, std::string>(9, "test"));
// 			// ft_m1.insert(ft::pair<int, std::string>(12, "test"));
// 			// ft_m1.insert(ft::pair<int, std::string>(13, "test"));
// 			// ft_m1.insert(ft::pair<int, std::string>(14, "test"));
// 			// ft_m1.insert(ft::pair<int, std::string>(15, "test"));
// 			// ft::map<int, std::string>::iterator it = ft_m1.begin();
// 			// ft::map<int, std::string>::iterator it2 = ft_m1.end();
// 			// ft_m1.erase(it, it2);

//     // ft::vector<int>::iterator it = v.begin();
//     // for (it = v.begin(); it != v.end();it++)
//     //      std::cout << *it << ' '; 
// 			// ++it;
// // 

//             // ft_m1.erase(ft_m1.begin(), ft_m1.end());
// }
// // {
// // 	   	std::map<int, std::string> m1;
// //             ft::map<int, std::string> ft_m1;
// // 		for (size_t i = 0; i < 1e6; i++)
// //             {
// //                 m1.insert(std::make_pair(i, "string2"));
// //                 ft_m1.insert(ft::make_pair(i, "string2"));
// //             }

// //             m1.erase(m1.begin(), m1.end());
// //             /*-----------------------------------------------------*/
// //             /*------------------ ft::Maps ---------------------*/
// //             ft_m1.erase(ft_m1.begin(), ft_m1.end());
// }
// // {

// 		std::map<char, int> m;
//         ft::map<char, int> ft_m;
//         std::map<char, int>::iterator it;
//         ft::map<char, int>::iterator ft_it;

//         // insert some values:
//         ft_m['a'] = 10;
//         ft_m['b'] = 20;
//         ft_m['c'] = 30;
//         ft_m['d'] = 40;
//         ft_m['e'] = 50;
//         ft_m['f'] = 60;

//         m['a'] = 10;
//         m['b'] = 20;
//         m['c'] = 30;
//         m['d'] = 40;
//         m['e'] = 50;
//         m['f'] = 60;

//         cond = m.size() == ft_m.size() && compareMaps(m.begin(), m.end(), ft_m.begin(), ft_m.end());

//         it = m.find('b');
//         ft_it = ft_m.find('b');

//         cond = cond && (it->first == ft_it->first) && (it->second == ft_it->second);
//         m.erase(it);       // erasing by iterator
//         ft_m.erase(ft_it); // erasing by iterator

//         cond = cond && compareMaps(m.begin(), m.end(), ft_m.begin(), ft_m.end());

//         int ret = m.erase('c');       // erasing by key
//         int ft_ret = ft_m.erase('c'); // erasing by key

//         cond = cond && ret == ft_ret && compareMaps(m.begin(), m.end(), ft_m.begin(), ft_m.end());

//         it = m.find('e');
//         ft_it = ft_m.find('e');

//         cond = cond && (it->first == ft_it->first) && (it->second == ft_it->second) && m.size() == ft_m.size();

//         m.erase(it, m.end());          // erasing by range
//         ft_m.erase(ft_it, ft_m.end()); // erasing by range

//         cond = cond && m.empty() == ft_m.empty() && compareMaps(m.begin(), m.end(), ft_m.begin(), ft_m.end());

//         /* ---------- Testing some edge cases ---------- */

//         std::map<int, std::string> m2;
//         ft::map<int, std::string> ft_m2;

//         for (size_t i = 0; i < 1e5; i++)
//         {
//             m2.insert(std::make_pair(i, "string1"));
//             ft_m2.insert(ft::make_pair(i, "string1"));
//         }

//         std::map<int, std::string>::reverse_iterator it2 = m2.rbegin();
//         ft::map<int, std::string>::reverse_iterator ft_it2 = ft_m2.rbegin();

//         m2.erase(m2.begin());
//         ft_m2.erase(ft_m2.begin());

//         cond = cond && m2.size() == ft_m2.size() && compareMaps(m2.begin(), m2.end(), ft_m2.begin(), ft_m2.end());

//         m2.erase(it2->first);
//         ft_m2.erase(ft_it2->first);

//         cond = cond && m2.size() == ft_m2.size() && compareMaps(m2.begin(), m2.end(), ft_m2.begin(), ft_m2.end());

// // }
// }


// int main()
// {
//     std::map<int, std::string> m3;
//     ft::map<int, std::string> ft_m3;
//     std::vector<int> vec;
//     std::vector<int> ft_vec;
//     std::random_device randDev;
//     std::mt19937 generator(randDev());
//     std::uniform_int_distribution<int> distr(0, 1e8);

//     for (size_t i = 0; i < 1e6; i++)
//         {
//             m3.insert(std::make_pair(i, "string1"));
//             ft_m3.insert(ft::make_pair(i, "string1"));
//         }
//     for (size_t i = 0; i < 1e6; ++i)
//         {
//             int n = distr(generator);
//             int ret1 = m3.erase(n);
//             int ret2 = ft_m3.erase(n);

//             if (ret1 != ret2)
//                 {
//                     ft_m3.find(n);
//                     break;
//                 }
//         }
//     //ft::map<int, std::string>::iterator first = ft_m3.begin();
//     //ft::map<int, std::string>::iterator last = ft_m3.end();
//     //int count = 0;
//     //for (; first != last; first++)
//     //{
//     //    count++;
//     //    std::cout << "first == " << first->first << "\n";
//     //}
//     //        std::cout << "number of values = " << count << "\n";
//     //exit(1);

//     std::cout << "====================\n";
//     if (!m3.empty())
//         {
//             m3.erase(m3.begin(), m3.end());
//             m3.erase(m3.begin(), m3.end());
//         }
//     std::cout << "====================\n";
//     if (!ft_m3.empty())
//         {
//             ft_m3.erase(ft_m3.begin(), ft_m3.end());
//             ft_m3.erase(ft_m3.begin(), ft_m3.end());
//         }
// }



// int main()
// {
//         bool cond(false);
//         // erasing all the elements in the map;
//         {
//         //    time_t start, end, diff;
//             /*------------------ std::maps ---------------------*/
//             std::map<int, std::string> m1;
//             ft::map<int, std::string> ft_m1;
//             for (size_t i = 0; i < 1e6; i++)
//             {
//                 m1.insert(std::make_pair(i, "string2"));
//                 ft_m1.insert(ft::make_pair(i, "string2"));
//             }

//             // start = get_time();
//             m1.erase(m1.begin(), m1.end());
//             // end = get_time();
//             // diff = end - start;
//             // diff = (diff) ? (diff * TIME_FAC) : TIME_FAC;
//             /*-----------------------------------------------------*/
//             /*------------------ ft::Maps ---------------------*/
//             // ualarm(diff * 1e3, 0);
//             ft_m1.erase(ft_m1.begin(), ft_m1.end());
//           //  ualarm(0, 0);
//             /*----------------------------------------------------*/
//         }
//         std::map<char, int> m;
//         ft::map<char, int> ft_m;
//         std::map<char, int>::iterator it;
//         ft::map<char, int>::iterator ft_it;

//         // insert some values:
//         ft_m['a'] = 10;
//         ft_m['b'] = 20;
//         ft_m['c'] = 30;
//         ft_m['d'] = 40;
//         ft_m['e'] = 50;
//         ft_m['f'] = 60;

//         m['a'] = 10;
//         m['b'] = 20;
//         m['c'] = 30;
//         m['d'] = 40;
//         m['e'] = 50;
//         m['f'] = 60;

//         cond = m.size() == ft_m.size() && compareMaps(m.begin(), m.end(), ft_m.begin(), ft_m.end());

//         it = m.find('b');
//         ft_it = ft_m.find('b');

//         cond = cond && (it->first == ft_it->first) && (it->second == ft_it->second);
//         m.erase(it);       // erasing by iterator
//         ft_m.erase(ft_it); // erasing by iterator

//         cond = cond && compareMaps(m.begin(), m.end(), ft_m.begin(), ft_m.end());

//         int ret = m.erase('c');       // erasing by key
//         int ft_ret = ft_m.erase('c'); // erasing by key

//         cond = cond && ret == ft_ret && compareMaps(m.begin(), m.end(), ft_m.begin(), ft_m.end());

//         it = m.find('e');
//         ft_it = ft_m.find('e');

//         cond = cond && (it->first == ft_it->first) && (it->second == ft_it->second) && m.size() == ft_m.size();
//         std::cout << "test1 ====  > " << std::boolalpha << cond  << std::endl;
//         m.erase(it, m.end());          // erasing by range
//         ft_m.erase(ft_it, ft_m.end()); // erasing by range

//         cond = cond && m.empty() == ft_m.empty() && compareMaps(m.begin(), m.end(), ft_m.begin(), ft_m.end());
//         std::cout << "test2 ====  > " << std::boolalpha << cond  << std::endl;

//         /* ---------- Testing some edge cases ---------- */

//         std::map<int, std::string> m2;
//         ft::map<int, std::string> ft_m2;

//         for (size_t i = 0; i < 1e5; i++)
//         {
//             m2.insert(std::make_pair(i, "string1"));
//             ft_m2.insert(ft::make_pair(i, "string1"));
//         }

//         std::map<int, std::string>::reverse_iterator it2 = m2.rbegin();
//         ft::map<int, std::string>::reverse_iterator ft_it2 = ft_m2.rbegin();

//         m2.erase(m2.begin());
//         ft_m2.erase(ft_m2.begin());

//         cond = cond && m2.size() == ft_m2.size() && compareMaps(m2.begin(), m2.end(), ft_m2.begin(), ft_m2.end());
//         std::cout << "test3 ====  > " << std::boolalpha << cond  << std::endl;
        
//         m2.erase(it2->first);
//         ft_m2.erase(ft_it2->first);

//         cond = cond && m2.size() == ft_m2.size() && compareMaps(m2.begin(), m2.end(), ft_m2.begin(), ft_m2.end());
//         std::cout << "test4 ====  > " << std::boolalpha << cond  << std::endl;

//         std::map<int, std::string> m3;
//         ft::map<int, std::string> ft_m3;
//         std::vector<int> vec;
//         std::vector<int> ft_vec;
//         std::random_device randDev;
//         std::mt19937 generator(randDev());
//         std::uniform_int_distribution<int> distr(0, 1e8);

//         for (size_t i = 0; i < 1e6; i++)
//         {
//             m3.insert(std::make_pair(i, "string1"));
//             ft_m3.insert(ft::make_pair(i, "string1"));
//         }

//         for (size_t i = 0; i < 1e6; ++i)
//         {
//             int n = distr(generator);
//             int ret1 = m3.erase(n);
//             int ret2 = ft_m3.erase(n);

//             if (ret1 != ret2)
//             {
//                 std::cout << "false" << std::endl;
//                 cond = false;
//                 break;
//             }
//         }

//         if (!m3.empty())
//         {
//             m3.erase(m3.begin(), m3.end());
//             m3.erase(m3.begin(), m3.end());
//         }
//         if (!ft_m3.empty())
//         {
//             ft_m3.erase(ft_m3.begin(), ft_m3.end());
//             ft_m3.erase(ft_m3.begin(), ft_m3.end());
//         }
//         cond = cond && (m3.size() == ft_m3.size() && compareMaps(m3.begin(), m3.end(), ft_m3.begin(), ft_m3.end()));
//         EQUAL(cond);
// }



int main()
{
     {
            time_t start, end, diff;

            /* ------------------ a > b ------------------ */
            std::map<int, std::string> m1, m2;
            ft::map<int, std::string> ft_m1, ft_m2;
            for (size_t i = 0; i < 1e6; i++)
            {
                m1.insert(std::make_pair(i, "string2"));
                ft_m1.insert(ft::make_pair(i, "string2"));
            }

          //  start = get_time();
            m1.swap(m2);
           // end = get_time();
          //  diff = end - start;
          //  diff = (diff) ? (diff * TIME_FAC) : TIME_FAC;
            /*-----------------------------------------------------*/
           // ualarm(diff * 1e3, 0);
            ft_m1.swap(ft_m2);
           // ualarm(0, 0);
            /*----------------------------------------------------*/

            /* ------------------ a and b are not empty ------------------ */
            for (size_t i = 0; i < 1e4; i++)
            {
                m2.insert(std::make_pair(i, "string2"));
                ft_m2.insert(ft::make_pair(i, "string2"));
            }

           // start = get_time();
            m1.swap(m2);
         //   end = get_time();
         //   diff = end - start;
        //    diff = (diff) ? (diff * TIME_FAC) : TIME_FAC;
            /*-----------------------------------------------------*/
           // ualarm(diff * 1e3, 0);
           ft_m1.swap(ft_m2);
         //   ualarm(0, 0);
            /*----------------------------------------------------*/

            /* ------------------ a == b ------------------ */
            m1 = m2 = std::map<int, std::string>();
            ft_m1 = ft_m2 = ft::map<int, std::string>();
         //   start = get_time();
            m2.swap(m1);
          //  end = get_time();
          //  diff = end - start;
           // diff = (diff) ? (diff * TIME_FAC) : TIME_FAC;
            /*-----------------------------------------------------*/
            /*------------------ ft::Maps ---------------------*/
         //   ualarm(diff * 1e3, 0);
            ft_m2.swap(ft_m1);
          //  ualarm(0, 0);
            /*----------------------------------------------------*/
        }
        bool cond = false;
        std::map<char, int> foo, bar;
        ft::map<char, int> ft_foo, ft_bar;

        foo['x'] = 100;
        foo['y'] = 200;

        ft_foo['x'] = 100;
        ft_foo['y'] = 200;

        cond = foo.size() == ft_foo.size() && bar.size() == ft_bar.size();

        bar['a'] = 11;
        bar['b'] = 22;
        bar['c'] = 33;

        ft_bar['a'] = 11;
        ft_bar['b'] = 22;
        ft_bar['c'] = 33;

        cond = cond && foo.size() == ft_foo.size() && bar.size() == ft_bar.size() && compareMaps(foo.begin(), foo.end(), ft_foo.begin(), ft_foo.end()) && compareMaps(bar.begin(), bar.end(), ft_bar.begin(), ft_bar.end());

        foo.swap(bar);
        ft_foo.swap(ft_bar);

        cond = cond && foo.size() == ft_foo.size() && bar.size() == ft_bar.size() && compareMaps(foo.begin(), foo.end(), ft_foo.begin(), ft_foo.end()) && compareMaps(bar.begin(), bar.end(), ft_bar.begin(), ft_bar.end());

        std::map<std::string, std::string, std::greater<std::string> > m1, m2;
        ft::map<std::string, std::string, std::greater<std::string> > ft_m1, ft_m2;

        m1["γ"] = "gamma";
        m1["β"] = "beta";
        m1["α"] = "alpha";
        m1["γ"] = "gamma";

        m2["ε"] = "eplsilon";
        m2["δ"] = "delta";
        m2["ε"] = "epsilon";

        ft_m1["γ"] = "gamma";
        ft_m1["β"] = "beta";
        ft_m1["α"] = "alpha";
        ft_m1["γ"] = "gamma";

        ft_m2["ε"] = "eplsilon";
        ft_m2["δ"] = "delta";
        ft_m2["ε"] = "epsilon";

        const std::pair<std::string, std::string> &ref = *(m1.begin());
        const std::map<std::string, std::string, std::greater<std::string> >::iterator iter = std::next(m1.begin());
        const ft::pair<std::string, std::string> &ft_ref = *(ft_m1.begin());
        const ft::map<std::string, std::string, std::greater<std::string> >::iterator ft_iter = std::next(ft_m1.begin());

        // std::cout << "──────── before swap ────────\n"
        //           << "m1: " << m1 << "m2: " << m2 << "ref: " << ref
        //           << "\niter: " << *iter << '\n';

        cond = cond && ref.first == ft_ref.first && ref.second == ft_ref.second && iter->second == ft_iter->second && iter->first == ft_iter->first && m1.size() == ft_m1.size() && m2.size() && ft_m2.size();

        m1.swap(m2);
        ft_m1.swap(ft_m2);

        // _---------------_ << ──────── after swap ──────── >> _---------------_

        cond = cond && ref.first == ft_ref.first && ref.second == ft_ref.second && iter->second == ft_iter->second && iter->first == ft_iter->first && m1.size() == ft_m1.size() && m2.size() && ft_m2.size();

        EQUAL(cond);
}




