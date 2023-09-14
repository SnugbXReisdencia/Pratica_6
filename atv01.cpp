#include <iostream>
#include <climits>  // biblioteca que pega o valor máximo de um short int 

using namespace std;
int main() {
    
    int a, b, c;

    cout << "digite um numero inteiro" << endl;
    cin >> a;

    cout << "digite um numero inteiro" << endl;
    cin >> b;

    cout << "digite um numero inteiro" << endl;
    cin >> c;

    c = 4 * a + b / 3 - 5;  
    cout << "O valor da expressao  4 * a + b / 3 - 5 = " << c << endl;

    c = 4 * (a + b) / (3 - 5);

    cout << "O valor da expressao  4 * (a + b) / (3 - 5) = " << c << endl;

    //  4 * a + b / 3 - 5    Nesta expressão, a ordem das operações são executadas multiplicação e divisão antes da adição e subtração.    
    //  4 * (a + b) / (3 - 5) Nesta expressão,  primeiro calculamos o valor dentro dos parênteses. Depois, fazemos a multiplicação e a divisão

    c = a*a + 2*b + c;

    cout << "O valor da expressao  a*a + 2*b + c = " << c << endl;

 
   


    return 0;
}  