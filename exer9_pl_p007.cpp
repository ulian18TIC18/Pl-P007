#include <iostream>

using namespace std;

int main() {
    
    int num1;

    cout << "Digite um num1 inteiro: ";
    cin >> num1;

    int primeiro = 0, segundo = 1, proximoNum;

    cout << "Sequencia de Fibonacci ate " << num1 << ":" << endl;

    while(primeiro <= num1){

        cout << primeiro << " ";

        proximoNum = primeiro + segundo;
        primeiro = segundo;
        segundo = proximoNum;
    }

    cout << endl;

return 0;
}
