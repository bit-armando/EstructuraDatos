#include "ListaDobleCircularMetodos.h"

int main(){
    ListaDobleCircular<int> list;
    

    list.insert(1);
    list.insert(4);
    list.insert(8);
    list.deleteNode(4);

    list.PrintForward();

    
    return 0;
}