#include "Node.h"

template <class T> class Cola{
    private:
        Node<T> *head;
        Node<T> *tail;
        int size;

        void insertFirst(T data);//
        Node<T> *getLast();//

    public:
        Cola();//
        ~Cola();//

        void insert(T data);//
        Node<T> *pop();

        void deleteNode(T data);//

        bool isEmpty();//
        void deleteList();//

        void Print();//

        int Size();//
};