#ifndef ND_HPP
#define ND_HPP
#include <iostream>


namespace ft{
template <class T1, class T2>
struct pair
{
    public:
        //Member types 
        typedef T1  first_type;
        typedef T2  second_type;
        // Member variables
        T1 first;
        T2 second;
        //Member functions
                //Constructs
        pair()//default 
        {
            first = T1();
            second = T2();
        } 
        template<class U, class V> 
        pair (const pair<U,V>& pr) // copy constructs
        {
            pr.first = new U;
            pr.first = first;
            pr.second = new V;
            pr.second =  second;
        }
        pair (const first_type& a, const second_type& b) //initialization constructs
        {
            first = a;
            second = b;
        }
        ~pair(){} // dest
        pair& operator= (const pair& pr) // Assign operator
        {
            this->first =  pr.first;
            this->second = pr.second;
            return  *this;
        }



};
}




#endif