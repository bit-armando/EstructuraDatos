#include "Node.h"

template <class T> class BinaryTree{
    private:
        Node<T>* root;
    
    public:
        BinaryTree();
        BinaryTree(Node<T>* root);

        void setRoot(Node<T>* root);
        Node<T>* getRoot();
        Node<T>* rootTree();

        bool isEmpty();
        Node<T>* getLeftSubTree();
        Node<T>* getRightSubTree();

        Node<T>* add(Node<T>* leftSubTree, T data, Node<T>* rightSubTree);
};

template <class T> BinaryTree<T>::BinaryTree(){root = NULL;}

template <class T> BinaryTree<T>::BinaryTree(Node<T>* root){this->root = root;}

template <class T> void BinaryTree<T>::setRoot(Node<T>* root){this->root = root;}

template <class T> Node<T>* BinaryTree<T>::getRoot(){return root;}

template <class T> Node<T>* BinaryTree<T>::rootTree(){
    if(root)
        return root;
    else
        throw "Arbol vacio";
}

template <class T> bool BinaryTree<T>::isEmpty(){return root == NULL;}

template <class T> Node<T>* BinaryTree<T>::getLeftSubTree(){
    if(root) 
        return root->getLeft(); 
    else
        throw " arbol vacio"; return NULL;
}

template <class T> Node<T>* BinaryTree<T>::getRightSubTree(){
    if(root) 
        return root->getRight(); 
    else
        throw " arbol vacio"; return NULL;
}

template <class T> Node<T>* BinaryTree<T>::add(Node<T>* leftSubTree, T data, Node<T>* rightSubTree){
    return new Node<T>(leftSubTree, data, rightSubTree);
}