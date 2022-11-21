#include "BinaryTree.h"

int main(){

    BinaryTree<int> a;

    a.add(40);
    a.add(20);
    a.add(60);
    a.add(10);
    a.add(30);
    a.add(50);
    a.add(70);
    a.add(45);
    a.add(55);
    a.add(54);

    //Con un nodo dentro del arbol
    Node<int> *aux = a.search(60);
    cout << aux->getData() << endl;

    //Nodo que no esta en el arbol
    aux = a.search(8);

    //Agregamos el nodo que no encontro y lo volvemos a buscar
    a.add(8);
    aux = a.search(8);
    cout << aux->getData() << endl;

    return 0;
}