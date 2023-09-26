#include <iostream>
#include <cmath>
#include <regex>

using namespace std;

int main() {
    double valor1, valor2, resultado;

    cout << "Digite um valor" << endl;
    cin >> valor1;

    cout << "Digite o segundo valor" << endl;
    cin >> valor2; 

    resultado = valor1 + valor2;
    cout << "Resultado de soma: "<< resultado << endl;

    resultado = (valor1 + valor2) / 2;
    cout << "Resultado da media: "<< resultado << endl;

    resultado = valor1 * valor2;
    cout << "Resultado do produto: "<< resultado << endl;


    if(valor2 == valor1){
        cout << "Estes nuumeros saao iguais " << endl;
    }
    else if(valor1 > valor2){
        cout << "E maior: " << valor1<< endl;
        cout << "E menor: " << valor2<< endl;
    }else if(valor2 > valor1){
        cout << "E maior: " << valor2 << endl;
        cout << "E menor: " << valor1 << endl;
    }    


    
    return 0;
}
