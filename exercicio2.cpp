#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a, b, c, x;
    cout << "Digite o primeira valor" << endl;
    cin >> a;

    cout << "Digite o segundo valor" << endl;
    cin >> b;

    
    c = 4 * a + b / 3 -5;
    cout << "O valor do calculo 4 * a + b / 3 -5 e: " << c << endl;

    c = 4 * (a + b) /(3 -5);

    cout << "O valor do calculo 4 * (a + b) /(3 -5) e: " << c << endl;

    //RESPOSTA DA LETRA F: A  ordem correta para executar as operações matemáticas começa pelos parêntesis, expoentes, multiplicação e divisões e por ultimo somas e subtrações
    // o calculo com a expressão 4 * 𝑎 + 𝑏 / 3 − 5, começou a executar pela  multiplicação e divisões e por ultimo somas e subtrações
    // o calculo com a expressão 4 * (𝑎 + 𝑏) / (3 − 5), começou a executar pelos parêntesis, e depois  multiplicação e divisões. Por esse motivo os resultados foram diferentes.
    
    // questão letra g
    x = a*a + 2 * b + c;
    
    cout << "O valor do calculo " << x << endl;


    return 0;
}
