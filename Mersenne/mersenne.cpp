#include "funciones.h"

int main(int argc, char *argv[]){
    
    if(argc == 2){

        int numero = stoi(argv[1]);
        int contador = 0;
        int nPrimo = 1;
        int resultado = 0;

        while(contador != numero){

            nPrimo++;

            resultado = mersenne(nPrimo);

            if(resultado != 0){

                cout << resultado << endl;

                contador++;
            }
        }
    }
    else{

        cout << "Debe introducir un número natural para el correcto funcionamiento del programa." << endl;
    }
    return 0;
}