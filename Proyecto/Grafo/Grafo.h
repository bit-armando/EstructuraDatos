#include "Node.h"

template <class T> class Grafo{
    private:
        Node<T> *head;
        int size;

    public:
        Grafo();

        void insert(T data);

        Node<T> *search(T data);
        Node<T> *get(int position);

        void deleteNode(T data);

        bool isEmpty();
        void deleteList();

        void Print();

        int Size();
};