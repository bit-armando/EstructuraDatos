#include "Node.h"

template <class T> class BinaryTree{
    private:
        Node<T>* root;

        //Busqueda
        Node<T>* search(Node<T>* r, T value);

        //Insertar Nodo
        Node<T>* add(Node<T>* r, T value);

        //Borrar Nodo
        Node<T>* Delete(Node<T>* root, T data);
        Node<T>* replace(Node<T>* act);
    
    public:
        BinaryTree();
        BinaryTree(Node<T>* root);

        Node<T>* getRoot();
        Node<T>* rootTree();

        bool isEmpty();
        Node<T>* getLeftSubTree();
        Node<T>* getRightSubTree();

        void add(T value);
        void Delete(T value);

        //Busqueda
        Node<T>* search(T value);
};

template <class T> BinaryTree<T>::BinaryTree(){root = NULL;}

template <class T> BinaryTree<T>::BinaryTree(Node<T>* root){this->root = root;}

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

//----------------------AGREGAR----------------------//

template <class T> void BinaryTree<T>::add(T value){
    root = add(root, value);
}

template <class T> Node<T>* BinaryTree<T>::add(Node<T>* r, T value){
    if (r == NULL)
        r = new Node<T>(value);
    else if (value < r->getData()) {
        Node<T> *iz; iz = add(r->getLeft(), value);
        r->setLeft(iz);
    }
    else if (value > r->getData()) {
        Node<T> *dr; dr = add(r->getRight(), value);
        r->setRight(dr);
    }
    else
        throw "Nodo duplicado";
    return r;
}

//----------------------BORRAR----------------------//

template<class T> Node<T>* replace(Node<T>* act) {
    Node<T> *a, *p = act;

    // a = act->getLeft();

    // while(a->getRight() != NULL){
    //     p = a;
    //     a = a->getRight();
    // }

    // act->setData(a->getData());

    // if(p == act){
    //     p->setLeft(a->getLeft());
    // }
    // else{
    //     p->setRight(a->getLeft);
    // }
    return p;
}


template <class T> void BinaryTree<T>::Delete(T value){
    root = Delete(root, value);
}

template<class T> Node<T>* BinaryTree<T>::Delete(Node<T> *r, T data){
    if (r == NULL)
        cout << "No se ha encontrado el nodo con la clave" << endl;
    else if (data < r->getData()){
        cout << data << "," << r->getData()<<endl;
        Node<T>* iz;
        iz = Delete(r->getLeft(), data);
        r->setLeft(iz);
    }
    else if (data > r->getData()){
        cout << data << "," << r->getData()<<endl;
        Node<T> *dr;
        dr = Delete(root->getRight(), data);
        r->setRight(dr);
    }
    else {    // Nodo encontrado
        cout << data << "," << r->getData()<<endl;
        Node<T> *q;
        q = r;     // Nodo a quitar del árbol
        if (q->getLeft() == NULL)
            r = q->getRight(); // figura 16.30
        else if (q->getRight() == NULL)
            r = q->getLeft(); // figura 16.31
        else   {     // tiene rama izquierda y derecha
            q = replace(q);
        }
        q = NULL;
    }
    return r;
}


//----------------------BUSQUEDA----------------------//

template <class T> Node<T>* BinaryTree<T>::search(T value){
    return search(root,value);
}

template <class T> Node<T>* BinaryTree<T>::search(Node<T>* r, T value){
    if(r == NULL){
        cout << "Nodo no encontrado" << endl;
        return NULL;
    }
    else if(value == r->getData())
        return r;
    else if(value < r->getData())
        return search(r->getLeft(),value);
    else
        return search(r->getRight(), value);
}