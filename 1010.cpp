#include <iostream>
 
using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     int codigo1, quantidade1, codigo2, quantidade2;
     float valor1, valor2, total;
     cin >> codigo1 >> quantidade1 >> valor1;
     cin >> codigo2 >> quantidade2 >> valor2;
     total = (quantidade1 * valor1) + (quantidade2 * valor2);
     cout << fixed;
     cout.precision(2);
     cout << "VALOR A PAGAR: R$ " << total << endl;
 
    return 0;
}