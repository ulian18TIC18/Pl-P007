#include <iostream>

using namespace std;

int main(){
    
    int tramanhoMatriz;

    cout << "Digite o tamanho da matriz: ";
    cin >> tramanhoMatriz;

    for (int i = 0; i < tramanhoMatriz; i++){

        for (int j = 0; j < tramanhoMatriz; j++){
            if (i == 0 || i == tramanhoMatriz - 1 || j == 0 || j == tramanhoMatriz - 1){
                cout << "*\t";

            } 
            else{
                cout << " \t";

            }
        }
        cout << endl;

    }
return 0;
}