#include <iostream>
using namespace std;

const int TAM = 50;
const int InitialValue = 0;

template<class T>class Stack{
    private:
        int TOP;
        T arrStack[TAM];
    
    public:
        Stack();
        bool Push(T element);
        T Pop();
        void Empty();
        T Top();
        bool IsEmpty();
        bool IsFull();
        void Print();
        bool Size();
};

template<class T> Stack<T>::Stack(){
    TOP = InitialValue;
}

template<class T> void Stack<T>::Empty() {
    TOP = 0;
}

template<class T> void Stack<T>::Print(){
    cout<<"[";
    for(int i = TOP - 1; i >=0; i--){
        cout <<arrStack[i]<<", ";
    }
    cout<<"]"<<endl;
}

template<class T> bool Stack<T>::IsEmpty(){
    if(TOP == 0){return true;}
    else{return false;}
}

template<class T> bool Stack<T>::IsFull(){
    if(TOP == 50){return true;}
    else{return false;}
}

template<class T> bool Stack<T>::Size(){
    return TOP;
}

template<class T> T Stack<T>::Top(){
    return arrStack[TOP - 1];
}

template<class T> T Stack<T>::Pop(){
    if(TOP != 0){
        TOP--;
        return arrStack[TOP];
    }
    else{
        cout<<"Underflow!"<<endl;
    }
}

template<class T> bool Stack<T>::Push(T element){
    if(TOP != TAM){
        arrStack[TOP] = element;
        TOP++;
        return true;
    }
    else{
        cout<<"Overflow!"<<endl;
        return false;
    }
}

template class Stack<float>;
template class Stack<int>;
template class Stack<char>;