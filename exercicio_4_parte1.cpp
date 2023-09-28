#include <iostream>
#include <stdio.h>
using namespace std;

float maiorValor(float x, float y);
float menorValor(float x, float y);

int main(){

    float x, y, z;
    cout<<"Digite 2 valores de ponto flutuante: "<<endl;
    scanf("%f", &x);
    scanf("%f", &y);
    z = x + y;
    cout<<"A soma de "<<x<<" + "<<y<<" = "<<z<<endl;
    z = (x + y) / 2;
    cout<<"A media de "<<x<<" + "<<y<<" = "<<z<<endl;
    z = x * y;
    cout<<"O produto de "<<x<<" * "<<y<<" = "<<z<<endl;
    z = maiorValor(x, y);
    cout<<"O maior valor entre "<<x<<" e "<<y<<" = "<<z<<endl;
    z = menorValor(x, y);
    cout<<"O menor valor entre "<<x<<" e "<<y<<" = "<<z<<endl;
    
    return 0;
}

float maiorValor(float x, float y){
    return x > y ? x : y;
}

float menorValor(float x, float y){
    return x < y ? x : y;
}