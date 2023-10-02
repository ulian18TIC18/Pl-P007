#include <iostream>
#include <cmath>

using namespace std;

int contarDigitos(int num1){
    int contador = 0;

    while (num1 != 0){
        num1 /= 10;
        contador++;

    }
    return contador;
}

bool numeroArmstrong(int num1){

    int numOriginal = num1;
    int soma = 0;
    int numDigitos = contarDigitos(num1);

    while (num1 != 0){

        int digito = num1 % 10;
        soma += pow(digito, numDigitos);
        num1 /= 10;

    }

    return soma == numOriginal;
}

int main(){

    int num1;

    cout << "Digite um numero inteiro: ";
    cin >> num1;

    if (numeroArmstrong(num1)){
        cout << num1 << " eh um numero de Armstrong." << endl;

    } 
    else{
        cout << num1 << " nao eh um numero de Armstrong." << endl;

    }

return 0;
}