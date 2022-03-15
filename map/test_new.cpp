#include <iostream>



class b
{
    private:
    int a;
    int l;
    public:
    b(int a, int c)
    {
        this->a = a;
        this->l = c;
    }
    ~b(){};
};

int main()
{
    b *y = new b(7, 10);
}