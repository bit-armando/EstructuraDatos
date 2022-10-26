#include "ListaDoble.h"

template <class T> ListaDoble<T>::ListaDoble(){
    head = NULL;
    tail = NULL;
    size = 0;
}

template <class T> ListaDoble<T>::~ListaDoble(){}

template <class T> void ListaDoble<T>::insertFirst(T data){
    Node<T>* newNode = new Node<T>(data);
    newNode->setNext(head);

    if(head == NULL){
        tail = head = newNode;
    }
    else{
        head->setPrev(newNode);
        head = newNode;
    }
    size++;
}

template <class T> void ListaDoble<T>::insertAfter(Node<T> *previus, T data){
    Node<T> *newNode = new Node<T>(data);
    newNode->setNext(previus->getNext());

    if(previus->getNext() != NULL){
        previus->getNext()->setPrev(newNode);
    }
    else{
        tail = newNode;
    }

    previus->setNext(newNode);
    newNode->setPrev(previus);
    size++;
}

template <class T> void ListaDoble<T>::insertLast(T data){
    Node<T> *newNode = new Node<T>(data);

    tail->setNext(newNode);
    newNode->setPrev(tail);
    
    tail = newNode;
    size++;
}

template <class T> void ListaDoble<T>::deleteNode(T data){
    Node<T> *actual = head;

    if(actual == head && actual->getData() == data){
        head = actual->getNext();
    }

    while(actual->getData() != data && actual->getNext() != NULL){
        actual = actual->getNext();
    }

    if(actual->getNext() != NULL){
        actual->getNext()->setPrev(actual->getPrev());
    }
    else{
        tail = actual->getPrev();
    }
    
    if(actual->getPrev() != NULL){
        actual->getPrev()->setNext(actual->getNext());
    }

    size--;
    delete actual;
}

template <class T> Node<T>* ListaDoble<T>::getLast(){
    return tail;
}

template <class T> Node<T>* ListaDoble<T>::search(T data){
    Node<T> *index;

    index = head;
    while(index != NULL){
        if(index->getData() == data){return index;}
        index = index->getNext();
    }
    return NULL;
}

template <class T> Node<T>* ListaDoble<T>::get(int position){
    Node<T> *aux;
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

template <class T> bool ListaDoble<T>::isEmpty(){
    if(size == 0){return true;}
    else{return false;}
}

template <class T> void ListaDoble<T>::deleteList(){
    Node<T> *current = head;
    Node<T> *next;

    while(current != NULL){
        next = current->getNext();
        cout << "Destruyendo: " << current->getData() <<endl;
        delete current;
        current = next;
    }
}

template <class T> void ListaDoble<T>::Print(){
    Node<T> *aux;

    aux = head;
    while(aux != NULL){
        cout << aux->getData() << ", ";
        aux = aux->getNext();
    }
    cout << endl;
}

template <class T> int ListaDoble<T>::Size(){
    return size;
}