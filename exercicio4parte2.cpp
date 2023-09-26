#include <iostream>
#include <cmath>
#include <regex>

using namespace std;

int main() {

    double raio, diametro, circun, area;

    cout << "Digite o valor do raio" << endl;
    cin >> raio;

    diametro = 2.0 * raio;
    cout << "O valor do diametro: "<< diametro << endl;


    circun = 2.0* 3.14 * diametro;

    cout << "O valor da circunferencia: "<< circun << endl;

    area = 3.14 * (raio * raio);

    cout << "O valor da área : "<< area << endl;

    return 0;
}
