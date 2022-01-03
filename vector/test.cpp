// resizing vector
#include <iostream>
#include <vector>
#include "vector.hpp"

int main ()
{
  ft::vector<int> myvector(5,7);

  // set some initial content:
//   for (int i=1;i<10;i++) myvector.push_back(i);

//   myvector.resize(5,3);
//   myvector.resize(8,100);
  myvector.resize(10, 60);

 std::cout << "myvector contains:";
  for (int i=0;i<myvector.size();i++)
    std::cout << ' ' << myvector[i];
  std::cout << '\n';
  try
  {
	  std::vector<int> a;
	  a.reserve(87457374573847857);
  }
  catch(const std::exception& e)
  {
	  std::cerr << e.what() << '\n';
  }
  
    // std::cout << myvector.capacity() << std::endl;
  return 0;
}