template <class T> class subNode{   
    private:
        subNode<T>* next;
        T to;
        char name;
    
    public:
        Node();
        Node(T t, char n);

        T getTo();

        subNode<T>* getNext();
        void setNext(subNode<T>* n);
};
