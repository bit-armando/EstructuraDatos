#include "NodeCola.h"

template <class T> class Cola{
    private:
        NodeCola<T> *head;
        NodeCola<T> *tail;
        int size;

        void insertFirst(T data);//
        NodeCola<T> *getLast();//

    public:
        Cola();//
        ~Cola();//

        void insert(T data);//
        NodeCola<T> *pop();

        void deleteNode(T data);//

        bool isEmpty();//
        void deleteList();//

        void Print();//

        int Size();//
};