#include <iostream>
#include <cmath>
#include <regex>

using namespace std;

int main() {
    char ch1, ch2, ch3;

    cout << "Digite o  um caracter" << endl;
    cin >> ch1;

    cout << "Digite outro caracter" << endl;
    cin >> ch2;  
    // questão a, b, c

    regex regex("[a-zA-Z]");
    if (regex_match(string(1, ch1), regex)) {
       cout << "e um char."<< endl;

        if(ch1 == 'a' ){
            ch3 = 'z';
        }
        else if(ch1 == 'A'){
            ch3 = 'Z';
        }else{
            ch3 = ch1 + (-1);
        }
    } else {
       ch3 = '_';
       cout << "ch1 nao e um char." << ch3 << endl;
    }

    cout << "caracter : " << ch3 << endl;
    cout << "numerico : " << int(ch3) << endl;
    cout << "Octal : " << oct << int(ch3) << endl;
    cout << "Hexadecimal : " << hex << int(ch3) << endl;


    // questão letra D
    if (regex_match(string(1, ch2), regex)) {
        cout <<"----------------------------" << endl;
        cout << "ch2 e um char."<< endl;

        if(ch2 == 'a' ){
            ch3 = 'z';
        }
        else if(ch2 == 'A'){
            ch3 = 'Z';
        }else{
            ch3 = ch2 + (-1);
        }
    } else {

        ch3 = '_';
        cout << "=================================== " <<  endl;
        cout << "ch2 nao e um char." << ch3 << endl;
    }

    cout << "caracter : " << ch3 << endl;
    cout << "numerico : " << int(ch3) << endl;
    cout << "Octal : " << oct << int(ch3) << endl;
    cout << "Hexadecimal : " << hex << int(ch3) << endl;

    // Questão E
    ch3 = isupper(ch1) ? 'A' : ' ';

    cout << "Uso de operador condicional (?) do valor ch1: " << ch3 << endl;

    // Questão F
    ch3 = isupper(ch2) ? 'a' : ' ';

    cout << "Uso de operador condicional (?) do valor ch2: " << ch3 << endl;

    // Questão G
    ch3 = isdigit(ch1) ? '1' : ' ';

    cout << "verifica digito ch1: " << ch3 << endl;



    ch3 = isdigit(ch2) ? '1' : ' ';

    cout << "verifica digito ch2: " << ch3 << endl;



    //-----------------------------------------------------------------------------------------------//     
    int valor1, valor2, maior =0;

    cout << "Digite um valor" << endl;
    cin >> valor1;

    cout << "Digite o segundo valor" << endl;
    cin >> valor2; 

    maior = valor1;
    if(valor2 == valor1){
        cout << " estes nuumeros saao iguais " << endl;
    }
    if(maior > valor2){

        cout << " É maior: " << maior<< endl;

    }else{
        cout << " É maior: " << valor2 << endl;
    }
    return 0;
}
