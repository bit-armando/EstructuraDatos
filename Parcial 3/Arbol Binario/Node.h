#include <iostream>
using namespace std;

template <class T> class Node{
    private:
        T data;
        Node<T>* left;
        Node<T>* right;

    public:
        Node(T value);
        Node(Node<T>* left, T value, Node<T>* right);
        
        T getData();
        void setData(T value);

        Node<T>* getLeft();
        Node<T>* getRight();

        void setLeft(Node<T>* left);
        void setRight(Node<T>* right);
};

template <class T> Node<T>::Node(T value){
    data = value; 
    left = right = NULL; 
}

template <class T> Node<T>::Node(Node<T>* left, T value, Node<T>* right){
    data = value; 
    this->left = left; 
    this->right = right; 
}

template<class T> T Node<T>::getData(){return data;}

template<class T> void Node<T>::setData(T value){data = value;}

template<class T> Node<T>* Node<T>::getLeft(){return left;}

template<class T> Node<T>* Node<T>::getRight(){return right;}

template<class T> void Node<T>::setLeft(Node<T>* left){this->left = left;}

template<class T> void Node<T>::setRight(Node<T>* right){this->right = right;}

template class Node<int>;
template class Node<char>;
template class Node<float>;
template class Node<string>;