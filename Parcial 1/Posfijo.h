#include "Balanced.h"

Stack<char> Invertir(Stack<char> x){
    Stack<char> result;
    while(!x.IsEmpty()){
        result.Push(x.Pop());
    }

    return result;
}

bool isOperando(char x){
    if(x != '+' and x != '-' and x != '*' and x != '/'
        and x != '^' and x != '(' and x != ')'){return true;}
    else{return false;}
}

bool isOperador(char x){
    if(x == '+' or x == '-' or x == '*' or x == '/'
        or x == '^'){return true;}
    else{return false;}
}

int Precedencia(char x){
    if(x == '^'){return 3;}
    else if(x == '*' or x == '/'){return 2;}
    else if(x == '+' or x == '-'){return 1;}
    else if(x == '('){return 0;}
}

Stack<char> toPosfijo(char operacion[]){
    Stack<char> pila;
    Stack<char> pFijo;
    int i = 0;
    char tope;

    while(operacion[i] != '\0'){
        
        //Mete en la expresion posfija directamente si es operando
        if(isOperando(operacion[i])){
            pFijo.Push(operacion[i]);
        }
        else if(operacion[i] == ')'){
            while(true){
                tope = pila.Pop();
                if(tope == '('){
                    break;
                }
                pFijo.Push(tope);
            }
        }
        else if(isOperador(operacion[i])){
            while(Precedencia(operacion[i]) <= Precedencia(pila.Top())){
                tope = pila.Pop();
                pFijo.Push(tope);
            }
            pila.Push(operacion[i]);
        }
        else if(operacion[i] == '('){
            pila.Push(operacion[i]);
        }

        i++;
    }

    while(!pila.IsEmpty()){
        tope = pila.Pop();
        pFijo.Push(tope);
    }

    //Invertimos la expresion Postfija por que se guardo en una pila
    pFijo = Invertir(pFijo);
    
    return pFijo;
}