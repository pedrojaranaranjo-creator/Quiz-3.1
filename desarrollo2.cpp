//El Mapa del Dungeon
#include <iostream>
using namespace std;

int main(){ //Declara una matriz
    int mapa [3][4] = {
        {2, 0, 5, 1},
        {3, 8, 0, 4},
        {1, 6, 7, 0}
    };

    cout << "=== Mapa Original ===" << endl; //Formato de tabla
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            cout << mapa[i][j] << "\t";
        }
        cout << endl;
    }
    
    mapa[0][2] = 9; // Modifica el elemento en la posición
    cout << "Modificando mapa[0][2] = 9" << endl;

    mapa[2][3] = 3;
    cout << "Modificando mapa[2][3] = 3" << endl;

    cout << "\nPromedio por fila" << endl; //Promedio de cada fila
    for(int i = 0; i < 3; i++) {
        int suma = 0;
        for(int j = 0; j < 4; j++) {
            suma += mapa[i][j];
        }
        float promedio = (float)suma / 4;
        cout << "Fila " << i << ": " << promedio << endl;
    
    }
    
    int max = mapa[0][0]; 
    int filaMax = 0;
    int colMax = 0;

    for(int i = 0; i < 3; i++) { //Elemento mayor de toda la matri
        for(int j = 0; j < 4; j++) {
            if(mapa[i][j] > max) {
                max = mapa[i][j];
                filaMax = i;
                colMax = j;
            }
        }
    }

    cout << "\n=== Maximo de la matriz ===" << endl;
    cout << "Valor maximo: " << max << " en posicion [" << filaMax << "][" << colMax << "]" << endl;

    cout << "\n=== Mapa Actualizado ===" << endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            cout << mapa[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}