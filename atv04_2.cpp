// Escreva um programa que leia da entrada padrão o raio de um círculo e
// imprima:
// a. Seu diâmetro;
// b. O valor de sua circunferência (perímetro);
// c. Sua área.


#include <iostream>
#include <cmath>

using namespace std;

int main(){

     double raio;

    // Solicitar ao usuário o raio do círculo
    cout << "Digite oum numero para raio  ";
    cin >> raio;

    
    double diametro = 2 * raio;  //saber o diamentro = multiplicar o raio por 2
    cout << "Diametro: " << diametro << endl;

    // pagar a circunferência (perímetro)
    double circunferencia = 2 * M_PI * raio; 
    cout << "Circunferencia (Perimetro): " << circunferencia << endl;

    // para calcular Área = π * raio^2
    double area = M_PI * pow(raio, 2); // funçao pow  calcula a potência ///// double pow(double base, double exponent);
    cout << "Area: " << area << endl;


    return 0;
}