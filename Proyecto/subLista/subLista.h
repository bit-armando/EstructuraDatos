#include "subNode.h"

template <class T> class subLista{
    private:
        SubNode<T> *head;
        SubNode<T> *tail;
        int size;

        void insertFirst(T data);//
        SubNode<T> *getLast();//

    public:
        subLista();//
        ~subLista();//

        void insert(T data);//
        void deleteNode(T data);//

        bool isEmpty();//
        void deleteList();//

        void Print();//

        int Size();//
};