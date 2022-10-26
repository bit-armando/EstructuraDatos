#include "ListaDobleCircular.h"

template <class T> ListaDobleCircular<T>::ListaDobleCircular(){
    head = NULL;
    size = 0;
}

template <class T> ListaDobleCircular<T>::~ListaDobleCircular(){}

template <class T> void ListaDobleCircular<T>::insert(T data){
    Node<T> *newNode = new Node<T>(data);

    if(head != NULL){
        newNode->setNext(head->getNext());
        newNode->setPrev(head);
        head->setNext(newNode);
        newNode->getNext()->setPrev(newNode);
    }
    head = newNode;
    size++;
}

template <class T> void ListaDobleCircular<T>::deleteNode(T data){
    Node<T> *actual = head;
    bool found = false;

    while((actual->getNext()->getData() == data) && (!found)){
        found = (actual->getNext()->getData() == data);
        if(!found){
            actual = actual->getNext();
        }
    }
    found = (actual->getNext()->getData() == data);

    if(found){
        Node<T> *p;
        p = actual->getNext();

        if(head == head->getNext()){
            head = NULL;
        }
        else{
            if(p == head){
                head = actual;
            }
            actual->setNext(p->getNext());
            p->getNext()->setPrev(p->getPrev());
        }

        size--;
        delete p;
    }
}

template <class T> void ListaDobleCircular<T>::deleteList(){
    if(head == NULL){
        return;
    }

    Node<T> *p = head;

    do{
        Node<T> *t;
        t = p;
        p = p->getNext();
        delete t;
    }while(p != head);

    head = NULL;
    size == 0;
}

template <class T> bool ListaDobleCircular<T>::isEmpty(){
    if(size == 0){return true;}
    else{return false;}
}

template <class T> void ListaDobleCircular<T>::PrintForward(){
    Node<T> *p;

    if(head == NULL){return;}

    p = head->getNext();
    do{
        cout << p->getData() << ", ";
        p = p->getNext();
    }while(p != head->getNext());
}

template <class T> void ListaDobleCircular<T>::PrintBackward(){
    Node<T> *p;

    if(head == NULL){return;}

    p = head;
    do{
        cout << p->getData() << ", ";
        p = p->getPrev();
    }while(p != head);
}

template <class T> Node<T>* ListaDobleCircular<T>::search(T data){
    Node<T> *index;

    index = head;
    do{
        if(index->getData() == data){return index;}
        index = index->getNext();
    }while(index != head);
    
    cout << "Dato no encontrado..." << endl;
    return NULL;
}

template <class T> Node<T>* ListaDobleCircular<T>::get(int position){
    Node<T> *index;

    index = head;
    if(size >= position){
        for(int i = 0; i < position; i++){
            index = index->getNext();
        }
        return index;
    }
    else{
        cout << "Posicion mas grande que la lista" << endl;
        cout << "La lista tiene una longitud de " << size << " nodos." << endl;
        return NULL;
    }
}

template <class T> void ListaDobleCircular<T>::insert(Node<T>* prev, T data){
    Node<T> *newNode = new Node<T>(data);

    if(head != NULL){
        newNode->setNext(prev->getNext());
        newNode->setPrev(prev);
        prev->setNext(newNode);
        newNode->getNext()->setPrev(newNode);
    }

    size++;
}