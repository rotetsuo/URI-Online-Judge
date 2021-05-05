#include <iostream>
 
using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     double raio;
     cin >> raio;
     cout << fixed;
     cout.precision(3);
     cout << "VOLUME = " << (4.0/3)*3.14159*(raio * raio * raio) << endl;
 
    return 0;
}