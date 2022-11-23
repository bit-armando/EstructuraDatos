#include "Cola.h"

template<class T> Cola<T>::Cola(){
    size = 0;
    head = NULL;
    tail = NULL;
}

template <class T> Cola<T>::~Cola(){}

template<class T> void Cola<T>::insertFirst(T data){
    NodeCola<T> *newNode = new NodeCola<T>(data);
    newNode->setNext(head);
    head = newNode;
    if(size == 0){
        tail = head;
    }

    size++;
}

template<class T> void Cola<T>::Print(){
    NodeCola<T> *aux;

    aux = head;
    while(aux != NULL){
        cout << aux->getData() << ", ";
        aux = aux->getNext();
    }
    cout << endl;
}

template<class T> void Cola<T>::insert(T data){
    //Si head es null agrega un nodo
    if(head == NULL){
        this->insertFirst(data);
        return;
    }

    NodeCola<T> *last = this->getLast();
    NodeCola<T> *aux = new NodeCola<T>(data);
    last->setNext(aux);
    tail = aux;
    size++;
}

template <class T> NodeCola<T>* Cola<T>::pop(){
    NodeCola<T>* aux = head;
    
    if(size == 1)
        head = NULL;
    else
        head = aux->getNext();

    size--;
    return aux;
}

template<class T> NodeCola<T> *Cola<T>::getLast(){
    return tail;
}

template <class T> void Cola<T>::deleteNode(T data){
    NodeCola<T> *actual;
    NodeCola<T> *previous;
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

template <class T> void Cola<T>::deleteList(){
    NodeCola<T> *current = head;
    NodeCola<T> *next;

    while(current != NULL){
        next = current->getNext();
        cout << "Destruyendo: " << current->getData() <<endl;
        delete current;
        current = next;
    }
}

template <class T> int Cola<T>::Size(){return size;}

template <class T> bool Cola<T>::isEmpty(){
    if(size == 0){return true;}
    else{return false;}
}