#include <iostream>
#include <stdlib.h>
#include <ctype.h>
using namespace std;

int main(){

    char ch1, ch2, ch3;
    cout<<"Digite os caracteres ch1 e ch2: "<<endl;
    //b
    cin>>ch1>>ch2;
    //c
    ch3 = ch1 - 1;
    //d
    cout<<"Caractere ch3 nos formatos:"<<endl;
    cout<<"Decimal\tOctal\tHexadecimal\tCaractere"<<endl;
    cout<<dec<<int(ch3)<<'\t'<<oct<<int(ch3)<<'\t'<<hex<<int(ch3)<<'\t'<<ch3<<endl<<endl;
    //e
    isupper(ch1) ? ch3 = 'A' : ch3 = ' ';
    cout<<"Caractere ch3 de acordo com ch1 ser maiusculo: "<<ch3<<endl;
    //f
    islower(ch2) ? ch3 = 'a' : ch3 = ' ';
    cout<<"Caractere ch3 de acordo com ch2 ser maiusculo: "<<ch3<<endl;
    //g
    isdigit(ch1) || isdigit(ch2) ? ch3 = '1' : ch3 = ' ';
    cout<<"Caractere ch3 de acordo com ch1 ou ch2 serem um digito: "<<ch3<<endl<<endl;

    return 0;
}