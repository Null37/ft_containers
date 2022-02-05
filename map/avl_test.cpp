#include <iostream>


struct node
{
    public:
    int key;
    struct node *left;
    struct node *right;
};
struct node *test1;
bool add(int value, node *&r =  test1)
{
    if (r == NULL)
    {
        r = new node;
        r->key = value;
        r->right = NULL;
        r->left = NULL;
        std::cout << "first sucss" << std::endl;
    }
    else
    {
        if (value > r->key)
        {
            add(value, r->right);
            std::cout << "two sucss" << std::endl;
        }
    }
    return 1;
}



int main()
{
    struct node *u =  nullptr;
    add(7, u);
    add(90, u);
    std::cout << u->key << std::endl;
    std::cout << u->right->key << std::endl;


}