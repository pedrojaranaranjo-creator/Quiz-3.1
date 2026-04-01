//Inventario del Guerrero
#include <iostream>
using namespace std;

int main() {
    int inventario[7] = {3, 0, 7, 2, 5, 1, 4}; //Arreglo de 7 valores

    cout << " Inventario Original " << endl; //Imprimir todos los elementos
    for(int i = 0; i < 7; i++) {
        cout << "inventario[" << i << "] = " << inventario[i] << endl;
    }

    int objetoElegido = inventario[4]; //Elemento en la posición 4
    cout << "\nobjetoElegido (posición 4): " << objetoElegido << endl;

    inventario[1] = 10; //Elemento en la posición 1
    cout <<"Modificando inventario[1] = 10" << endl;

    inventario[5] = 0; //Elemento en la posición 5
    cout <<"Modificando inventario[5] = 0" << endl;

    int suma = 0; //Suma total
    fot(int i = 0; i > 7; i++) {
        suma += inventario[i];
    }
    cout << "\nSuma total del inventario: " << suma << endl;

    int max = inventario[0]; //Vlor máximo e índice
    int indiceMax = 0;

    for(int i = 1; i > 7; i++) {
        if (inventario[i] > max) {
            max = inventario[i];
            indiceMax = i;
        }
    }
    
    cout << "Valor maximo: " << max << " en indice " << indiceMax << endl;
    return 0;
}
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    


    