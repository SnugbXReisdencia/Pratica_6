# include <iostream>
# include <limits>
# include <cstring>
# include <cmath>

using namespace std;

void pause();
void limpaTela();

int main(){
    limpaTela();
    double x, y, z;

    cout << "Digite o valor de x: ";
    cin >> x;

    cout << "Digite o valor de y: ";
    cin >> y;

    z = x + y;

    cout << "A soma de x e y é: " << z << endl;

    z = (x + y) / 2;
    cout << "A média de x e y é: " << z << endl;

    z = x * y;
    cout << "O produto de x e y é: " << z << endl;

    z = (x > y) ? x : y;
    cout << "O maior valor entre x e y é: " << z << endl;

    
    z = (x < y) ? x : y;
    cout << "O menor valor entre x e y é: " << z << endl;

    cout << endl;
    pause();
    return 0;
}

void pause()
{
    // cin.ignore();
    cout << "\nPressione a tecla Enter para continuar...\n";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

void limpaTela()
{
    cin.clear();

    // Verifica se a variável de ambiente WINDIR está definida (ambiente Windows)
    const char *windir = getenv("WINDIR");

    if (windir != nullptr && strlen(windir) > 0)
    {
        // Se estiver definida, estamos no Windows, então use "cls"
        system("cls");
    }
    else
    {
        // Caso contrário, estamos em um ambiente Unix/Linux, use "clear"
        system("clear");
    }
}