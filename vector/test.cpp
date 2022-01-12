// resizing vector
#include <ios>
#include <iostream>
#include <iterator>
#include <vector>
#include "vector.hpp"
#define max_s 42949672999599

int main ()
{
  // try
  // {
  //   std::vector<int> test(5);
  //   std::cout << test.max_size() << std::endl;
  //   test.reserve(429496729995999);
    
  //   std::cout << "vector org size ==> " << test.size() << " " << "vector org capasity ==> " << test.capacity() << std::endl;
  // }
  // catch(const std::exception& e)
  // {
  //   std::cerr << e.what() << '\n';
  // }

  // try
  // {
  //   ft::vector<int> test1(5);
  //   std::cout << test1.max_size() << std::endl;
  //   test1.reserve(429496729995999);
  //   std::cout << "my size == >        " << test1.size() << " " << "my capacity ==>        " << test1.capacity() << std::endl;
  // }
  // catch(const std::exception& e)
  // {
  //   std::cerr << e.what() << '\n';
  // }
  

  // try
  // {
  //   std::vector<int> test(5, 9);
  //   std::cout << test.at(-1) << std::endl;
  // }
  // catch(const std::out_of_range& e)
  // {
  //   std::cerr << e.what() << '\n';
  // }
  // std::cout << test[-1] << std::endl;


  
    // ft::vector<int> test(5,9);
    // // test.push_back(50);
    // // test.push_back(90);
    // // test.push_back(80);
    // std::cout << test.back() << std::endl;
  
                    // test if is empty
  // {
  //   ft::vector<int> test;
  //   test.assign(49, 80);
  //   std::cout << test.front() << std::endl;
  //   std::cout << "my size ==>         " << test.size() << " " << "my  capasity ==>        " << test.capacity() << std::endl;
  // }
  // {
  //   std::vector<int> test;
  //   test.assign(49, 80);
  //   std::cout << test.front() << std::endl;
  //   std::cout << "vector org size ==> " << test.size() << " " << "vector org capasity ==> " << test.capacity() << std::endl;
  // }

                      //test 2 if not empty and size < n
  //  {
  //   ft::vector<int> test(9, 90);
  //   test.assign(90, 80);
  //   std::cout << test.front() << std::endl;
  //   std::cout << "my size ==>         " << test.size() << " " << "my  capasity ==>        " << test.capacity() << std::endl;
  // }
  // {
  //   std::vector<int> test(9, 90);
  //   test.assign(90, 80);
  //   std::cout << test.front() << std::endl;
  //   std::cout << "vector org size ==> " << test.size() << " " << "vector org capasity ==> " << test.capacity() << std::endl;
  // }

                       //test 2 if not empty and size > n
  //  {
  //   ft::vector<int> test(9, 90);
  //   test.assign(4, 80);
  //   std::cout << test.front() << " " << test[2] << std::endl;
  //   std::cout << "my size ==>         " << test.size() << " " << "my  capasity ==>        " << test.capacity() << std::endl;
  // }
  // {
  //   std::vector<int> test(9, 90);
  //   test.assign(4, 80);
  //   std::cout << test.front() << " " << test[2] << std::endl;
  //   std::cout << "vector org size ==> " << test.size() << " " << "vector org capasity ==> " << test.capacity() << std::endl;
  // }


                      //test push back
  // {
  //   std::vector<int> test;
  //   test.push_back(6);
  //   std::cout << "vector org size ==> " << test.size() << " " << "vector org capasity ==> " << test.capacity() << std::endl;
  //   std::cout << "elm == > " << test[test.size() - 1] << std::endl;
  // }
  // {
  //   ft::vector<int> test;
  //   test.push_back(6);
  //   std::cout << "my size ==>         " << test.size() << " " << "my  capasity ==>        " << test.capacity() << std::endl;
  //   std::cout << "elm == > " << test[test.size() - 1] << std::endl;
  // }
            // test pop
  // {
  //   std::vector<int> test;
  //   test.pop_back();
  //   std::cout << "vector org size ==> " << test.size() << " " << "vector org capasity ==> " << test.capacity() << std::endl;
  //   std::cout << "elm == > " << test[4] << std::endl;
  // }
  // {
  //   std::vector<int> test;
  //   test.pop_back();
  //   std::cout << "my size ==>         " << test.size() << " " << "my  capasity ==>        " << test.capacity() << std::endl;
  //   std::cout << "elm == > " << test[4] << std::endl;
  // }


    //test insert sng(1)
  
    // {
    //   std::vector<int> test(5, 90);
    //   std::vector<int>::iterator it = test.begin() + 2;
    //   std::cout << "pos iterator org " << *it << std::endl;
    //   std::vector<int>::iterator pos = test.insert(it, 5500);
    //   std::cout << "check return insert org vector ==> " << *pos << std::endl;
    //   std::cout << "org vector ==> " << test[0] << std::endl;
    //   std::cout << "vector org size ==> " << test.size() << " " << "vector org capasity ==> " << test.capacity() << std::endl;
    //   //show element
    //   for(it = test.begin(); it != test.end(); it++)
    //   {
    //     std::cout << *it << std::endl;
    //   }
    // }
    // {
    //   ft::vector<int> test11(5, 90);
    //   ft::vector<int>::iterator it = test11.begin() + 2;
    //   std::cout << "pos iterator my  " << *it << std::endl;
    //   ft::vector<int>::iterator pos = test11.insert(it, 5500);
    //   std::cout << "check return insert my vector ==> " << *pos << std::endl;
    //   std::cout << "my vector ==> " << test11[0] << std::endl;
    //   std::cout << "vector my size ==> " << test11.size() << " " << "vector my capasity ==> " << test11.capacity() << std::endl;
    //   //show element
    //   for(it = test11.begin(); it != test11.end(); it++)
    //   {
    //     std::cout << *it << std::endl;
    //   }
    // }

              //test test fill(2)
            
    
    // {
    //   std::vector<int> test(10, 9000);
    //   std::vector<int>::iterator it = test.begin() + 2;
    //   std::cout << "pos iterator org " << *it << std::endl;
    //   test.insert(it, 3 ,  5500);
    //   std::cout << "org vector ==> " << test[0] << std::endl;
    //   std::cout << "vector org size ==> " << test.size() << " " << "vector org capasity ==> " << test.capacity() << std::endl;
    //   //show element
    //   for(it = test.begin(); it != test.end(); it++)
    //   {
    //     std::cout << *it << std::endl;
    //   }
    // }
    // {
    //   ft::vector<int> test11(10, 9000);
    //   ft::vector<int>::iterator it = test11.begin() + 2;
    //   std::cout << "pos iterator my  " << *it << std::endl;
    //   test11.insert(it, 3, 5500);
    //   std::cout << "my vector ==> " << test11[0] << std::endl;
    //   std::cout << "vector my size ==> " << test11.size() << " " << "vector my capasity ==> " << test11.capacity() << std::endl;
    //   //show element
    //   for(it = test11.begin(); it != test11.end(); it++)
    //   {
    //     std::cout << *it << std::endl;
    //   }
    // }

        //test insert range(3)
      // std::vector<int> big(30, 3050);
      // std::vector<int>::iterator first =  big.begin();
      // std::vector<int>::iterator last =  big.end();

    {
      // std::vector<int> test(20, 9000);
      // std::vector<int>::iterator it = test.begin() + 2;
      // std::cout << "pos iterator org " << *it << std::endl;
      // test.insert(it, first , last);
      // std::cout << "org vector ==> " << test[0] << std::endl;
      // std::cout << "vector org size ==> " << test.size() << " " << "vector org capasity ==> " << test.capacity() << std::endl;
      // //show element
      // for(it = test.begin(); it != test.end(); it++)
      // {
      //   std::cout << *it << std::endl;
      // }
    }
    {
      // ft::vector<int> test11(20, 9000);
      // ft::vector<int>::iterator it = test11.begin() + 2;
      // std::cout << "pos iterator my  " << *it << std::endl;
      // test11.insert(it, first, last);
      // std::cout << "my vector ==> " << test11[0] << std::endl;
      // std::cout << "vector my size ==> " << test11.size() << " " << "vector my capasity ==> " << test11.capacity() << std::endl;
      // //show element
      // for(it = test11.begin(); it != test11.end(); it++)
      // {
      //   std::cout << *it << std::endl;
      // }
    }


              // test erase  // test return
//   std::cout << "---------------------------------------------------------------------------------------" << std::endl;

//   {
//     std::vector<int> a;
//     a.push_back(5);
//  // std::cout << " BEFOR size org ==>  " << a.size() << "    " << " BEFOR capasity ==> " << a.capacity() << std::endl;
//     a.push_back(9);
//  // std::cout << " BEFOR size org ==>  " << a.size() << "    " << " BEFOR capasity ==> " << a.capacity() << std::endl;
//     a.push_back(8);
//     a.push_back(1);
//  // std::cout << " BEFOR size org ==>  " << a.size() << "    " << " BEFOR capasity ==> " << a.capacity() << std::endl;

//     a.push_back(7);
//     // a.push_back(10);
//     // a.push_back(90);
//     // a.reserve(a.size() + 1);
//     // a.reserve(5);
//     std::cout << " BEFOR size org ==>  " << a.size() << "    " << " BEFOR capasity ==> " << a.capacity() << std::endl;
//     std::vector<int>::iterator it = a.begin();
//     std::vector<int>::iterator  rt =   a.erase(it + 2  , a.end()-2);
//     std::cout << "test return ==> " <<  *rt  << std::endl; 
//     std::cout << " AFTER size org ==>  " << a.size() << "    " << " AFTER capasity ==> " << a.capacity() << std::endl;
//     for (it = a.begin(); it != a.end(); it++)
//     {
//       std::cout << " element==> " << *it << std::endl;
//     }
//      std::cout << "test return ==> " <<  *rt  << std::endl; 
//   }
//   std::cout << "---------------------------------------------------------------------------------------" << std::endl;
//    {
//     ft::vector<int> a;
//     a.push_back(5);
//    // std::cout << " my BEFOR size org ==>  " << a.size() << "    " << " BEFOR capasity ==> " << a.capacity() << std::endl;
//    a.push_back(9);
//    //std::cout << " my BEFOR size org ==>  " << a.size() << "    " << " BEFOR capasity ==> " << a.capacity() << std::endl;
//    a.push_back(8);
//     a.push_back(1);
//    //std::cout << " my BEFOR size org ==>  " << a.size() << "    " << " BEFOR capasity ==> " << a.capacity() << std::endl;
//     a.push_back(7);
//     // a.push_back(10);
//     // a.push_back(90);
//     // a.reserve(a.size() + 1);
//     // a.reserve(5);
//     std::cout << " my v BEFOR size  ==>  " << a.size() << "    " << " BEFOR capasity ==> " << a.capacity() << std::endl;
//     //std::cout << " BEFOR size my v ==>  " << a.size() << "    " << " BEFOR capasity my v ==> " << a.capacity() << std::endl;
//     ft::vector<int>::iterator it =   a.begin();
//     ft::vector<int>::iterator  rt =   a.erase(it  + 2, a.end()-2);
//     std::cout << "test return ==> " <<  *rt  << std::endl; 
//     std::cout << " AFTER size my v  ==>  " << a.size() << "    " << " AFTER capasity my v==> " << a.capacity() << std::endl;
//     for (it = a.begin(); it != a.end(); it++)
//     {
//       std::cout << "element my v ==> " << *it << std::endl;
//     }
//      std::cout << "test return ==> " <<  *rt  << std::endl; 
//   }


    // test swap

  // {
  //     std::vector<int> test2(20, 50);
  //     std::vector<int> test(5, 7);
  //     test.push_back(4);
  //     test.push_back(10);
  //     test.swap(test2);
  //     std::cout << "size ==> " << test.size() << " capacity==> "  << test.capacity() << std::endl;
  //     std::vector<int>::iterator it;
  //     for (it = test.begin(); it != test.end(); it++)
  //     {
  //       std::cout << "test element ===> " <<  *it << std::endl;
  //     }
  //     std::cout << "size ==> " << test2.size() << " capacity==> "  << test2.capacity() << std::endl;
  //     std::vector<int>::iterator it2;
  //     for (it2 = test2.begin(); it2 != test2.end(); it2++)
  //     {
  //       std::cout << "test element ===> " <<  *it2 << std::endl;
  //     }
  // }
  //  {
  //     ft::vector<int> test2(20, 50);
  //     ft::vector<int> test(5, 7);
  //     test.push_back(4);
  //     test.push_back(10);
  //     test.swap(test2);
  //     std::cout << "size ==> " << test.size() << " capacity==> "  << test.capacity() << std::endl;
  //     ft::vector<int>::iterator it;
  //     for (it = test.begin(); it != test.end(); it++)
  //     {
  //       std::cout << "test element ===> " <<  *it << std::endl;
  //     }
  //     std::cout << "size ==> " << test2.size() << " capacity==> "  << test2.capacity() << std::endl;
  //     ft::vector<int>::iterator it2;
  //     for (it2 = test2.begin(); it2 != test2.end(); it2++)
  //     {
  //       std::cout << "test element ===> " <<  *it2 << std::endl;
  //     }
  // }




    //clear 
  
  // {
  //   std::vector<int> test;
  //   test.push_back(8);
  //   test.push_back(9);
  //   test.push_back(11);
  //   test.push_back(150);
  //   test.push_back(400);
  //   test.push_back(500);
  //   test.clear();
  //   std::cout << "org size ==> " << test.size() << " org capacity==> "  << test.capacity() << std::endl;

  //   std::vector<int>::iterator it;
  //   for (it = test.begin(); it != test.end(); it++)
  //   {
  //    std::cout << "test element ===> " <<  *it << std::endl;
  //   }

  // }
  // {
  //   ft::vector<int> test;
  //   test.push_back(8);
  //   test.push_back(9);
  //   test.push_back(11);
  //   test.push_back(150);
  //   test.push_back(400);
  //   test.push_back(500);
  //   test.clear();
  //   std::cout << "my size ==>  " << test.size() << " my capacity==>  "  << test.capacity() << std::endl;

  //   ft::vector<int>::iterator it;
  //   for (it = test.begin(); it != test.end(); it++)
  //   {
  //    std::cout << "test element ===> " <<  *it << std::endl;
  //   }


          //test allocator
    
    // {
    //   std::vector<int> a(5);
    //   a
    // }

    // test contrators and destractur 
    // {
    //   std::vector<int> test(5,500);
    //   std::cout << "org vector1 size: " << test.size() << " org vrctor1 capacity: " << test.capacity() << std::endl;
    //   ft::vector<int> test3(test.begin(), test.end());
    //   std::cout << "my  vector2 size: " << test3.size() << "  my vrctor2 capacity: " << test3.capacity() << std::endl;
    // }
    //  {
    //   ft::vector<int> test(5,500);
    //   std::cout << "org vector1 size: " << test.size() << " org vrctor1 capacity: " << test.capacity() << std::endl;
    //   ft::vector<int> test3(test);
    //   std::cout << "my  vector2 size: " << test3.size() << "  my vrctor2 capacity: " << test3.capacity() << std::endl;
    // }
    //test relational operators
    {
      // std::distance(_InputIterator __first, _InputIterator __last)
    }
      // {
      //    std::vector<int> test(5);
      //    std::vector<int>::reverse_iterator it = test.rbegin();
      //    std::vector<int>::reverse_iterator it2 = test.rend();
      //    int l = it < it2;
      //    std::cout << "dyalom: " << l << std::endl;

      // }
      // {
      //    ft::vector<int> test(5);
      //    ft::vector<int>::reverse_iterator it = test.rbegin();
      //    ft::vector<int>::reverse_iterator it2 = test.rend();
      //    int l = it < it2;
      //    std::cout << "dyali: " << l << std::endl;
      // }
      // test copy construct

     {
    //     std::vector<int> test(5,10);
    //     std::vector<int> test1(test);
    //     std::cout << "---org normal copy --- " << "vector org size: " << test1.size() << " test capacity: " << test1.capacity() << std::endl;
    //     std::vector<int> test3;
    //     std::vector<int> test4(test3);
    //     std::cout << "---org empty  copy --- " << "vector org size: " << test4.size() << " test capacity: " << test4.capacity() << std::endl;
    //     std::vector<int> test5;
    //     test5.push_back(50);
    //     std::vector<int> test6(test5);
    //     std::cout << "---org push   copy --- " << "vector org size: " << test6.size() << " test capacity: " << test6.capacity() << std::endl;
        // std::vector<int> test7;
        // std::vector<int> test8(80, 90);
        // test8 = test7;
        // std::cout << "---org ==  copy --- " << "vector org size: " << test8.size() << " test capacity: " << test8.capacity() << std::endl;
      }
      {
        // ft::vector<int> test(5,10);
        // ft::vector<int> test1(test);
        // std::cout << "---my normal  copy --- " << "vector org size: " << test1.size() << " test capacity: " << test1.capacity() << std::endl;
        // ft::vector<int> test3;
        // ft::vector<int> test4(test3);
        // std::cout << "---my empty   copy --- " << "vector org size: " << test4.size() << " test capacity: " << test4.capacity() << std::endl;
        // ft::vector<char> v1(1e7, 'a');
        // ft::vector<char> copy_v(v1);
        // ft::vector<int> test7;
        // ft::vector<int> test8(80, 90);
        // test8 = test7;
        // std::cout << "---my ==   copy --- " << "vector org size: " << test8.size() << " test capacity: " << test8.capacity() << std::endl;
        // std::vector<std::string> v1(10, "string2");
        // v1.resize(1e6);
        // std::cout << "test1 org --- " << "vector org size: " << v1.size() << " test capacity: " << v1.capacity() << std::endl;
      // }
      }
    // {
    //         std::vector<std::string> v1(10, "string2");
    //         v1.resize(1e6);
    //         std::cout << "test1 org --- " << "vector org size: " << v1.size() << " test capacity: " << v1.capacity() << std::endl;

    //         /*------------------ ft::vectors ---------------------*/
    //         ft::vector<std::string> ft_v1(10, "string2");
    //         ft_v1.resize(1e6);
    //         std::cout << "test1 my --- " << "vector org size: " << ft_v1.size() << " test capacity: " << ft_v1.capacity() << std::endl;
    //         /*----------------------------------------------------*/
    //         /*
    //          *	test with n lesser than capacity and greater than size
    //          */
    //         /*------------------ std::vectors ---------------------*/

    //         v1.resize(20);
    //         std::cout << "test2 org --- " << "vector org size: " << v1.size() << " test capacity: " << v1.capacity() << std::endl;

    //         v1.resize(1e5);
    //         std::cout << "test2 my --- " << "vector org size: " << ft_v1.size() << " test capacity: " << ft_v1.capacity() << std::endl;

    //         /*------------------ ft::vectors ---------------------*/
    //         ft_v1.resize(20);
    //         std::cout << "test3 org --- " << "vector org size: " << v1.size() << " test capacity: " << v1.capacity() << std::endl;

    //         ft_v1.resize(1e5);
    //         std::cout << "test3 my --- " << "vector org size: " << ft_v1.size() << " test capacity: " << ft_v1.capacity() << std::endl;
    // }
            /*----------------------------------------------------*/
            /*
             * test with n lesser than capacity and lesser an size
             */
            /*------------------ std::vectors ---------------------*/
            // v1.resize(100);
            // std::cout << "test4 org --- " << "vector org size: " << v1.size() << " test capacity: " << v1.capacity() << std::endl;

            // v1.resize(50);
            // end = get_time();
            // diff = end - start;
            // diff = (diff) ? (diff * TIME_FAC) : TIME_FAC;
            // /*------------------ ft::vectors ---------------------*/
            // ft_v1.resize(100);
            // ualarm(diff * 1e3, 0);
            // ft_v1.resize(50);
            // ualarm(0, 0);
    // }
    // {

    // }
    // {
    //     std::vector<std::string> v1(10, "string2");
    //     std::vector<int> const v2(10, 9);
    //     /*------------------ std::vectors ---------------------*/
    //     ft::vector<std::string> ft_v1(10, "string2");
    //     ft::vector<int> const ft_v2(10, 9);

    //     v1.back() = "LEET";
    //     std::cout << "org ==> " << v1.back() << "  my  " << ft_v1.back() << std::endl;
    //     ft_v1.back() = "LEET";
    //     std::cout << "my  ==> " << ft_v1.back() << std::endl;
    //      std::cout << "check  v2 "  << v2.back()  <<  " test " << ft_v2.back()<< std::endl;

    // }

    //test assign

// {
//             /*------------------ std::vectors ---------------------*/
//  std::vector<std::string> v1(1e6, "string2");
//   v1.assign(1e6 + 1, "assign");
//   std::cout << "org vector size " << v1.size() << " capacity " << v1.capacity() << std::endl; 
//             /*------------------ ft::vectors ---------------------*/
//   ft::vector<std::string> ft_v1(1e6, "string2");
//   ft_v1.assign(1e6 + 1, "assign");
//   std::cout << "my vector size  " << ft_v1.size() << " capacity " << ft_v1.capacity() << std::endl; 

// }

// {
//     std::vector<int> test1(200, 150);
//     std::vector<int> test2(1, 100);
//     std::vector<int>::iterator it = test2.begin();
//     std::vector<int>::iterator it2 = test2.end();
//     std::cout << "test distance ==>  " << std::distance(it, it2-1) << std::endl;
//     test1.assign(it, it2-1);
//     std::vector<int>::iterator it3 = test1.begin();
//     std::vector<int>::iterator it4 = test1.end();
//     std::cout << "org vector size " << test1.size() << " capacity " << test1.capacity() << std::endl; 
//     for (; it3 != it4; it3++) {
//       std::cout << *it3 << std::endl;
//     }
//     std::cout << " l ==> " << test1[1] << std::endl;
// }

//   {
//     ft::vector<int> test1(200, 150);
//     ft::vector<int> test2(1, 100);
//     ft::vector<int>::iterator it = test2.begin();
//     ft::vector<int>::iterator it2 = test2.end();
//     std::cout << "test distance ==>  " << std::distance(it, it2-1) << std::endl;
//     test1.assign(it, it2-1);
//     ft::vector<int>::iterator it3 = test1.begin();
//     ft::vector<int>::iterator it4 = test1.end();
//     std::cout << "my vector size " << test1.size() << " capacity " << test1.capacity() << std::endl; 
//     for (; it3 != it4; it3++) {
//       std::cout << *it3 << std::endl; 
//     }
//   std::cout << " l ==> " << test1[1] << std::endl;
//   }

// test push back
//reseve 

// {
//   std::vector<int> test1(50);
//   std::cout << "org vector size " << test1.size() << " capacity " << test1.capacity() << std::endl;
//   test1.reserve(50);
//   std::cout << "org vector size " << test1.size() << " capacity " << test1.capacity() << std::endl;


// }


//  {
//     std::vector<std::string> v1(1e6, "string2");
//     v1.reserve(1e6 + 1);
//     v1.insert(v1.begin() + 1e5, "string1");
//    std::cout << "org vector size " << v1.size() << " capacity " << v1.capacity() << " destance "  << std::distance(v1.begin(), v1.begin() + 1e5)<< std::endl;

//                 /*------------------ ft::vectors ---------------------*/
//     ft::vector<std::string> ft_v1(1e6, "string2");
//     ft_v1.reserve(1e6 + 1);
//     ft_v1.insert(ft_v1.begin() + 1e5, "string1");
//    std::cout << "my  vector size " << ft_v1.size() << " capacity " << ft_v1.capacity() << std::endl;

// }
   {
     
   std::string str, ft_str;
        /*
         * var to store the size and the capacity
         */
        ft::vector<std::string>::size_type s, ft_s;
        ft::vector<std::string>::size_type c, ft_c;
        ft::vector<std::string>::iterator ft_it;
        std::vector<std::string>::iterator it;
        /*
         * bool to store the comparison
         */
        bool cond;

        /*------------------------------- test 1: empty vector ----------------------------------------*/
        // insert at the begin
        {
            std::vector<std::string> v;
            ft::vector<std::string> ft_v;
            it = v.insert(v.begin(), "hello");
           //std::cout << "org  vector size " << v.size() << " capacity " << v.capacity() << std::endl;

            ft_it = ft_v.insert(ft_v.begin(), "hello");
            ft_it->length();

        //   std::cout << "my  vector size " << ft_v.size() << " capacity " << ft_v.capacity() << std::endl;
            s = v.size();
            ft_s = ft_v.size();
            c = v.capacity();
            ft_c = ft_v.capacity();
            for (size_t i = 0; i < v.size(); ++i)
                str += v[i];
            for (size_t i = 0; i < ft_v.size(); ++i)
                ft_str += ft_v[i];
            cond = ((str == ft_str) && (s == ft_s) && (c == ft_c) && (*ft_it == *it));
            std::cout << std::boolalpha;
            std::cout << "bool " << cond << std::endl;
            }
             {
            std::vector<std::string> v;
            ft::vector<std::string> ft_v;

            it = v.insert(v.end(), "hello");
            ft_it = ft_v.insert(ft_v.end(), "hello");
            ft_it->length();

            str.clear();
            ft_str.clear();

            s = v.size();
            ft_s = ft_v.size();
            c = v.capacity();
            ft_c = ft_v.capacity();
            for (size_t i = 0; i < v.size(); ++i)
                str += v[i];
            for (size_t i = 0; i < ft_v.size(); ++i)
                ft_str += ft_v[i];
            cond = (cond && (str == ft_str) && (s == ft_s) && (c == ft_c) && (*it == *ft_it));
            std::cout << "bool " << cond << std::endl;
        }
         std::vector<std::string> v(20, "string");
            ft::vector<std::string> ft_v(20, "string");
            ft::vector<std::string>::iterator valid_it;

            v.reserve(30);
            ft_v.reserve(30);
            valid_it = ft_v.begin();
            it = v.insert(v.begin() + 10, "hello");
            std::cout << "org  vector size " << v.size() << " capacity " << v.capacity() << " ret "  << *it << std::endl;
            ft_it = ft_v.insert(ft_v.begin() + 10, "hello");
            std::cout << "my  vector size " << ft_v.size() << " capacity " << ft_v.capacity() << " ret "  << *ft_it << std::endl;

            ft_it->length();

            str.clear();
            ft_str.clear();
            s = v.size();
            ft_s = ft_v.size();
            c = v.capacity();
            ft_c = ft_v.capacity();
            for (size_t i = 0; i < v.size(); ++i)
                str += v[i];
            for (size_t i = 0; i < ft_v.size(); ++i)
                ft_str += ft_v[i];
            cond = (cond && (str == ft_str) && (s == ft_s) && (c == ft_c) && (*it == *ft_it) && (&(*valid_it) == &(*ft_v.begin())));
            std::cout << "bool " <<  cond << std::endl;
            std::cout << " test " << &(*valid_it) << " my |" << *ft_v.begin() << "|" << std::endl;

    }
  return 0;
}