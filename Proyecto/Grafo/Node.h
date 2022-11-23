#include "../SubLista/SubListaMetodos.h"

template <class T> class Node {
    private:
        T data;
        Node<T> *next;
        subLista<T> bows;
   
    public:
        bool visit = false;

        Node(T d);	  
        Node(T d, Node<T>* n);
	  
        T getData();
        void setData(T data);
		
        Node<T>* getNext();
        void setNext(Node<T>* n);

        void setSubLista(subLista<T> sl);
        subLista<T> getSubLista();
};

template<class T> void Node<T>::setSubLista(subLista<T> sl) {
    bows = sl;
}

template<class T> subLista<T> Node<T>::getSubLista(){
    return bows;
}

template <class T> Node<T>::Node(T d){
    data = d;
    next = NULL;
}

template <class T> Node<T>::Node(T d, Node<T>* n){
    data = d;
    next = n;
}

template <class T> T Node<T>::getData(){
    return data;
}

template <class T> void Node<T>::setData(T data){
    this->data = data;
}

template <class T> Node<T>* Node<T>::getNext(){
    return next;
}

template <class T> void Node<T>::setNext(Node<T>* n){
    next = n;
}
