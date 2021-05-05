#include <iostream>
 
using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     int tempo, velocidade;
     double quantidade;
     cin >> tempo;
     cin >> velocidade;
    
    cout << fixed;
    cout.precision(3);
    quantidade = tempo * velocidade / 12.0;
    cout << quantidade << endl;
 
    return 0;
}