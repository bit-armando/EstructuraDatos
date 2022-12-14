#include "ListaSimple.h"

template<class T> Cola<T>::Cola(){
    size = 0;
    head = NULL;
    tail = NULL;
}

template <class T> Cola<T>::~Cola(){}

template<class T> void Cola<T>::insertFirst(T data){
    Node<T> *newNode = new Node<T>(data);
    newNode->setNext(head);
    head = newNode;
    if(size == 0){
        tail = head;
    }

    size++;
}

template<class T> void Cola<T>::Print(){
    Node<T> *aux;

    aux = head;
    while(aux != NULL){
        cout << aux->getData() << ", ";
        aux = aux->getNext();
    }
    cout << endl;
}

template<class T> Node<T> *Cola<T>::search(T data){
    Node<T> *index;

    index = head;
    while(index != NULL){
        if(index->getData() == data){return index;}
        index = index->getNext();
    }
    return NULL;
}

template<class T> void Cola<T>::insertLast(T data){
    //Si head es null agrega un nodo
    if(head == NULL){
        this->insertFirst(data);
        return;
    }

    Node<T> *last = this->getLast();
    Node<T> *aux = new Node<T>(data);
    last->setNext(aux);
    tail = aux;
    size++;
}

template<class T> Node<T> *Cola<T>::getLast(){
    return tail;
}

template <class T> void Cola<T>::insertAfter(Node<T> *previous, T data){
    Node<T> *newNode;
    newNode = new Node<T>(data);

    if(previous == tail){
        tail = newNode;
        previous->setNext(newNode);
    }
    else{
        newNode->setNext(previous->getNext());
        previous->setNext(newNode);
    }
    size++;
}

template <class T> Node<T> *Cola<T>::get(int position){
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

template <class T> void Cola<T>::deleteNode(T data){
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

template <class T> void Cola<T>::deleteList(){
    Node<T> *current = head;
    Node<T> *next;

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