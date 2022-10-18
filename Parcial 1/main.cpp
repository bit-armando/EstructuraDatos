#include "Expresiones.h"

int main(){
    char exp[50] = "((5+5)*5)-(7+3)";
    Expresion obj;

    float resultado = obj.Evaluar(exp);

    cout << resultado << endl;

    return 0;
}