#include "Node.h"
#include <iostream>
using namespace std;

template <class T> class ListaDobleCircular{
    private:
        Node <T> *head;
    
    public:
        ListaDobleCircular();
        ~ListaDobleCircular();

        void insert(T data);
        void insert(Node<T>* prev, T data);

        Node<T>* search(T data);
        Node<T>* get(int position);

        void deleteNode(T data);//
        void deleteList();

        bool isEmpty();

        void PrintForward();
        void PrintBackward();
};