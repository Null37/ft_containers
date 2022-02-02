// pair::pair example
#include <utility>      // std::pair, std::make_pair
#include <string>       // std::string
#include <iostream>     // std::cout
#include "my_ utility.hpp"

template<class T, class U>
void compare(T one , U two)
{
  if (one == two)
    std::cout << "OK" << std::endl;
  else
    std::cout << "KO" << std::endl;
}
int main () {
  std::pair <std::string,double> product1;                     // default constructor
  std::pair <std::string,double> product2 ("tomatoes",2.30);   // value init
  std::pair <std::string,double> product3 (product2);          // copy constructor
  ft::pair <std::string, double> product4;                     
  ft::pair <std::string, double> product5 ("batata", 50.30);   
  ft::pair <std::string,double> product6 (product5);          

//   product1 = std::make_pair(std::string("lightbulbs"),0.99);   // using make_pair (move)

//   product2.first = "shoes";                  // the type of first is string
//   product2.second = 39.90;                   // the type of second is double

std::cout << "---------------------------- std::pair -------------------" << std::endl;
  std::cout << "The price of " << "|" << product2.first << "|" << " is $" << product2.second << '\n';
  std::cout << "The price of " << product1.first << " is $" << product1.second << '\n';
  std::cout << "The price of " << product3.first << " is $" << product3.second << '\n';

std::cout << "---------------------------- my pair -------------------" << std::endl;
 std::cout << "The price of " << "|" << product5.first << "|" <<  " is $" << product5.second << '\n';
 std::cout << "The price of " << "|" << product4.first << "|" << " is $" << product4.second << '\n';
 std::cout << "The price of " << "|" << product6.first << "|" << " is $" << product6.second << '\n';
std::cout << "-----------------------------------------------------------------------\n" << std::endl;


// test operator
{
    {
    std::cout << "---------------------------- std::pair operator = -------------------" << std::endl;
    std::pair <std::string,int> planet("Earth",6371), homeplanet;

    homeplanet = planet;

    std::cout << "Home planet: " << homeplanet.first << '\n';
    std::cout << "Planet size: " << homeplanet.second << '\n';
    std::cout << "-----------------------------------------------------" << std::endl;
    std::cout << "---------------------------- my pair operator = -------------------" << std::endl;
    }
    ft::pair <std::string,int> planet("Earth",6371), homeplanet;
    homeplanet = planet;
    std::cout << "ft::pair Home planet: " << homeplanet.first << '\n';
    std::cout << "ft::pair Planet size: " << homeplanet.second << '\n';
    std::cout << "-----------------------------------------------------" << std::endl;
}
{

  std::pair<int,char> foo (10,'z');
  std::pair<int,char> bar (90,'a');

  if (foo==bar) std::cout <<  "foo and bar are equal\n";
  if (foo!=bar) std::cout << "foo and bar are not equal\n";
  if (foo< bar) std::cout << "foo is less than bar\n";
  if (foo> bar) std::cout << "foo is greater than bar\n";
  if (foo<=bar) std::cout << "foo is less than or equal to bar\n";
  if (foo>=bar) std::cout << "foo is greater than or equal to bar\n";
  {
    ft::pair<int,char> foo (10,'z');
    ft::pair<int,char> bar (90,'a');

    if (foo==bar) std::cout <<  "my foo and bar are equal\n";
    if (foo!=bar) std::cout << "my foo and bar are not equal\n";
    if (foo< bar) std::cout << "my foo is less than bar\n";
    if (foo> bar) std::cout << "my foo is greater than bar\n";
    if (foo<=bar) std::cout << "my foo is less than or equal to bar\n";
    if (foo>=bar) std::cout << "my foo is greater than or equal to bar\n";
  }
}



  return 0;
}