#include <iostream>

using namespace std;

int main() {

    int num1, original, inverso = 0, digito;

    cout << "Digite um numumero inteiro: ";
    cin >> num1;

    original = num1;  

    while (num1 > 0) {
        digito = num1 % 10;
        inverso = inverso * 10 + digito;        
        num1 /= 10;

    }
    string resultado = (original == inverso) ? 
    "eh palindromo" : "Nao eh palindromo";

    cout << "O nummero digitado: " << resultado << endl;

    return 0;
}
