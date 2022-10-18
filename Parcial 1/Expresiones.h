#include "Evaluate.h"

class Expresion{
    public:
        float Evaluar(char Infijo[]);
};


float Expresion::Evaluar(char Infijo[]){
    Stack<char> Posfijo;
    float result = 0;
    bool balanceado = isBalanced(Infijo);
    if(balanceado){
        Posfijo = toPosfijo(Infijo);
        result = Evaluate(Posfijo);
    }
    else{
        cout << "Expresion no balanceada en parentesis"<< endl;
    }

    return result;
}
