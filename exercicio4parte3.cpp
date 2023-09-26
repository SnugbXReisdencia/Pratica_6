#include <iostream>

using namespace std;


int main() {
    double x, y;


    cout << "Digite o valor de x: ";
    cin >> x;
    cout << "Digite o valor de y: ";
    cin >> y;


    string quadrante = (x > 0) ? ((y > 0) ? "primeiro quadrante" : "quarto quadrante") : ((y > 0) ? "segundo quadrante" : "terceiro quadrante");


    if (x == 0 || y == 0) {
        quadrante = "sobre um dos eixos";
    }


    cout << "O ponto (" << x << ", " << y << ") esta no " << quadrante << "." << endl;

    return 0;
}
