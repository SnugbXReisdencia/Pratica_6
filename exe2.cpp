# include <iostream>
# include <limits>
# include <cstring>
# include <cmath>

using namespace std;

void pause();
void limpaTela();

int main() {
    limpaTela();

    int a, b, c, resu;

    cout << "Digite dois numeros inteiros a e b: " << endl;
    cout << "Valor de a: "; 
    cin >> a;    
    cout << "Valor de b: ";
    cin >> b;

    c = 4 * a + b/3 - 5;
    cout << "4*" << a << " + " <<  b  << " / 3 - 5 = " << c << endl;

    c = 4 * (a + b) / (3 - 5);
    cout << "4 * (" << a << " + " <<  b  << ") / (3 - 5) = " << c << endl;

    // O resultado das operações acima é diferente por conta da ordem de precedencia.

    resu = pow(a,2) + 2 * b + c;
    cout << a << "^2 + 2 *" << b << " + " << c << " = " << resu << endl;

    
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
