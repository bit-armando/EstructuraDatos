#include <math.h>
#include "Node.h"

template <class T> class BinaryTree{
    private:
        Node<T>* root;
        
        //Recorridos
        void preOrder(Node<T>* r);
        void enOrder(Node<T>* r);
        void postOrder(Node<T>* r);
    
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

        //Recorridos
        void preOrder();
        void enOrder();
        void postOrder();

        double evaluate(Node<T>* r);
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

//----------------------------------------------------------------

template <class T> void BinaryTree<T>::preOrder(Node<T>* r){
    if(r != NULL){
        r->visit();
        preOrder(r->getLeft());
        preOrder(r->getRight());
    }
}

template <class T> void BinaryTree<T>::preOrder(){
    preOrder(root);
    cout<<endl;
}

template <class T> void BinaryTree<T>::enOrder(Node<T>* r){
    if(r != NULL){
        enOrder(r->getLeft());
        r->visit();
        enOrder(r->getRight());
    }
}

template <class T> void BinaryTree<T>::enOrder(){
    enOrder(root);
    cout<<endl;
}

template <class T> void BinaryTree<T>::postOrder(Node<T>* r){
    if(r != NULL){
        postOrder(r->getLeft());
        postOrder(r->getRight());	
        r->visit();
    }
}

template <class T> void BinaryTree<T>::postOrder(){
    postOrder(root);
    cout<<endl;
}

double evaluate(Node<char>* r){
    double x, y;
    char ch;
    
    if(r != NULL){
        // no está vacío
        ch = r->getData();
        if (ch >= '0' && ch <= '9')
           return (ch - '0');
        else {
           x = evaluate(r->getLeft());
           y = evaluate(r->getRight());
           switch (ch) {
             case '+': return x + y; break;
             case '-': return x - y; break;
             case '*': return x * y; break;
             case '/': if (y != 0) return x/y; else throw "Div /0"; break;
             case '^': return pow(x, y); break;
           }
        }
    }
    
    return 0;
}
