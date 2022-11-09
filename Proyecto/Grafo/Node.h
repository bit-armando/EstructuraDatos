#include <iostream>
//#include "../subLista/subListaMetodos.h"
using namespace std;

template <class T> class Node {
    private:
        T data;
        Node<T> *next;
        //subLista<T> *bows;
   
    public:
        Node(T d);	  
        Node(T d, Node<T>* n);
	  
        T getData();
        void setData(T data);
		
        Node<T>* getNext();
        void setNext(Node<T>* n);

        //subLista<T>* getSubLista();
        //void setSubLista(subLista<T>* sl);
};

template <class T> Node<T>::Node(T d){
    data = d;
    next = NULL;
    //bows = NULL;
}

template <class T> Node<T>::Node(T d, Node<T>* n){
    data = d;
    next = n;
    //bows = NULL;
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
