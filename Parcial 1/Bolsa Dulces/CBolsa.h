#include<stdio.h>

class CBolsa{
    private:
        int Azules;
        int Rojos;
        int Verdes;

        int Totales;

    public:
        CBolsa(int azules, int rojos, int verdes){
            Azules = azules;
            Rojos = rojos;
            Verdes = verdes;

            Totales = Azules + Verdes + Rojos;
        }

        int MeterDulces(int color, int cantidad){
            if(color == 1){
                Azules = Azules + cantidad;
            }
            else if(color == 2){
                Rojos = Rojos + cantidad;
            }
            else if(color == 3){
                Verdes = Verdes + cantidad;
            }
            else{
                printf("\nDulces no insertados por opcion incorrecta");
                printf("\nOpcion de dulces incorrecta, elige (1)Azul, (2)Rojos, (3)Verdes");
            }
        }
        
        int SacarDulces(int color, int cantidad){
            if(color == 1){
                Azules = Azules - cantidad;
            }
            else if(color == 2){
                Rojos = Rojos - cantidad;
            }
            else if(color == 3){
                Verdes = Verdes - cantidad;
            }
            else{
                printf("\nDulces no quitados por opcion incorrecta");
                printf("\nOpcion de dulces incorrecta, elige (1)Azul, (2)Rojos, (3)Verdes");
            }
        }

        void Imprimir(){
            printf("\nDulces Azules: %d", Azules);
            printf("\nDulces Rojos: %d", Rojos);
            printf("\nDulces Verdes: %d", Verdes);
        }

};