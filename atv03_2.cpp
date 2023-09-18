// Escreva um programa que:
// a. peça ao usuário para fornecer dois números inteiros, obtenha-os da
// entrada padrão, usando cin, e imprima o maior deles seguido das
// palavras “e maior”.
// b. Se os números foram iguais, imprima a mensagem “estes
// números são iguais”. Use apenas o operador condicional (?).
// c. Identifique se o maior valor é um número par ou ímpar.

#include <iostream>

using namespace std;

int main(){
   int a, b;

    cout << "digite um numero inteiro" << endl;
    cin >> a;

    cout << "digite um numero inteiro" << endl;
    cin >> b;
    
    if(a>b){
        cout << a << " e maior " << endl;
         b % 2 == 1 ?  cout <<" e impar " : cout << " e par " << endl;
    }else if(b>a){
        cout << b << " e maior " << endl;
         a % 2  == 0 ?  cout << "e par " :  cout << " e impar " << endl;

    }
    a == b ?  cout << "estes numeros sao iguais " : cout << " estes numeros nao sao iguais " << endl ;
    
  
   
}