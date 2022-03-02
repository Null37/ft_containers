
#include <map>
#include <iostream>
#include "avl_tree.hpp"
#include "map_iterator.hpp"
#include "map.hpp"
#include <vector>
#include <set>
#include <math.h>
#include <limits>
#include "../vector/vector.hpp"
using namespace std;

#include <iterator>
#define COUNT 10


    template <class F>
    void print2DUtil(F *root, int space)
    {
        // Base case
        if (root == NULL)
            return;

        // Increase distance between levels
        space += COUNT;

        // Process right child first
        print2DUtil(root->right, space);

        // Print current node after space
        // count
        cout<<endl;
        for (int i = COUNT; i < space; i++)
            cout<<" ";
        cout<<root->pt.first <<"\n";
        //cout<< root->parent << "\n";
        // Process left child
        print2DUtil(root->left, space);
    }

    // Wrapper over print2DUtil()
    template<typename F>

    void print2D(F *root)
    {
        // Pass initial space count as 0
        print2DUtil(root, 0);
    }

int main()
{
    ft::map<int, int> test;
	//2 1 3 9 6 8 5 4 12 29 69 40 23 58 92 11 22 99 1001

	test.insert(ft::pair<int, int>(2,10));
	test.insert(ft::pair<int, int>(1,10));
	test.insert(ft::pair<int, int>(3,10));
	test.insert(ft::pair<int, int>(9,10));
	test.insert(ft::pair<int, int>(6,10));
	test.insert(ft::pair<int, int>(8,10));
	test.insert(ft::pair<int, int>(5,10));
	test.insert(ft::pair<int, int>(4,10));
	test.insert(ft::pair<int, int>(12,10));
	test.insert(ft::pair<int, int>(29,10));
	test.insert(ft::pair<int, int>(69,10));
	test.insert(ft::pair<int, int>(40,10));
	test.insert(ft::pair<int, int>(23,10));
	test.insert(ft::pair<int, int>(58,10));
	test.insert(ft::pair<int, int>(92,10));
	test.insert(ft::pair<int, int>(11,10));
	test.insert(ft::pair<int, int>(22,10));
	test.insert(ft::pair<int, int>(99,10));
	test.insert(ft::pair<int, int>(1001,10));
    print2D(test.tree_base.root);
}