#include "subLista.h"

template<class T> subLista<T>::subLista(){
    size = 0;
    head = NULL;
    tail = NULL;
}

template <class T> subLista<T>::~subLista(){}

template<class T> void subLista<T>::insertFirst(T data){
    SubNode<T> *newNode = new SubNode<T>(data);
    newNode->setNext(head);
    head = newNode;
    if(size == 0){
        tail = head;
    }

    size++;
}

template<class T> void subLista<T>::Print(){
    SubNode<T> *aux;

    aux = head;
    while(aux != NULL){
        cout << aux->getData() << ", ";
        aux = aux->getNext();
    }
    cout << endl;
}

template<class T> void subLista<T>::insert(T data){
    //Si head es null agrega un nodo
    if(head == NULL){
        this->insertFirst(data);
        return;
    }

    SubNode<T> *last = this->getLast();
    SubNode<T> *aux = new SubNode<T>(data);
    last->setNext(aux);
    tail = aux;
    size++;
}



template<class T> SubNode<T> *subLista<T>::getLast(){
    return tail;
}

template <class T> void subLista<T>::deleteNode(T data){
    SubNode<T> *actual;
    SubNode<T> *previous;
    bool found = false;
    actual = head;
    previous = NULL;

    while((actual != NULL) && !found){
        found = (actual->getData() == data);
        if(!found){
            previous = actual;
            actual = actual->getNext();
        }
    }

    if(actual != NULL){
        if(actual == head){
            head = actual->getNext();
        }
        else{
            previous->setNext(actual->getNext());
        }
        size--;
        delete actual;
    }
}

template <class T> int subLista<T>::Size(){return size;}

template <class T> bool subLista<T>::isEmpty(){
    if(size == 0){return true;}
    else{return false;}
}

template <class T> SubNode<T> *subLista<T>::getNode(int position){
    SubNode<T> *aux;
    aux = head;

    int i = 1;

    while (aux != NULL && position != i){
        aux = aux->getNext();
        i++;
    }
    if(aux == NULL){
        cout << "Nodo no encontrado" <<endl;
        return NULL;
    }
    else{return aux;}
}