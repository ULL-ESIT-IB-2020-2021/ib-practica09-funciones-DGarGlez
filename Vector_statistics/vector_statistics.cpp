#include "funciones.h"

int main(int argc, char *argv[]){

    if(argc == 4){

        srand((unsigned) time(0));
        int N = stoi(argv[1]);
        int M = stoi(argv[2]);
        int P = stoi(argv[3]);
        double med = 0;
        int max = 0;
        int min = RAND_MAX;
        int suma = 0;
        int producto = 1;

        double vector[N];
        
        for(int i = 0; i < N; i++){

            vector[i] = ((rand() % P) + M);

            cout << "Valor chivato " << vector[i] << endl;

            suma = suma + vector[i];

            producto = producto * vector[i];

            if(min > vector[i]){

                min = 0;
                min = vector[i];
            }

            if(max < vector[i]){
                
                max = 0;
                max = vector[i];
            }
        }

        cout << "Valor máximo: " << max << endl;
        cout << "Valor mínimo: " << min << endl;

        for(int i = 0; i < N; i++){

            med = med + vector[i];
        }

        med = med / N;

        cout << "Valor de la media: " << med << endl;
        cout << "Valor de la suma: " << suma << endl;
        cout << "Valor del producto: " << producto << endl;
    }
    return 0;
}