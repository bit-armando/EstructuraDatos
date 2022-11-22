#include <iostream>
using namespace std;
template <class T> class SubNode {
    private:
        T data;
        SubNode<T> *next;
   
    public:
        SubNode(T d);	  
        SubNode(T d, SubNode<T>* n);
	  
        T getData();
        void setData(T data);
		
        SubNode<T>* getNext();
        void setNext(SubNode<T>* n);
};

template <class T> SubNode<T>::SubNode(T d){
    data = d;
    next = NULL;
}

template <class T> SubNode<T>::SubNode(T d, SubNode<T>* n){
    data = d;
    next = n;
}

template <class T> T SubNode<T>::getData(){
    return data;
}

template <class T> void SubNode<T>::setData(T data){
    this->data = data;
}

template <class T> SubNode<T>* SubNode<T>::getNext(){
    return next;
}

template <class T> void SubNode<T>::setNext(SubNode<T>* n){
    next = n;
}
