#include <iostream>
using namespace std;

class Conjunto{
    private:
        int size;
        int vector[20];
        int resultado[40];
    public:
        Conjunto();
        void Empy();
        void Add(int x);
        void Delete(int x);
        bool isEmpty();
        bool in(int x);
        int Size();
        void Print();
        int Get(int x);
};

Conjunto::Conjunto(){
    size = 0;
}

void Conjunto::Empy(){
    size = 0;
}

void Conjunto::Add(int x){
    bool agregar = true;

    for(int i = 0; i < size; i++){
        if(vector[i] == x){
            cout<<endl<<"El elemento "<< x <<" esta en la lista"<<endl;
            agregar = false;
            break;
        }
    }
    if(agregar){
        vector[size] = x;
        size++;
    }
}

void Conjunto::Delete(int x){
    for(int i = 0; i < size; i++){
        if(vector[i] == x){
            vector[i] = vector[size-1];
            size--;
            break;
        }
    }
}

bool Conjunto::isEmpty(){
    if(size == 0){
        return true;
    }
    else{
        return false;
    }
}

bool Conjunto::in(int x){
    for(int i = 0; i < size; i++){
        if(vector[i] == x){
            return true;
            break;
        }
    }
    return false;
}

int Conjunto::Size(){
    return size;
}

void Conjunto::Print(){
    cout <<endl<< "[";
    for(int i = 0; i < size; i++){
        cout << vector[i] <<", ";
    }
    cout << "]" << endl;
}

int Conjunto::Get(int x){
    if(size == 0){
        cout <<endl<<"Lista vacia"<<endl;
    }

    if(size > x){
        return vector[x];
    }
}