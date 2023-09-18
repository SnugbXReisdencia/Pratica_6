// Exercício 3: Operações com caracteres
// ● Escreva um programa que
// a. Declare três variáveis de tipo char, vamos chamar de ch1, ch2 e
// ch3 mas você pode escolher outro identificador se achar mais
// apropriado;
// b. Peça ao usuário para digitar dois caracteres, obtenha-os da entrada
// padrão, usando cin, e atribua os valores digitados às variáveis ch1 e
// ch2 respectivamente;
// c. Atribua à variável ch3 o caractere que antecede ao caractere ch1,
// imprima na tela, utilizando cout, o caractere em formato numérico
// decimal, octal, hexadecimal e como caractere; (caso ch3 não seja um
// caractere imprimível, substitua ele pelo caractere '_')
// d. Atribua à variável ch3 o caractere que precede ao caractere ch2,
// imprima na tela, utilizando printf, o caractere em formato numérico
// decimal, octal, hexadecimal e como caractere; (caso ch3 não seja um
// caractere imprimível, substitua ele pelo caractere '_')
// e. Atribua à variável ch3 o valor 'A' se o caractere ch1 for uma letra
// maiúscula e o valor ' '(caractere espaço vazio) caso contrário. Use o
// operador condicional (?) com esta finalidade. Imprima o valor de ch3
// na tela;
// f. Atribua à variável ch3 o valor 'a' se o caractere ch2 for uma letra
// minúscula e o valor ' '(caractere espaço vazio) caso contrário. Use o
// operador condicional (?) com esta finalidade. Imprima o valor de ch3
// na tela;
// g. Atribua à variável ch3 o valor '1' se o caractere ch1 ou o caractere
// ch2 forem um dígito e o valor ' '(caractere espaço vazio) caso
// contrário. Use o operador condicional (?) com esta finalidade.
// Imprima o valor de ch3 na tela;

#include <iostream>

using namespace std;

int main(){
    char ch1, ch2, ch3;

     cout << "digite uma letra" << endl;
    cin >> ch1;

    cout << "digite uma letra" << endl;
    cin >> ch2;

    
    if(isprint(ch1)){
        cout << "Caractere em ch1 " << ch1 << " decimal: " << int(ch1) << " octal " << oct << int(ch1) << " hexadecimal " << hex << int(ch1) << endl;
        ch3 = int(ch1 -1);
        cout << "Caractere  em ch3 anterior a ch1 " << ch3 << " decimal: " << int(ch3) << " octal " << oct << int(ch3) << " hexadecimal " << hex << int(ch3) << endl;
         ch3 = int(ch1 +1);
        cout << "Caractere  em ch3 posterior a ch1 " << ch3 << " decimal: " << int(ch3) << " octal " << oct << int(ch3) << " hexadecimal " << hex << int(ch3) << endl;
    }else{
         cout << "nao eh emprimivel" << endl;
         ch3 = '_';
    }

    // if( ch3 = (isupper(ch1))){
    //     ch3 = 'A';
    // }else{
    //     ch3 =' ';
    // }
    ch3 = (isupper(ch1)) ? 'A' : ' ';

    ch3 = (isdigit(ch1) || isdigit(ch2)) ? '1' : ' ';

     cout << "Caractere  em ch3 e agora " << ch3 << endl;
     
    return 0;
}