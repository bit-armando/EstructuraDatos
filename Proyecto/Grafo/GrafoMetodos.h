#include "Grafo.h"

template<class T> Grafo<T>::Grafo(){
    size = 0;
    head = NULL;
    tail = NULL;
}


template<class T> void Grafo<T>::insert(T data){
    Node<T> *newNode = new Node<T>(data);
    newNode->setNext(head);
    head = newNode;
    if(size == 0){
        tail = head;
    }

    size++;
}

template<class T> void Grafo<T>::Print(){
    Node<T> *aux;

    aux = head;
    while(aux != NULL){
        cout << aux->getData() << ", ";
        aux = aux->getNext();
    }
    cout << endl;
}

template<class T> Node<T> *Grafo<T>::search(T data){
    Node<T> *index;

    index = head;
    while(index != NULL){
        if(index->getData() == data){return index;}
        index = index->getNext();
    }
    return NULL;
}

template <class T> Node<T> *Grafo<T>::get(int position){
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

template <class T> void Grafo<T>::deleteNode(T data){
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

template <class T> void Grafo<T>::deleteList(){
    Node<T> *current = head;
    Node<T> *next;

    while(current != NULL){
        next = current->getNext();
        cout << "Destruyendo: " << current->getData() <<endl;
        delete current;
        current = next;
    }
}

template <class T> int Grafo<T>::Size(){return size;}

template <class T> bool Grafo<T>::isEmpty(){
    if(size == 0){return true;}
    else{return false;}
}

template <class T> void Grafo<T>::rrecorrerAnchura(T inicial){
    Node<T> *actual = search(inicial);
    char Nodo = actual->getData();
    
    //Encolar verice de partida
    cola.insert(Nodo);
    //Marcarlo como visitado
    actual->visit = true;
    
    //Mientras la cola no este vacia
    
    while(!cola.isEmpty()){
        Node<T> *aux = search(cola.pop()->getData()); //Desencolar w
        Nodo = aux->getData();
        cout << Nodo << ", " ; //Mostrarlo

    
        subLista<T> adyacentes = aux->getSubLista();
        for(int i = 0; i < adyacentes.Size(); i++){
            aux = search(adyacentes.getNode(i+1)->getData());
            Nodo = aux->getData();
            if(!aux->visit)
                cola.insert(Nodo);
            aux->visit = true; //Marcamos como visitados los nodos adyacentes
        }
    }
}