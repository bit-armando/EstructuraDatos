#include "Posfijo.h"

float Asignar(char x){
    if(x == '1'){return 1;}
    else if(x == '2'){return 2;}
    else if(x == '3'){return 3;}
    else if(x == '4'){return 4;}
    else if(x == '5'){return 5;}
    else if(x == '6'){return 6;}
    else if(x == '7'){return 7;}
    else if(x == '8'){return 8;}
    else if(x == '9'){return 9;}
    else if(x == '0'){return 0;}
}

int Potencia(float op1, float op2){
    if(op2 <= 0){return 1;}
    else{return op1 * Potencia(op1, op2-1);}
}

float Operacion(char x, float op1, float op2){
    if(x == '^'){return Potencia(op1,op2);}
    else if(x == '*'){return op1 * op2;}
    else if(x == '/'){return op1 / op2;}
    else if(x == '+'){return op1 + op2;}
    else if(x == '-'){return op1 - op2;}
}


float Evaluate(Stack<char> pFijo){
    Stack<float> Resultado;
    char aux, operando1, operando2;
    float cambio = 0, valor = 0;

    while(!pFijo.IsEmpty()){
        aux = pFijo.Pop();
        if(isOperando(aux)){
            cambio = Asignar(aux);
            Resultado.Push(cambio);
        }
        else{
            operando2 = Resultado.Pop();
            operando1 = Resultado.Pop();
            valor = Operacion(aux,operando1,operando2);
            Resultado.Push(valor);
        }
    }
    return Resultado.Pop();
}