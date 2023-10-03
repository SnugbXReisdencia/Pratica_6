# include <iostream>
# include <limits>
# include <cstring>
# include <cmath>

using namespace std;

void pause();
void limpaTela();

int main() {
    limpaTela();
    char ch1, ch2, ch3;
    cout << "Digite um caractere: ";
    cin >> ch1;
    cout << "Digite outro caractere: ";
    cin >> ch2;
    cout << "Os caracteres digitados foram: " << ch1 << " e " << ch2 << endl;
    ch3 = int(ch1) - 1;
    
    int(ch3) > 32 && int(ch3) < 127 ? cout << "O caractere que antecede o " << ch1 << " é: " << ch3 << endl: cout << "O caractere que antercede o " << ch1 << " não é imprimivel '_'"<< endl;
    int(ch3) > 32 && int(ch3) < 127 ? cout << "O caractere " << ch3 << " em octal é: " << oct << int(ch3) << endl: cout << "O caractere Não é imprimivel '_'"<< endl;
    int(ch3) > 32 && int(ch3) < 127 ? cout << "O caractere " << ch3 << " em hexadecimal é: " << hex << int(ch3) << endl: cout << "O caractere não é imprimivel '_'"<< endl;
    int(ch3) > 32 && int(ch3) < 127 ? cout << "O caractere " << ch3 << " em decimal é: " << dec << int(ch3) << endl: cout << "O caractere não é imprimivel '_'"<< endl;
    cout << endl;

    ch3 = int(ch2) - 1;

    int(ch3) > 32 && int(ch3) < 127 ? cout << "O caractere que precede o " << ch2 << " é: " << ch3 << endl: cout << "O caractere que succeeds o " << ch2 << " não é imprimivel '_'"<< endl;
    int(ch3) > 32 && int(ch3) < 127 ? cout << "O caractere " << ch3 << " em octal é: " << oct << int(ch3) << endl: cout << "O caractere não é imprimivel '_'"<< endl;
    int(ch3) > 32 && int(ch3) < 127 ? cout << "O caractere " << ch3 << " em hexadecimal é: " << hex << int(ch3) << endl: cout << "O caractere não é imprimivel '_'"<< endl;
    int(ch3) > 32 && int(ch3) < 127 ? cout << "O caractere " << ch3 << " em decimal é: " << dec << int(ch3) << endl: cout << "O caractere não é imprimivel '_'"<< endl;
    cout << endl;

    isupper(ch1) ? ch3 = 'A': ch3 = ' ';

    isupper(ch1) ? cout << "O caractere " << ch1 << " é maiúsculo em tão ch3 = " << ch3 << endl : cout << "O caractere " << ch1 << " não é maiúsculo em tão ch3 = ' '" << endl;

    islower(ch2) ? ch3 = 'a': ch3 = ' ';

    islower(ch2) ? cout << "O caractere " << ch2 << " é minúsculo em tão ch3 = " << ch3 << endl : cout << "O caractere " << ch2 << " não é minúsculo em tão ch3 = ' '" << endl;
    
    isdigit(ch1) && isdigit(ch2) ? ch3 = '1': ch3 = ' ';

    isdigit(ch1) && isdigit(ch2) ? cout << "O caractere " << ch1 << " e " << ch2 << " é um digito em tão ch3 = " << ch3 << endl :
     cout << "O caractere " << ch1 << " e " << ch2 << " não é um digito em ch3 = ' '" << endl;

    cout << endl;

    int nun1, nun2;
    cout << "Digite um número: ";
    cin >> nun1;
    cout << "Digite outro número: ";
    cin >> nun2;

    nun1 > nun2 ? cout << "O primeiro número " << nun1 << " é maior que o segundo número " << nun2 << endl :
     cout << "O primeiro número " << nun1 << " é menor que o segundo número " << nun2 << endl;

    nun1 == nun2 ? cout << "O primeiro número " << nun1 << " é igual ao segundo número " << nun2 << endl :
     cout << "O primeiro número " << nun1 << " é diferente do segundo número " << nun2 << endl;

    nun1 > nun2 ?
     nun1 % 2 == 0 ? cout << "O maior número = " << nun1 << " é par" << endl :
     cout << "O maior número = " << nun1 << " é impar" << endl :
    nun2 % 2 == 0 ? cout << "O maior número = " << nun2 << " é par" << endl :
     cout << "O maior número = " << nun2 << " é impar" << endl;

    pause();
    return 0;
}

void pause() {
    cin.ignore();
    cout << "\nPressione a tecla Enter para continuar...\n";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

void limpaTela() {
    cin.clear();

    // Verifica se a variável de ambiente WINDIR está definida (ambiente Windows)
    const char* windir = std::getenv("WINDIR");
    
    if (windir != nullptr && std::strlen(windir) > 0) {
        // Se estiver definida, estamos no Windows, então use "cls"
        std::system("cls");
    } else {
        // Caso contrário, estamos em um ambiente Unix/Linux, use "clear"
        std::system("clear");
    }
}
