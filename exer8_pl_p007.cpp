#include <iostream>

using namespace std;

int main(){

    int num1;

    cout << "Digite um numero inteiro: ";
    cin >> num1;

    int somaDivisores = 0;

    for (int i = 1; i <= num1 / 2; i++){

        if (num1 % i == 0){
            somaDivisores += i;

        }
    }

    if (somaDivisores == num1){
        cout << num1 << " eh um nummero perfeito." << endl;

    } 
    else{
        cout << num1 << " nao eh um numero perfeito." << endl;

    }

return 0;
}