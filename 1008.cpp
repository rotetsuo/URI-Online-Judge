#include <iostream>
 
using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     int a,b;
     float c, salario;
    cin >> a;
    cin >> b;
    cin >> c;
    salario = b * c;
    cout << fixed;
    cout.precision(2);
    cout << "NUMBER = " << a << endl;
    cout << "SALARY = U$ " << salario << endl;
 
    return 0;
}