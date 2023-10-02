#include <iostream>

using namespace std;

int main(){

    int altura;

    cout << "Digite a altura do padrao: ";
    cin >> altura;

    char caracter = 'A';

    for (int i = 1; i <= altura; i++){

        for (int j = 1; j <= i; j++){
            
            cout << caracter << "\n";
            caracter++;
        }
    cout << endl;

    }

return 0;
}
