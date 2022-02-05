#ifndef AVL_TREE_HPP
#define AVL_TREE_HPP
#include <iostream>

namespace ft
{
template<class T, class U>
struct node
{
    public:
    T key;
    U value;
    struct node    *right;
    struct node    *left;
};



template<class key, class value>
class avl_tree
{
private:
    struct node<key, value> root; //underline containre
public:
    avl_tree(std::pair<key, value> p)
    {
        root.key  = p.first;
        std::cout << "test   ===> " << root.key << std::endl;
    };
    ~avl_tree(){};
};


}




#endif