#include "Node.h"
#include "../Cola/ColaMetodos.h"

template <class T> class Grafo{
    private:
        Node<T> *head;
        Node<T> *tail;
        Cola<T> cola;
        int size;

    public:
        Grafo();

        void insert(T data);

        Node<T> *search(T data);
        Node<T> *get(int position);

        void deleteNode(T data);

        bool isEmpty();
        void deleteList();

        void rrecorrerAnchura(T inicial);

        void Print();

        int Size();
};