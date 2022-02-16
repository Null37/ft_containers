#include <map>
#include <iostream>
#include "avl_tree.hpp"
#include "map_iterator.hpp"
#include "map.hpp"
#include <vector>
#include <math.h>
#include <limits>
#include "../vector/vector.hpp"

#include <iterator>
struct abc
{
	public:
	int k ;
	int b;
	abc(){k = 10;}
	~abc(){}
};
// struct ft::node<int, int> *getbigpp(struct ft::node<int, int> *root)
// {
// 	if (root->right)
// 	{
// 		std::cout << " here   " << std::endl;
// 		root = root->right;
// 		std::cout << "--------------- " << root->key << std::endl;
// 		if (root->left)
// 		{
// 			while(root->left)
// 				root = root->left;
// 			std::cout << "true = ";
// 			return (root);

			
// 		}
// 		else
// 		{
// 			std::cout << "bruh = ";
// 			return (root);
// 		}
// 	}
// 	else
// 	{
// 		std::cout << "first " << std::endl;
// 		root = root->parent;
// 	}
// 	return (root);
// }

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
		// ft::avl_tree<int, int> test1;
		// ft::pair<int, int> a(3,450);
		// ft::pair<int, int> a2(2,300);
		// ft::pair<int, int> a3(1,100);
		// ft::pair<int, int> a4(5,1);
		// test1.insert(a);
		// test1.insert(a2);
		// test1.insert(a3);
		//  test1.insert(a4);
		// std::cout << "key is " << test1.get()->key << " hight  " << test1.get()->hight << std::endl;
		// std::cout << "key is " << test1.get()->left->key << " hight  " << test1.get()->left->hight << std::endl;
		// std::cout << "key is " << test1.get()->right->key << " hight  " << test1.get()->right->hight<< std::endl;
		// std::cout << "key is " << test1.get()->right->right->key << " hight  " << test1.get()->right->right->hight << std::endl;
		// std::cout << "key is " << test1.get()->left->key << " hight  " << test1.get()->left->hight << std::endl;

		//  std::cout << test1->root->key << std::endl;
		// std::cout << test1->right->key << std::endl;
	}
// 	{
// 		std::map<int, int> a;
// 		a.insert(std::pair<int, int>(5,5));
// 		a.insert(std::pair<int, int>(6,5));
// 		a.insert(std::pair<int, int>(9,5));
// 		std::cout << a.size() << std::endl;
// 	}

// {
// 	// test rrrotation

// 	ft::avl_tree<int, int> test1;
// 	ft::pair<int, int> a(3,450);
// 	ft::pair<int, int> a2(5,300);
// 	ft::pair<int, int> a3(6,100);
// 	ft::pair<int, int> a4(4,1);
// 	test1.insert(a);
// 	test1.insert(a2);
// 	test1.insert(a3);
// 	test1.insert(a4);
// 	std::cout << "key is " << test1.get()->key << " hight  " << test1.get()->hight << std::endl;
// 	std::cout << "key is " << test1.get()->right->key << " hight  " << test1.get()->right->hight << std::endl;
// 	std::cout << "key is " << test1.get()->left->key << " hight  " << test1.get()->left->hight << std::endl;
// 	std::cout << "key is " << test1.get()->left->right->key << " hight  " << test1.get()->left->right->hight << std::endl;
// 	//std::cout << "key is " << test1.get()->left->key << " hight  " << test1.get()->left->hight << std::endl;
// }

// {
// 		// test right-left rotation

// 	ft::avl_tree<int, int> test1;
// 	ft::pair<int, int> a(20,450);
// 	ft::pair<int, int> a2(50,300);
// 	ft::pair<int, int> a3(12,100);
// 	ft::pair<int, int> a4(40,1);
// 	ft::pair<int, int> a5(100,155);
// 	ft::pair<int, int> a6(30,155);

// 	test1.insert(a);
// 	test1.insert(a2);
// 	test1.insert(a3);
// 	test1.insert(a4);
// 	test1.insert(a5);
// 	test1.insert(a6);


//  	std::cout << "key is " << test1.get()->key << std::endl;
// 	std::cout << "key is " << test1.get()->right->key << std::endl;
// 	std::cout << "key is " << test1.get()->left->key << std::endl;
// 	std::cout << "key is " << test1.get()->left->right->key <<  std::endl;
// 	std::cout << "key is " << test1.get()->right->right->key << std::endl;
// 	std::cout << "key is " << test1.get()->left->left->key << std::endl;






// }

// {
// 	//test left-right rotation 

// 	ft::avl_tree<int, int> test1;
// 	ft::pair<int, int> a(30,450);
// 	ft::pair<int, int> a2(10,300);
// 	ft::pair<int, int> a3(90,100);
// 	ft::pair<int, int> a4(20,1);
// 	ft::pair<int, int> a5(5,155);
// 	ft::pair<int, int> a6(21,155); // add new to blance

// 	test1.insert(a);
// 	test1.insert(a2);
// 	test1.insert(a3);
// 	test1.insert(a4);
// 	test1.insert(a5);
// 	test1.insert(a6);



// 	std::cout << "root key " << test1.get()->key << std::endl;
// 	std::cout << "right subtree key " << test1.get()->right->key << std::endl;
// 	std::cout << "left subtree key " << test1.get()->left->key << std::endl;

// 	std::cout << "left left key " << test1.get()->left->left->key << std::endl;
// 	std::cout << "right right key " << test1.get()->right->right->key << std::endl;
// 	std::cout << "right left key " << test1.get()->right->left->key << std::endl;

// }

// {
// 	//test erase map
// 	std::map<int, int> test1;
// 	std::pair<int, int> a(3,450);
// 	std::pair<int, int> a2(2,300);
// 	std::pair<int, int> a3(1,100);
// 	 test1.insert(a);
// 	 test1.insert(a2);
// 	 test1.insert(a3);

// 	std::cout << "return erase " << test1.erase(3) << std::endl;
// 	std::map<int, int>::iterator it = test1.begin();
// 	std::cout << "root " << it->first << std::endl;
// }

// {


// 	//tst one node 
// 	// ft::avl_tree<int, int> test1;
// 	// ft::pair<int, int> a(30,450);

// 	// test1.insert(a);
// 	// std::cout << "key of root " << test1.get()->key << std::endl;
// 	// test1.dele(a.first);
// 	// std::cout << "addr of root " << test1.get() << std::endl;

// 	//test  2 childern
// 	// {
// 	// 		ft::avl_tree<int, int> test1;
// 	// 		ft::pair<int, int> a(3,450);
// 	// 		ft::pair<int, int> a2(2,40);
// 	// 		ft::pair<int, int> a3(1,50);

// 	// 		test1.insert(a);
// 	// 		test1.insert(a2);
// 	// 		test1.insert(a3);

// 	// 		std::cout << "key of left " << test1.get()->left->key << std::endl;
// 	// 		test1.dele(a3.first);
// 	// 		std::cout << "addr of left " <<  test1.get()->left << std::endl;
// 	// }





// }


// {
// 	//test more node 

// 	ft::avl_tree<int, int> test1;
// 	struct ft::node<int, int> *root; 
// 	ft::pair<int, int> a(90,450);
// 	ft::pair<int, int> a2(100,300);
// 	ft::pair<int, int> a8(80,300);
// 	ft::pair<int, int> a3(70,100);
// 	ft::pair<int, int> a4(82,400);
// 	ft::pair<int, int> a5(92,1);
// 	ft::pair<int, int> a6(101,155);
// 	ft::pair<int, int> a7(81,155); // add new to blance

// 	test1.insert(a);
// 	test1.insert(a2);
// 	test1.insert(a8);
// 	test1.insert(a3);
// 	test1.insert(a4);
// 	test1.insert(a5);
// 	test1.insert(a6);
// 	test1.insert(a7);

// 	test1.test_plus_plus_1(test1.get()->left);
// 	test1.test_plus_plus_1(test1.get()->left->left);
// 	// std::cout << "root befor= " << test1.get()->key << std::endl;
// 	// std::cout << "addres left right befor= " << test1.get()->left->right << " lol = "<< test1.get()->left->right->parent->key << std::endl;
// 	// test1.dele(90);
// 	// std::cout << "root after= " << test1.get()->key << std::endl;
// 	// std::cout << "addres left right after= " << test1.get()->left->right << std::endl;
// 	// root = test1.get();
// 	// while (root->left)
// 	// {
// 	// 	root = root->left;
// 	// }

// 	// std::cout << "smallest: " << root->key << "\n";

// 	// for(int i = 0; i <= 6; i++)
// 	// {
// 	// 	if(root != NULL)
// 	// 		std::cout << "key == " << root->key << "\n";
// 	// 	root = getbigpp(root);
// 	// }
	
// 	// while (root)
// 	// {
// 	// 	std::cout << "key == " << root->key << "\n";
// 	// 	root = getbigpp(root);
// 	// }
// 	// {
// 	// 	std::map<int, int> a;
// 	// 	a.insert(std::pair<int, int>(75, 7775));
// 	// 	std::map<int, int>::iterator it = a.end();
// 	// 	std::pair<int, int> s=*it;
// 	// 	std::cout << "test = f= " << s.first << std::endl;
// 	// }

// }

// {
// 	// //test iterator

// 	// std::map<int, int> test1;
// 	// test1.insert(std::pair<int, int>(90, 300));
// 	// test1.insert(std::pair<int, int>(80, 5999));
// 	// test1.insert(std::pair<int, int>(70, 9999));
// 	// test1.insert(std::pair<int, int>(71, 9959));
// 	// test1.insert(std::pair<int, int>(60, 8999));




// 	// // std::cout << "map "

// 	// std::map<int, int>::iterator  it1 = test1.begin();
// 	//  std::map<int, int>::iterator  it(it1);
// 	// //  std::cout << "f = " << it->first << " s= "  << it->second << std::endl;
// 	// ft::map<int, int> test_map;
// 	// // ft::map<int, int>::iterator my_it;
// 	// // std::pair<int,int>a = it;
	

// 	// for(; it != test1.end(); it++)
// 	// {
// 	// 	std::cout << "it.first = " << it->first << " it.second=  " << it->second << std::endl;
// 	// }

// }
// {
// 	// test my logic


// 	ft::avl_tree<int, int> test1;
// 	ft::pair<int, int> a(3,450);
// 	ft::pair<int, int> a2(2,300);
// 	ft::pair<int, int> a3(1,100);
// 	// ft::pair<int, int> a4(81,1);
// // 	ft::pair<int, int> a5(70,155);
// // 	// ft::pair<int, int> a6(21,155); // add new to blance

// 	test1.insert(a);
// 	test1.insert(a2);
// 	test1.insert(a3);
// // 	test1.insert(a4);
// // 	test1.insert(a5);


// 	ft::avl_tree<int, int> test2(test1);
	
// }

// {
// 	std::map<int, int> p;

// 	std::map<int, int>::iterator it = p.begin();
// 	it++;
// }

// {
// 	/// copy constructre
// 	ft::avl_tree<int, int> test1;
// 	// struct ft::node<int, int> *root; 
// 	ft::pair<int, int> a(90,450);
// 	ft::pair<int, int> a2(100,300);
// 	ft::pair<int, int> a8(80,300);
// 	ft::pair<int, int> a3(70,100);
// 	ft::pair<int, int> a4(82,400);
// 	ft::pair<int, int> a5(92,1);
// 	ft::pair<int, int> a6(101,155);
// 	ft::pair<int, int> a7(81,155); // add new to blance

// 	test1.insert(a);
// 	test1.insert(a2);
// 	test1.insert(a8);
// 	test1.insert(a3);
// 	test1.insert(a4);
// 	test1.insert(a5);
// 	test1.insert(a6);
// 	test1.insert(a7);

// // 	ft::avl_tree<int, int> test(test1);
// // 	std::cout << "key of root " << test.get()->pt.first << std::endl;
// // 	std::cout << "key of left " << test.get()->left->pt.first << std::endl;
// // 	std::cout << "key of right " << test.get()->right->pt.first << std::endl;
// // 	std::cout << "key of right " << test.get()->right->right->pt.first << std::endl;



// // }


// {
// 	// // test iterator
// 	// std::map<int, int> a;
// 	// a.insert(std::pair<int, int>(90, 900));

// 	// a.insert(std::pair<int, int>(80, 900));

// 	// std::map<int, int >::iterator it =  a.begin();
	
// 	// // b.insert(std::pair<int, int>(90, 900));


// 	// std::map<int, int>::iterator it2  =  a.begin()++;

// 	// // std::cout << std::boolalpha << (it == it2) << "\n";
// 	// std::pair<int, int> lol =  *it;

// 	// a.insert(std::pair<int, int>(100, 155));
// 	// a.insert(std::pair<int, int>(80, 5454));
// 	// a.insert(std::pair<int, int>(101, 885));
// 	// a.insert(std::pair<int, int>(91, 11195));
// 	// a.insert(std::pair<int, int>(70, 775));
// 	// a.insert(std::pair<int, int>(82, 8285));
// 	// a.insert(std::pair<int, int>(81, 8125));

// 	// std::map<int, int>::iterator it = a.begin();
// 	// std::cout << "begin= "  << it->first << std::endl;
// 	// std::cout << "value= "  << it->second << std::endl;

// 	// std::map<int, int> a;
// 	// a.insert();
// 	// std::map<int, int>::iterator it;
// 	// bool dsfn = it  == it2;
// 	// std::map<int, int> a;
// 	// std::cout << it->first << " " << it2->first << std::endl;
// 	// std::cout << std::boolalpha << (it  == it) << std::endl;

// 	// ft::avl_tree<int, int> test1;
// 	// ft::pair<int, int> l(90, 90);
// 	// test1.insert(l);



// 	// std::cout << std::boolalpha << (test1  == test1) << std::endl;
// 	// std::cout << "test = " << it->first  << it->second << std::endl;



// 	{
// 		// ft::avl_tree<int, int> a;
// 		// ft::pair<int, int> p(5,5);
// 		// a.insert(p);

// 	 	// ft::pair<const int, int> it = *a;
// 		// std::cout << "key-> " << a.get()->pt.first;
// 		// std::map<int, int> a;
// 		// a.insert(std::pair<const int, int>(5, 10));
// 		// std::map<int, int>::iterator it_test = a.begin();
// 		// std::map<int, int>::iterator it_test;

// 			// std::pair<int, int> p2(15,5);
// 		// *it_test =  p2;
// 		// *it = p2;
// 	}

// 	// std::map<int, int> test2;




// 	// test2.insert(std::pair<int, int>(9,999));
// 	// test2.insert(std::pair<int, int>(5,6999));

// 	// std::pair<const int, int> a(5,9);
// 	// std::map<int, int>::iterator it = test2.begin();
// 	// std::map<int, int>::iterator it_;
// 	// //std::cout << "it->  " << it->first << " " << it->second << std::endl;
// 	// std::pair<const int, int> y = *it;
// 	// std::cout << "pair 1 " << &y<<"\n";
// 	// std::pair<int, int> r = *it;
// 	// std::cout << "pair 1 " << &r <<"\n";
// 	// std::cout << "pair 1 " << &(*it) <<"\n";
// 	// std::cout << "pair 1 " << &(*it) <<"\n";
// 	// std::cout << "pair 1 " << &(*it) <<"\n";
// 	// std::cout << "pair 1 " << &(*it) <<"\n";
// 	// std::cout << "pair 1 " << &(*it) <<"\n";
// 	// std::cout << "pair 1 " << &(*it) <<"\n";
	
// 	ft::avl_tree<int, int> my_map;
// 	// ft::map_iterator<ft::avl_tree<int, int> > k;

// 	my_map.insert(ft::pair<int, int>(1,99));
// 	my_map.insert(ft::pair<int, int>(2,10));
// 	my_map.insert(ft::pair<int, int>(3,20));
// 	my_map.insert(ft::pair<int, int>(4,30));
// 	my_map.insert(ft::pair<int, int>(5,40));
// 	my_map.insert(ft::pair<int, int>(6,50));
// 	my_map.insert(ft::pair<int, int>(7,60));
// 	my_map.insert(ft::pair<int, int>(8,70));
// 	my_map.insert(ft::pair<int, int>(9,80));


// 	ft::pair<int, int> t_p = *my_map; 
// 	// std::pair<int, int> testtt;
// 	// testtt = *it;
// 	std::cout << "first : " << t_p.first << " second " << t_p.second << "\n";
// 	// (*it).first = 5;
	
// 	// std::cout << testtt.first << " my = " << t_p.first << std::endl;


// 	// std::iterator<std::bidirectional_iterator_tag, int> it;
// 	// std::iterator<std::bidirectional_iterator_tag, int> it_2;
// 	// (*it).second = 1;
// 	// *it = 22;
// 	// *it = *it_;
// 	// *it++;
// 	// std::cout << it->first << " " << it->second;



// }


// {
	// // test operaror

	// {
	// 	std::map<int, int> test;
	// 	test.insert(std::pair<int, int>(90,2));
	// 	test.insert(std::pair<int, int>(100,2));
	// 	test.insert(std::pair<int, int>(80,2));
	// 	test.insert(std::pair<int, int>(101,2));
	// 	test.insert(std::pair<int, int>(70,2));
	// 	test.insert(std::pair<int, int>(85,2));
	// 	test.insert(std::pair<int, int>(95,2));


	// 	std::map<int, int>::iterator it = test.begin();
	// 	it++;
	// 	it++;
	// 	it++;
	// 	std::cout << "org befor ==> " << it->first << std::endl;
	// 	--it;
	// 	std::cout << "org after == >   " <<  it->first << std::endl;
	// 		it--;
	// 	std::cout << "org after2 == >   " <<  it->first << std::endl;
	// 	it--;
	// 	std::cout << "after3 == >   " <<  it->first << std::endl;
		
		

	// }
	//   // test my operator
	// ft::avl_tree<int, int> test;
	// test.insert(ft::pair<int, int>(90,2));
	// test.insert(ft::pair<int, int>(100,2));
	// test.insert(ft::pair<int, int>(80,2));
	// test.insert(ft::pair<int, int>(101,2));
	// test.insert(ft::pair<int, int>(70,2));
	// test.insert(ft::pair<int, int>(85,2));
	// test.insert(ft::pair<int, int>(95,2));


	// test = test.begin();
	// test++;
	// test++;
	// test++;
	// std::cout << "test = " <<  test.get()->pt.first << std::endl;
	// std::cout << "befor == " <<	 << std::endl;;
	// --test;
	// std::cout << "my   after == " << test.get()->pt.first << std::endl;
	// --test;
	// std::cout << "my   after2 == " << test.get()->pt.first << std::endl;
	// --test;
	// std::cout << "my   after3 == " << test.get()->pt.first << std::endl;
	// ++test;
	// std::cout << "after3 == " << test.get()->pt.first << std::endl;
	// ++test;
	// std::cout << "after4 == " << test.get()->pt.first << std::endl;
	// ++test;
	// std::cout << "after6 == " << test.get()->pt.first << std::endl;
	// ++test;
	// std::cout << "after7 == " << test.get()->pt.first << std::endl;
	
	//test ->


{
	// ft::pair<int, int> test9;
	// ft::avl_tree<ft::pair<const int, int> > a;
	// a.insert(ft::pair<int, int>(9,90));
	// ft::map_iterator<ft::avl_tree<ft::pair<const int, int> > > test = a.begin();
	// std::map<int, int> 	x13;
	// std::map<int, int>::iterator it =  x13.begin();
	
	// std::pair<const int, int> aaaa(5, 5);
		//test->first;
	// ft::value_type_test<ft::pair<int, int> t_t;
	// std::cout << test->first << std::endl;
	// it->swap(aaaa);
	


}

// {
// 	//test operator
// 	// ft::map<int, int> test1;
// 	// ft::map<int, int>::iterator it = test1.begin();
	
// 	std::map<long, int> m;
// 	ft::map<long, int> test1;

// 	// // std::cout << "size ==> " << m.size() << std::endl;
// 	// // std::cout << std::boolalpha << m.empty() << std::endl;
// 	// std::cout << m.max_size() << std::endl;
// 	// // size_t a = std::numeric_limits<int>::max();
// 	// // size_t b = std::numeric_limits<int>::max();
// 	// // unsigned long  c = a * b;
// 	// // size_t d = pow(2,64);
// 	// // std::allocator<std::pair<const int, int> > alloc;
// 	// // std::cout << alloc.max_size() << std::endl;
// 	// std::cout << test1.max_size() << std::endl;
// 	// // std::cout << std::numeric_limits<int>::max() << std::endl;
// 	// // std::cout << std::numeric_limits<int>::max() << std::endl;
// 	// // std::map<int, int>::iterator it = m.begin();

// 	// ft::vector<int> a(abc, abc, std::allocator<int>(), abc);


// }

// {
// 	// test operator
// 	std::map<int, int> a;
// 	a.insert(std::pair<int, int>(5, 90000));
// 	// a.insert(std::pair<int, int>(5, 8888));

// 	std::cout << a.size() << std::endl;
// 	a[99] = 7;
// 	std::map<int, int>::iterator  it =  a.begin();
// 	it++;
// 	std::cout <<  it->second << std::endl;
// 	std::cout << a.size() << std::endl;

// }
	
// 	{
// 		// ft::avl_tree<ft::pair<int, int> > test1;
// 		// test1.insert(ft::pair<int, int>(9, 99990));
// 		// test1.insert(ft::pair<int, int>(10, 90));
// 		// test1.insert(ft::pair<int, int>(7, 90));
// 		// try
// 		// {
// 		// 		test1.search(9, test1.get()) = 66;
// 		// 		std::cout << test1.get()->pt.second << std::endl;
// 		// }
// 		// catch(...)
// 		// {
// 		// 	std::cerr << "lol" << '\n';
// 		// }
// 		// ft::map<int, int> a;
// 		// a.insert(ft::pair<int, int>(9, 9996));
// 		// a.insert(ft::pair<int, int>(10, 899010));
// 		// a.insert(ft::pair<int, int>(7, 87777));
// 		// a[999] = 5;



// 	}
// }

// test insert


// {
// 	std::map<int, int> test;


// 	std::pair<std::map<int, int>::iterator, bool> ret = test.insert(std::pair<int, int>(9, 60));
// 	std::pair<std::map<int, int>::iterator, bool> ret2 = test.insert(std::pair<int, int>(6, 60));

// 	std::cout <<  ret.first->first << std::endl;
// 	std::cout << ret2.first->first << std::endl;



// }


{
	// ft::map<int, int> test1;
	// test1.insert(ft::pair<int, int>(6, 90));
	// test1.insert(ft::pair<int, int>(9, 90));
	// test1.insert(ft::pair<int, int>(19, 90));

	// ft::map<int, int>::iterator it = test1.find(9);
	// std::cout << it->first << std::endl;

}

{
	std::map<int, int> test1;
	test1.insert(std::pair<int, int>(6, 90));
	test1.insert(std::pair<int, int>(9, 90));
	test1.insert(std::pair<int, int>(19, 90));

	std::pair<std::map<int, int>::iterator, bool>  it = test1.insert(std::pair<int, int>(9, 80));
	std::cout << it.first->first << std::endl;
	std::cout << std::boolalpha << it.second << std::endl;

}


}