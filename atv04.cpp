// ● Escreva um programa que
// a. Declare três variáveis de tipo double, vamos chamar de x, y e z
// mas você pode escolher outro identificador se achar mais apropriado;
// b. Peça ao usuário para digitar dois números de ponto flutuante,
// obtenha-os da entrada padrão, usando scanf, e atribua os valores
// digitados às variáveis x e y respectivamente;
// c. Atribua à variável z a somas das variáveis a e b, imprima o resultado
// na tela;
// d. Atribua à variável z a média das variáveis x e y, imprima o resultado
// na tela;
// e. Atribua à variável z o produto entre as variáveis x e y, imprima o
// resultado na tela;
// f. Atribua à variável z o maior valor entre as variáveis x e y, imprima o
// resultado na tela;
// g. Atribua à variável z o menor valor entre as variáveis x e y, imprima o
// resultado na tela;
// Residência em Tecnologia da Informação e Comunicação
// ● Escreva um programa que leia da entrada padrão o raio de um círculo e
// imprima:
// a. Seu diâmetro;
// b. O valor de sua circunferência (perímetro);
// c. Sua área.
// ● Escreva um programa que leia os valores (x, y) de um ponto do plano e
// informe em qual quadrante o ponto se encontra. Use apenas o operador
// condicional (?). Lembre que um ponto, no plano cartesiano, pode estar no
// primeiro quadrante ( se x> 0 e y>0), no segundo quadrante ( se x<0 e y>0),
// no terceiro quadrante ( se x<0 e y<0), no quarto quadrante (se x>0 e y<0) ou
// sobre um dos eixos (caso x=0 ou y=0).

#include <iostream>

using namespace std;

int main(){
// a
    double x, y, z;
//b
    cout << "digite uma letra" << endl;
    cin >> x;

    cout << "digite uma letra" << endl;
    cin >> y;
//c
    z = x+y;
    cout << "soma x e y = " << z << endl;
//d
    z = z/2;
    cout << "media x e y = " << z << endl; 
 //e
    z = x*y;
    cout << "produto x e y = " << z << endl;
//f
    if(x>y){
        z = x;
         cout << " x e maior que y = " << z << endl;
    }
    else{
        z = y;
        cout << " y e maior que x = " << z << endl;
    }    
//g
    if(x<y){
        z = x;
        cout << " x e menor que y = " << z << endl;
    }
    else{
        z = y;
        cout << " y e menor que x = " << z << endl;
    }    
    return 0;
}