#include <iostream>
 
using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    float n1, n2, media;
    cin >> n1;
    cin >> n2;
    media = ((n1 * 3.5) + (n2 * 7.5))/11;
    cout << fixed;
    cout.precision(5);
    cout << "MEDIA = " << media << endl;
 
    return 0;
}