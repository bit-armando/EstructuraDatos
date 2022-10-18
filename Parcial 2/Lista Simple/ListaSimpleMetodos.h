#include "ListaSimple.h"

template<class T> ListaSimple<T>::ListaSimple(){
    size = 0;
    head = NULL;
}

template <class T> ListaSimple<T>::~ListaSimple(){}

template<class T> void ListaSimple<T>::insertFirst(T data){
    Node<T> *newNode = new Node<T>(data);
    newNode->setNext(head);
    head = newNode;

    size++;
}

template<class T> void ListaSimple<T>::Print(){
    Node<T> *aux;

    aux = head;
    while(aux != NULL){
        cout << aux->getData() << ", ";
        aux = aux->getNext();
    }
    cout << endl;
}

template<class T> Node<T> *ListaSimple<T>::search(T data){
    Node<T> *index;

    index = head;
    while(index != NULL){
        if(index->getData() == data){return index;}
        index = index->getNext();
    }
    return NULL;
}

template<class T> void ListaSimple<T>::insertLast(T data){
    //Si head es null agrega un nodo
    if(head == NULL){
        this->insertFirst(data);
        return;
    }

    Node<T> *last = this->getLast();
    last->setNext(new Node<T>(data));
    size++;
}

template<class T> Node<T> *ListaSimple<T>::getLast(){
    Node<T> *p = head;

    if (p == NULL){
        throw "Error, Lista Vacia";
        return NULL;
    }

    while(p->getNext() != NULL){p = p->getNext();}

    return p;
}

template <class T> void ListaSimple<T>::insertAfter(Node<T> *previous, T data){
    Node<T> *newNode;
    newNode = new Node<T>(data);

    newNode->setNext(previous->getNext());
    previous->setNext(newNode);
    size++;
}

template <class T> Node<T> *ListaSimple<T>::get(int position){
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

template <class T> void ListaSimple<T>::deleteNode(T data){
    Node<T> *actual;
    Node<T> *previous;
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

template <class T> void ListaSimple<T>::deleteList(){
    Node<T> *current = head;
    Node<T> *next;

    while(current != NULL){
        next = current->getNext();
        cout << "Destruyendo: " << current->getData() <<endl;
        delete current;
        current = next;
    }
}

template <class T> int ListaSimple<T>::Size(){return size;}

template <class T> bool ListaSimple<T>::isEmpty(){
    if(size == 0){return true;}
    else{return false;}
}