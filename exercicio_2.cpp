#include <iostream>
using namespace std;

int main(){

    int a, b, c;
    cout<<"Digite dois numeros inteiros: ";
    cin>>a>>b;
    c = 4 * a + b / 3 - 5;
    cout<<"Primeira expressao: "<<c<<endl;
    c = 4 * (a + b) / (3 - 5);
    cout<<"Segunda expressao: "<<c<<endl;

    /*
        As duas expressões acima tem resultados diferentes por causa
        da precedência de operadores. Os operadores * e / tem precedên-
        cia em relação aos operadores + e -, então o cálculo envolvendo
        eles é realizado primeiro. Quando as expressões envolvendo os 
        operadores + e - são colocadas entre parênteses o cálculo envol-
        vendo eles é realizado antes de qualquer cálculo fora dos parên-
        teses.
    */

    //Outra maneira de obter resultado diferente com as expressões acima
    c = c = 4 * a + b / (3 - 5);
    cout<<"Outra maneira com resultado diferente: "<<c<<endl;

    c = a * a + 2 * b + c;
    cout<<"Terceira expressão: "<<c<<endl;

    return 0;
}