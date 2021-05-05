#include <iostream>
 
using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     
     int idadeDias, anos,meses,dias;
     cin >> idadeDias;
     anos = idadeDias/365;
     idadeDias = idadeDias - anos * 365;
     meses = idadeDias/30;
     idadeDias = idadeDias - meses * 30;
     dias = idadeDias;
     cout << anos << " ano(s)" << endl;
     cout << meses << " mes(es)" << endl;
     cout << dias << " dia(s)" << endl;
 
    return 0;
}