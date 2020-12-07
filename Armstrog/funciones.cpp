#include "funciones.h"

int isArmstrong(string number){

    int resultado = 0;

    for(int i = 0; i < number.length(); i++){

        char pepe = number[i];
        int digit = pepe - 48;

        resultado = resultado + pow(digit, number.length());

    }
    return (resultado);
}