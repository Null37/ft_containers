// resizing vector
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
      {
         std::vector<int> test(5);
         std::vector<int>::reverse_iterator it = test.rbegin();
         std::vector<int>::reverse_iterator it2 = test.rend();
         int l = it < it2;
         std::cout << "dyalom: " << l << std::endl;

      }
      {
         ft::vector<int> test(5);
         ft::vector<int>::reverse_iterator it = test.rbegin();
         ft::vector<int>::reverse_iterator it2 = test.rend();
         int l = it < it2;
         std::cout << "dyali: " << l << std::endl;
      }
  
  	//ft::vector<int> data((std::istream_iterator<int>(std::cin)),std::istream_iterator<int>());
  return 0;
}