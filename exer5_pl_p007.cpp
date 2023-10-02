#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    
    srand(static_cast<unsigned int>(time(0)));

    int numSecreto = rand() % 100 + 1;

    int palpite, tentativas = 0;

    cout << "Bem-vindo ao jogo de adivinhacao!" << endl;

    do{        
        cout << "Digite seu palpite (entre 1 e 100): ";
        cin >> palpite;
        
        tentativas++;

        if (palpite > numSecreto){
            cout << "Tentativa acima do valor. Tente novamente." << endl;

        } 
        else if (palpite < numSecreto){
            cout << "Tentativa abaixo do valor. Tente novamente." << endl;
            
        } 
        else{
            cout << "Parabéns! Você acertou o número em " << tentativas            
            << " tentativas." << endl;

        }
    } 
    while (palpite != numSecreto);

return 0;
}
