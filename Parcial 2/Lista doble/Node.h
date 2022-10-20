#include <iostream>
using namespace std;

template <class T> class Node{
    private:
        T data;
        Node<T> *next;
        Node<T> *prev;
    
    public:
        Node(T d);	  
        Node(T d, Node<T>* n);
	  
        T getData();
        void setData(T data);//
		
        Node<T>* getNext();
        void setNext(Node<T>* n);

        Node<T>* getPrev();
        void setPrev(Node<T>* p);
};

template <class T> Node<T>::Node(T d){
    data = d;
    next = NULL;
    prev = NULL;
}

template <class T> Node<T>::Node(T d, Node<T>* n){
    data = d;
    next = n;
    prev = NULL;
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

template <class T> Node<T>* Node<T>::getPrev(){
    return prev;
}

template <class T> void Node<T>::setPrev(Node<T>* p){
    prev = p;
}

template class Node<int>;
template class Node<char>;
template class Node<float>;