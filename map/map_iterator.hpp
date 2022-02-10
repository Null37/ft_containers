#ifndef MAP_ITERATOR_HPP
#define MAP_ITERATOR_HPP





namespace ft
{

template<class avl_base>
class map_iterator
{
private:
    avl_base tree;
public:
    
    map_iterator() // default
    {

    }

    map_iterator(const map_iterator &cp_it) // copy constructor
    {
        this->tree(cp_it.tree);    
    }
    void operator=(const map_iterator &cp_it) //
    {
        this->tree = cp_it.tree;
    }
    ~map_iterator(){}


    

};



}





#endif

