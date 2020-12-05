#include "funciones.h"

int main(int argc, char *argv[]){
    
    if (argc == 3){

        string palabra = argv[1];
        char letra;
        letra = *argv[2];

        cout << buscador(palabra, letra) << endl;

    }
    else{

        cout << "Debe introducir 2 parámetros (una palabra y una letra) para el correcto funcionamiento del programa." << endl;
    }
    return 0;
}