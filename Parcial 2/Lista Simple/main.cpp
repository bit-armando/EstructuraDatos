#include "listaSimpleMetodos.h"
int main(){
    ListaSimple<int> a;
    a.insertFirst(15);
    a.insertFirst(16);
    a.insertFirst(20);
    a.insertLast(0);
    a.insertLast(1);
    a.insertLast(2);

    // Node <int> *holi = a.search(16);
    // a.insertAfter(holi,50);


    a.Print();
    return 0;
}