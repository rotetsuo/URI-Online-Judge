#include <iostream>
 
using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
 
    float a,b,c,triangulo,circulo,trapezio,quadrado,retangulo;
    cin >> a >> b >> c;
    cout << fixed;
    cout.precision(3);
    triangulo = (a*c)/2;
    circulo = 3.14159 * (c*c);
    trapezio = (a+b)*c/2;
    quadrado = b *b;
    retangulo = a * b;
    cout  << "TRIANGULO: " << triangulo << endl;
    cout << "CIRCULO: " << circulo << endl;
    cout << "TRAPEZIO: " << trapezio << endl;
    cout << "QUADRADO: " << quadrado << endl;
    cout << "RETANGULO: " << retangulo << endl;
    
    return 0;
}