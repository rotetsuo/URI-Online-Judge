#include <iostream>
 
using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     int segundosTotais, horas, minutos, segundos;
     cin >> segundosTotais;
     horas = segundosTotais/3600;
     segundosTotais = segundosTotais - horas *3600;
     minutos = segundosTotais/60;
     segundosTotais = segundosTotais - minutos * 60;
     cout << horas << ":" << minutos << ":" << segundosTotais << endl;
     
 
    return 0;
}