# include <iostream>
# include <limits>
# include <cstring>
# include <cmath>

using namespace std;

void pause();
void limpaTela();

int main() {
    limpaTela();
    double x, y;
    string quadrante;

    cout << "Digite o valor de x: ";
    cin >> x;

    cout << "Digite o valor de y: ";
    cin >> y;

    quadrante = (x > 0) ? ((y > 0) ? "primeiro quadrante" :
    ((y < 0) ? "quarto quadrante" : "sobre um dos eixos")) :
    ((x < 0) ? ((y > 0) ? "segundo quadrante" :
    ((y < 0) ? "terceiro quadrante" : "sobre um dos eixos")) :
    ((y == 0) ? "sobre o eixo x" : "sobre o eixo y"));

    cout << "O ponto (" << x << ", " << y << ") está no " << quadrante << "." << endl;
    void pause();
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