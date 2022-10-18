#include "Pila.h"

bool isBalanced(char operacion[]){
    Stack<char> pila;
    bool valid = true;
    int i = 0;
    char aux;

    while(operacion[i] != '\0'){
        if(operacion[i] == '(' or operacion[i] == '[' or operacion[i] == '{'){
            pila.Push(operacion[i]);
        }
        else if(operacion[i] == ')' or operacion[i] == ']' or operacion[i] == '}'){
            if(pila.IsEmpty()){
                valid = false;
                break;
            }
            else{
                aux = pila.Pop();
                if(aux == '(' and operacion[i] != ')'){valid = false; break;}
                if(aux == '[' and operacion[i] != ']'){valid = false; break;}
                if(aux == '{' and operacion[i] != '}'){valid = false; break;}
            }
        }
        i++;
    }

    if(!pila.IsEmpty()){valid = false;}
    return valid;
}