#include "ListaDobleCircularMetodos.h"

int main(){
    ListaDobleCircular<int> list;
    // Node<T>* prev;

    list.insert(1);
    list.insert(4);
    list.insert(8);


    list.PrintBackward();
    return 0;
}