#include "BinaryTree.h"

int main(){

    BinaryTree<char> a;

    Node<char> *n2a, *n3, *n4, *n2b;
    Node<char> *auxSum, *auxMul, *auxDiv;

    n2a = a.add(NULL, '2', NULL);
    n3 = a.add(NULL, '3', NULL);
    n4 = a.add(NULL, '4', NULL);
    n2b = a.add(NULL, '2', NULL);

    auxMul = a.add(n2a, '*', n3);
    auxDiv = a.add(n4, '/', n2b);
    auxSum = a.add(auxMul, '+', auxDiv);

    a.setRoot(auxSum);

    cout << evaluate(a.getRoot());
    return 0;
}