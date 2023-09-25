#include <iostream>
#include <cmath>
#include <regex>

using namespace std;

int main() {

    int valor1, valor2;

    cout << "Digite um valor" << endl;
    cin >> valor1;

    cout << "Digite o segundo valor" << endl;
    cin >> valor2; 


    if(valor2 == valor1){
        cout << "Estes nuumeros saao iguais " << endl;
    }
    else if(valor1 > valor2){
        cout << "E maior: " << valor1<< endl;
    }else if(valor2 > valor1){
        cout << "E maior: " << valor2 << endl;
    }
    return 0;
}
