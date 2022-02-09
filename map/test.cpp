#include <map>
#include <iostream>
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
// 	ft::pair<int, int> a(90,450);
// 	ft::pair<int, int> a2(100,300);
// 	ft::pair<int, int> a3(80,100);
// 	ft::pair<int, int> a4(81,1);
// 	ft::pair<int, int> a5(70,155);
// 	// ft::pair<int, int> a6(21,155); // add new to blance

// 	test1.insert(a);
// 	test1.insert(a2);
// 	test1.insert(a3);
// 	test1.insert(a4);
// 	test1.insert(a5);
// 	// test1.insert(a6);


// 	std::cout << "root befor= " << test1.get()->key << std::endl;
// 	std::cout << "addres left right befor= " << test1.get()->left->right << std::endl;
// 	test1.dele(90);
// 	std::cout << "root after= " << test1.get()->key << std::endl;
// 	std::cout << "addres left right after= " << test1.get()->left->right << std::endl;

// }

{
	//test iterator

	std::map<int, int> test1;
	test1.insert(std::pair<int, int>(3, 300));
	test1.insert(std::pair<int, int>(2, 5999));
	test1.insert(std::pair<int, int>(1, 9999));


	// std::cout << "map "

	std::map<int, int>::iterator  it = test1.begin();
	it->
	// std::pair<int,int>a = it;
	

	// for(std::map<int, int>::iterator it = test1.begin(); it != test1.end(); it++)
	// {
	// 	std::cout << "it.first = " << it->first << " it.second=  " << it->second << std::endl;
	// }

}

}