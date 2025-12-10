#include <iostream>
using namespace  std;
#include "BinTree.h"

// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {

    BinTree<int> tree;
    tree.insert(7);
    tree.insert(5);
    tree.insert(9);
    tree.insert(6);
    tree.insert(11);
    tree.insert(8);
    tree.insert(1);
    tree.insert(-1);

    cout << "======================================="<<endl;
   /* int  a = 0;
    cout << "Input a: "; cin >> a;
    auto find = tree.search(a);
    if (find != nullptr) {
        find->showNode();
    }else {
        cout << "not found\n";
    }*/
    cout << "======================================="<<endl;
    tree.showTree();
    return 0;
}