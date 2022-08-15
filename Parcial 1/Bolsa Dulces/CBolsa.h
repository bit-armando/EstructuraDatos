#include <stdio.h>

class CDulces{
    public:
        int Azules;
        int Rojos;
        int Verdes;

        int Totales;
};

class CBolsa{
    private:
        CDulces dulcesitos;

    public:
        CBolsa(){
            dulcesitos.Azules = 0;
            dulcesitos.Rojos = 0;
            dulcesitos.Verdes = 0;

            dulcesitos.Totales = 0;
        }

        CBolsa(int azul, int rojos, int verdes){
            dulcesitos.Azules = azul;
            dulcesitos.Rojos = rojos;
            dulcesitos.Verdes = verdes;
        }

        int MeterDulces(int color, int cantidad){
            if(color == 1){
                dulcesitos.Azules = dulcesitos.Azules + cantidad;
            }
            else if(color == 2){
                dulcesitos.Rojos = dulcesitos.Rojos + cantidad;
            }
            else if(color == 3){
                dulcesitos.Verdes = dulcesitos.Verdes + cantidad;
            }
            else{
                printf("\nDulces no insertados por opcion incorrecta");
                printf("\nOpcion de dulces incorrecta, elige (1)Azul, (2)Rojos, (3)Verdes");
            }
        }
        
        int SacarDulces(int color, int cantidad){
            if(color == 1){
                dulcesitos.Azules = dulcesitos.Azules - cantidad;
            }
            else if(color == 2){
                dulcesitos.Rojos = dulcesitos.Rojos - cantidad;
            }
            else if(color == 3){
                dulcesitos.Verdes = dulcesitos.Verdes - cantidad;
            }
            else{
                printf("\nDulces no quitados por opcion incorrecta");
                printf("\nOpcion de dulces incorrecta, elige (1)Azul, (2)Rojos, (3)Verdes");
            }
        }

        void Imprimir(){
            printf("\nDulces Azules: %d", dulcesitos.Azules);
            printf("\nDulces Rojos: %d", dulcesitos.Rojos);
            printf("\nDulces Verdes: %d", dulcesitos.Verdes);
        }

};