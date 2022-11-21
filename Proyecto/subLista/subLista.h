#include "subNode.h"

template<class T> class subLista{
    private:
        subNode<T> *head;
    
    public:
        subLista();
        void insert(T t, char n);
        subNode<T> *get(int position);
};