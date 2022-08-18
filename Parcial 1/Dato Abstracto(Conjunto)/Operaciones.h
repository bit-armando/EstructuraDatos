#include "Conjunto.h"

class Operaciones{
    public:
        Conjunto Union(Conjunto a, Conjunto b);//
        Conjunto Interseccion(Conjunto a, Conjunto b);//
        bool isSubset(Conjunto a, Conjunto b);
        Conjunto CreateEmptySet();//
};

Conjunto Operaciones::Union(Conjunto a, Conjunto b){
    Conjunto aux;
    int i = 0;

    //Union de todos los elementos contenidos en el cojunto a
    for(i=0; i<a.Size(); i++){
        aux.Add(a.Get(i));
    }

    //Union de los elementos contenidos en b sin repetir
    for(i=0; i<b.Size(); i++){
        aux.Add(b.Get(i));
    }

    return aux;
}

Conjunto Operaciones::Interseccion(Conjunto a, Conjunto b){
    Conjunto aux;
    int i, j;
    for(i=0; i<a.Size(); i++){
        for(j = 0; j < b.Size(); j++){
            if(a.Get(i) == b.Get(j)){
                aux.Add(a.Get(i));
            }
        }
    }

    return aux;
}

Conjunto Operaciones::CreateEmptySet(){
    Conjunto aux;
    aux.Empy();
    return aux;
}

bool Operaciones::isSubset(Conjunto a, Conjunto b){

}