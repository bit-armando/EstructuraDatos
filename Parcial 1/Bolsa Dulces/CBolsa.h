#include <stdio.h>

class CDulces{
    public:
        int Azules;
        int Rojos;
        int Verdes;

        int Totales;

    CDulces(){
        Azules=0;
        Rojos=0; 
        Verdes=0;
    }
};

class CBolsa{
    private:
        CDulces dulcesitos;

    public:
        CBolsa(int azul, int rojos, int verdes){
            dulcesitos.Azules = azul;
            dulcesitos.Rojos = rojos;
            dulcesitos.Verdes = verdes;
        }

        int MeterDulces(int color, int cantidad){
            if(color == 1){
                dulcesitos.Azules += cantidad;
            }
            else if(color == 2){
                dulcesitos.Rojos += cantidad;
            }
            else if(color == 3){
                dulcesitos.Verdes += cantidad;
            }
        }
        
        int SacarDulces(int color, int cantidad){
            if(color == 1){
                dulcesitos.Azules -= cantidad;
            }
            else if(color == 2){
                dulcesitos.Rojos -= cantidad;
            }
            else if(color == 3){
                dulcesitos.Verdes -= cantidad;
            }
        }

        void Imprimir(){
            printf("\nDulces Azules: %d", dulcesitos.Azules);
            printf("\nDulces Rojos: %d", dulcesitos.Rojos);
            printf("\nDulces Verdes: %d", dulcesitos.Verdes);
        }

};