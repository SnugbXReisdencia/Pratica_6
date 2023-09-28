#include <iostream>
using namespace std;

int ehMaior(int n1, int n2){
    return n1 > n2 ? n1 : n2;
}

int main(){
    int number1, number2, maior;
    cout<<"Digite 2 numeros inteiros: ";
    cin>>number1>>number2;
    maior = ehMaior(number1, number2);

    number1 == number2 ? cout<<"Estes numeros sao iguais"<<endl : cout<<maior<<" e maior."<<endl;

    maior % 2 == 0 ? cout<<maior<<" eh par"<<endl : cout<<maior<<" eh impar"<<endl;

    return 0;
}