#include "Node.h"
#include <iostream>
using namespace std;

template <class T> class ListaDoble{
    private:
        Node<T> *head;
        Node<T> *tail;
        int size;

    public:
        ListaDoble();//
        ~ListaDoble();//

        void insertFirst(T data);//
        void insertLast(T data);//
        void insertAfter(Node<T> *previous,T data);//

        Node<T> *getLast();//
        Node<T> *search(T data);//
        Node<T> *get(int position);//

        void deleteNode(T data);//

        bool isEmpty();//
        void deleteList();//

        void Print();//

        int Size();
};