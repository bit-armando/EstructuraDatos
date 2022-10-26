template <class T> class Node{
    private:
        T data;
        Node<T>* next;
        Node<T>* previous;

    public:
        Node(T d);

        T getData();
        void setData(T d);

        Node<T>* getNext();
        void setNext(Node<T>* n);

        Node<T>* getPrev();
        void setPrev(Node<T>* p);
};

template <class T> Node<T>::Node(T d){
    data = d;

    next = this;
    previous = this;
}

template <class T> T Node<T>::getData(){
    return data;
}

template <class T> void Node<T>::setData(T d){
    this->data = d;
}

template <class T> Node<T>* Node<T>::getNext(){
    return next;
}

template <class T> void Node<T>::setNext(Node<T>* n){
    next = n;
}

template <class T> Node<T>* Node<T>::getPrev(){
    return previous;
}

template <class T> void Node<T>::setPrev(Node<T>* p){
    previous = p;
}

template class Node<int>;
template class Node<char>;
template class Node<float>;