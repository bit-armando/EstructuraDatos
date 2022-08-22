#include "Operaciones.h"
#include <iostream>

int main(){
    Conjunto a;
    a.Add(5);
    a.Add(6);
    a.Add(7);
    a.Delete(6);
    a.Add(8);
    a.Add(8);
    a.Print();

    Conjunto c;
    c.Add(5);
    c.Add(8);
    c.Add(56);

    Operaciones op;
    bool resultado = op.isSubset(a,c);
    
    cout << resultado << endl;
    
    return 0;
}