#include "GrafoMetodos.h"

int main(){
    Grafo<char> a;

    //Nodos del grafo
    a.insert('D');
    a.insert('B');
    a.insert('C');
    a.insert('H');
    a.insert('R');
    a.insert('T');
    a.insert('A');

    subLista<char> arcos;
    Node<char> *aux;
    
    //Arcos del nodo D
    arcos.insert('B');
    arcos.insert('C');
    aux = a.search('D');
    aux->setSubLista(arcos);
    arcos.deleteList();

    //Arcos del nodo B
    arcos.insert('H');
    aux = a.search('B');
    aux->setSubLista(arcos);

    //Arcos del nodo R
    aux = a.search('R');
    aux->setSubLista(arcos);
    arcos.deleteList();

    //Arcos del nodo C
    arcos.insert('R');
    aux = a.search('C');
    aux->setSubLista(arcos);
    arcos.deleteList();

    //arcos del nodo H
    arcos.insert('A');
    arcos.insert('T');
    aux = a.search('H');
    aux->setSubLista(arcos);
    

    a.rrecorrerAnchura('D');
    return 0;
}