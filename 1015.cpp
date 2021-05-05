#include <iostream>
#include <math.h>
using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     double x1,x2,y1,y2,distancia;
     cin >> x1 >> y1;
     cin >> x2 >> y2;
     distancia = sqrt(((x2 - x1) * (x2 - x1) ) + ((y2 - y1) * (y2 - y1)));
     cout << fixed;
     cout.precision(4);
     cout << distancia << endl;
 
    return 0;
}