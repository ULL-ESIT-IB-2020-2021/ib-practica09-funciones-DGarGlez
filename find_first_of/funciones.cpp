#include "funciones.h"

int buscador(string palabra, char letra){
    
    for(int i = 0; i < palabra.length(); i++){

            if(letra == palabra[i]){

                return (i);
            }
            
        }
    return (-1);
}