#include "listaSimpleMetodos.h"
int main(){
    ListaSimple<int> a;
    a.insertFirst(15);
    a.insertFirst(16);
    a.insertFirst(20);
    a.insertLast(0);

    Node <int> *holi = a.search(16);
    a.insertAfter(holi,50);


    cout << a.Size() << endl;
    a.Print();
    return 0;
}