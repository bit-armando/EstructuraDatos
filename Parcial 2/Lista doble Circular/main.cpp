#include "ListaDobleCircularMetodos.h"

int main(){
    ListaDobleCircular<int> list;
    

    list.insert(1);
    list.insert(4);
    list.insert(8);

    // Node<int> *aux;
    // aux = list.search(1);

    // list.insert(aux,200);

    list.PrintForward();

    
    return 0;
}