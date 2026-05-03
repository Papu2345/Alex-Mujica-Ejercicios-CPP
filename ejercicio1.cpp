#include <iostream>
#include <string> // Necesario para usar texto (strings)

using namespace std;

int main() {
    string nombre;

    cout << "Ingresa tu nombre: ";
    cin >> nombre; // Aquí el programa espera a que escribas

    cout << "¡Bienvenida " << nombre << " a la programacion de videojuegos!" << endl;

    return 0;
}