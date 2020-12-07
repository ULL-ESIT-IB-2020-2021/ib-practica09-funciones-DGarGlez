#include "funciones.h"

int main(int argc, char *argv[]){

    string number = argv[1];
    int valorFinal = stoi(argv[1]);

    if(valorFinal == isArmstrong(number)){

            cout << valorFinal << " is an Armstrong number" << endl;
        }
        else{

            cout << valorFinal << " is not an Armstrong number" << endl;

        }

    return 0;
}