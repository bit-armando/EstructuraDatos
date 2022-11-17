#include "BinaryTree.h"

int main(){

    BinaryTree<string> a;
        
    Node<string> *n1 = a.add(NULL, "Meria", NULL);
    Node<string> *n2 = a.add(NULL, "Rodrigo", NULL);
    Node<string> *n3 = a.add(n1, "Esperanza", n2);

    n1 = a.add(NULL, "Anyora", NULL);
    n2 = a.add(NULL, "Abel", NULL);
    Node<string> *n4 = a.add(n1, "M Jesus", n2);   
    n1 = a.add(n3, "Esperanza2", n3);      
    
    a.setRoot(n1);
    return 0;
}