#include <iostream>
 
using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    string nome;
    float salario, vendas;
    cin >> nome;
    cin >> salario;
    cin >> vendas;
    cout << fixed;
    cout.precision(2);
    cout << "TOTAL = R$ " << salario + (vendas * 0.15) << endl; 
 
    return 0;
}