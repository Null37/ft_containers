
#include <iostream>
#include <map>



int main()
{
    std::map<int, int> m;

    m.insert(std::pair<int, int>(9, 500));
    m.insert(std::pair<int, int>(10, 500));
    m.insert(std::pair<int, int>(60, 500));
    m.insert(std::pair<int, int>(70, 500));
    m.insert(std::pair<int, int>(80, 500));

    std::map<int, int>::key_compare com =  m.key_comp();
    std::map<int, int>::iterator it =  m.begin();
    int itest  = 1;

    // for (; it != m.end(); it++)
    // {
    //     std::cout << " test ==> " << it->first << std::endl;
    // }
    
    do
    {
      std::cout << "test 2 ==> " << it->first << std::endl;
    } while (com((*it++).first, itest));

    

}

// int main ()
// {
//   std::map<char,int> mymap;

//   std::map<char,int>::key_compare mycomp = mymap.key_comp();

//   mymap['a']=100;
//   mymap['b']=200;
//   mymap['c']=300;

//   std::cout << "mymap contains:\n";

//   char highest = mymap.rbegin()->first;     // key value of last element

//   std::map<char,int>::iterator it = mymap.begin();
// //   do {
// //     std::cout << it->first << " => " << it->second << '\n';
// //   } while ( mycomp((*it++).first, highest) );

//     while ( mycomp((*it++).first, highest) )
//     {
//          std::cout << it->first << " => " << it->second << '\n';
//     }
//   std::cout << '\n';

//   return 0;
// }