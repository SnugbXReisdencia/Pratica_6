#include <iostream>
#include <string>
using namespace std;

int main(){

    float x, y;
    cout<<"Digite dois valores de ponto flutuante que representam valores de um ponto em um plano caretesiano: ";
    cin>>x>>y;

    string resposta = x == 0 && y == 0 ? "Sobre os eixos" : (x > 0 ? (y > 0 ? "Primeiro quadrante" : "Quarto quadrante") : y > 0 ? "Segundo quadrante" : "Terceiro Quadrante");

    cout<<resposta<<endl;

    return 0;
}