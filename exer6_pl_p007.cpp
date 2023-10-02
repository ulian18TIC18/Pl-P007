#include <iostream>
#include <iomanip> 

using namespace std;

int main(){

    int matricula;
    double nota1, nota2, nota3, media;
    char continuar;

    do{
        cout << "Digite a matricula do aluno (apenas numeros): ";
        cin >> matricula;

        cout << "Digite a nota 1 do aluno: ";
        cin >> nota1;

        cout << "Digite a nota 2 do aluno: ";
        cin >> nota2;

        cout << "Digite a nota 3 do aluno: ";
        cin >> nota3;

        media = (nota1 + nota2 + nota3) / 3.0;

        cout << fixed << setprecision(1); 
        cout << "MATRICULA\t\tNOTA1\tNOTA2\tNOTA3\tMEDIA" << endl;
        cout << "======================================================" << endl;
        cout << matricula << "\t\t" << " " << nota1 << "\t" << " " << nota2 
        << "\t" << " " << nota3 << "\t" << media << endl;

        cout << "\nDeseja cadastrar outro aluno? (S/N): ";
        cin >> continuar;

    } 
    while(continuar == 'S' || continuar == 's');

return 0;
}