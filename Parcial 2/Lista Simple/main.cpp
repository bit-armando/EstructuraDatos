#include "listaSimpleMetodos.h"
int main(){
    Cola<int> a;
    a.insertFirst(15);
    a.insertFirst(16);
    a.insertFirst(20);
    a.insertLast(0);
    a.insertLast(1);
    a.insertLast(2);

    Node <int> *holi = a.search(2);
    a.insertAfter(holi,50);

    a.insertLast(3);


    a.Print();
    return 0;
}