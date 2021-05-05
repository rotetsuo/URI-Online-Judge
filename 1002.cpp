#include <iostream>
#include <iomanip>
 
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
    cout.precision(4);
     cout << "A=" << 3.14159 * raio * raio << endl;
 
    return 0;
}