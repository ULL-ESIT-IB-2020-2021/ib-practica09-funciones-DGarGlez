#include "funciones.h"

bool isPrimo(int valor){

        int resto = 0;

        for(int divisor = 1; divisor < valor; divisor++){

                if(valor%divisor == 0){

                        resto = resto + 1;

                }
        }

        if(resto < 2){

                return (true);

        }
        else{
                return (false);
        }

}

int mersenne(int nPrimo){

    if(isPrimo(nPrimo)){

                int resultado = 0;

                resultado = (pow(2, nPrimo) - 1);
                
                return (resultado);
            }
}