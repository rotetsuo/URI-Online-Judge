#include <iostream>
 
using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     
     int distancia;
     float gasto, media;
     cin >> distancia;
     cin >> gasto;
    media = distancia/gasto;
    cout << fixed;
    cout.precision(3);
    cout << media << " km/l" << endl;
 
    return 0;
}