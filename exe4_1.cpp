# include <iostream>
# include <limits>
# include <cstring>
# include <cmath>

using namespace std;

void pause();
void limpaTela();

int main() {
    limpaTela();
    double raio;

    cout << "Digite o raio do círculo: ";
    cin >> raio;

    double diametro = 2 * raio;
    cout << "Diâmetro do círculo: " << diametro << endl;

    double circunferencia = 2 * M_PI * raio;
    cout << "Circunferência do círculo: " << circunferencia << endl;

    double area = M_PI * pow(raio, 2);
    cout << "Área do círculo: " << area << endl;
    
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