#include "BinaryTree.h"

int main(){

    BinaryTree<int> a;
        
    Node<int> *n1, *n3, *n4, *n6, *n7, *n8, *n10, *n13, *n14;

    n4 = a.add(NULL, 4, NULL);
    n7 = a.add(NULL, 7, NULL);
    n6 = a.add(n4, 6, n7);

    n1 = a.add(NULL, 1, NULL);
    n3 = a.add(n1, 3, n6); //

    n13 = a.add(NULL, 13, NULL);
    n14 = a.add(n13, 14, NULL);

    n10 = a.add(NULL, 10, n14);//
    n8 = a.add(n3, 8, n10);

    a.setRoot(n8);


    cout << "Recorrido PreOrder: ";
    a.preOrder();

    cout << "Recorrido Enorder: ";
    a.enOrder();

    cout << "Recorrido PosOrder: ";
    a.postOrder();
    return 0;
}