#include <iostream>

using namespace std;

int main (){

    int mult3 = 3, mult5 = 5;
    string cha1 = "Fizz", cha2 = "Buzz";

    for( int num1 = 1; num1<=100 ; num1++){
        if((num1%mult3) == 0){
            cout << cha1 ; 
        }
        else if((num1%mult5) == 0){
            cout << cha2 ;

        }
        else{
            cout << num1;

        }
    cout << endl;

    }

return 0;
}