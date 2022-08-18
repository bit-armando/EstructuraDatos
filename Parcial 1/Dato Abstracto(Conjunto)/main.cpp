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
    c.Add(15);
    c.Add(16);

    Operaciones op;
    Conjunto b = op.Interseccion(a,c);
    b.Print();
    
    return 0;
}