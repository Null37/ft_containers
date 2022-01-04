// resizing vector
#include <iostream>
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
  {
    std::vector<int> test;
    test.pop_back();
    std::cout << "vector org size ==> " << test.size() << " " << "vector org capasity ==> " << test.capacity() << std::endl;
    std::cout << "elm == > " << test[4] << std::endl;
  }
  {
    std::vector<int> test;
    test.pop_back();
    std::cout << "my size ==>         " << test.size() << " " << "my  capasity ==>        " << test.capacity() << std::endl;
    std::cout << "elm == > " << test[4] << std::endl;
  }
  return 0;
}