#include "GrafoMetodos.h"

int main(){
    Grafo<char> a;

    a.insert('A');
    a.insert('B');
    a.insert('C');
    a.insert('D');
    a.insert('E');
    a.insert('F');
    a.insert('G');
    a.insert('H');
    a.insert('I');
    a.insert('J');
    a.insert('K');

    subLista<char> arcos, arcos2;
    Node<char> *aux;

    //Arcos del nodo A
    arcos.insert('B');
    arcos.insert('C');
    aux = a.search('A');
    aux->setSubLista(arcos);
    arcos = arcos2;

    //Arcos del nodo B
    arcos.insert('E');
    aux = a.search('B');
    aux->setSubLista(arcos);
    arcos = arcos2;

    //Arcos del nodo C
    arcos.insert('G');
    aux = a.search('C');
    aux->setSubLista(arcos);
    arcos = arcos2;

    //Arcos del nodo D
    arcos.insert('A');
    aux = a.search('D');
    aux->setSubLista(arcos);
    arcos = arcos2;

    //Arcos del nodo E
    arcos.insert('I');
    aux = a.search('E');
    aux->setSubLista(arcos);
    arcos = arcos2;


    //Arcos del nodo G
    arcos.insert('J');
    aux = a.search('G');
    aux->setSubLista(arcos);
    arcos = arcos2;

    //Arcos del nodo H
    arcos.insert('D');
    aux = a.search('H');
    aux->setSubLista(arcos);
    arcos = arcos2;

    //Arcos del nodo I
    arcos.insert('F');
    aux = a.search('I');
    aux->setSubLista(arcos);
    arcos = arcos2;

    //Arcos del nodo J
    arcos.insert('K');
    aux = a.search('J');
    aux->setSubLista(arcos);
    arcos = arcos2;

    //Arcos del nodo K
    arcos.insert('H');
    aux = a.search('K');
    aux->setSubLista(arcos);
    arcos = arcos2;
    
    a.rrecorrerAnchura('A');

    return 0;
}