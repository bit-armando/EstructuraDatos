#include "ListaDobleMetodos.h"

int main(){
    ListaDoble<int> list;

    list.insertFirst(8);
    list.insertLast(10);
    list.insertLast(20);
    list.insertFirst(15);

    Node<int> *aux;
    aux = list.search(10);
    list.insertAfter(aux,50);

    list.Print();

    list.deleteNode(50);
    list.Print();

    list.deleteNode(20);
    list.Print();

    aux = list.getLast();
    cout << list.Size();
    return 0;
}