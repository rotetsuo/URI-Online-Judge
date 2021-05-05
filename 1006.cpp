#include <iostream>
 
using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     float n1,n2,n3,media;
     cin >> n1;
     cin >> n2;
     cin >> n3;
     media = ((n1 * 2) + (n2 * 3) + (n3 * 5))/10;
     cout << fixed;
     cout.precision(1);
     cout << "MEDIA = " << media << endl;
 
    return 0;
}