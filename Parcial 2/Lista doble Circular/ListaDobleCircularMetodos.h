#include "ListaDobleCircular.h"

template <class T> void ListaDobleCircular<T>::insert(T data){
    Node<T> *newNode = new Node<T>(data);

    if(head != NULL){
        newNode->setNext(head->getNext());
        newNode->setPrev(head);
        head->setNext(newNode);
        newNode->getNext()->getPrev(newNode);
    }
    head = newNode;
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
}