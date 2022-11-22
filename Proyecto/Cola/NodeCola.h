#include <iostream>
using namespace std;

template <class T> class NodeCola {
    private:
            T data;
            NodeCola<T> *next;
   
    public:
            NodeCola(T d);	  
            NodeCola(T d, NodeCola<T>* n);
	  
            T getData();
            void setData(T data);
		
            NodeCola<T>* getNext();
            void setNext(NodeCola<T>* n);
};

template <class T> NodeCola<T>::NodeCola(T d){
    data = d;
    next = NULL;
}

template <class T> NodeCola<T>::NodeCola(T d, NodeCola<T>* n){
    data = d;
    next = n;
}

template <class T> T NodeCola<T>::getData(){
    return data;
}

template <class T> void NodeCola<T>::setData(T data){
    this->data = data;
}

template <class T> NodeCola<T>* NodeCola<T>::getNext(){
    return next;
}

template <class T> void NodeCola<T>::setNext(NodeCola<T>* n){
    next = n;
}
