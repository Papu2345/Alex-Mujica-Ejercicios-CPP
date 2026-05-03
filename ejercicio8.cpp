#include <iostream>

using namespace std;

int main() {
    int opcion;

    
    cout << "--- MENU DE INICIO DEL JUEGO ---" << endl;
    cout << "1. Nueva Partida" << endl;
    cout << "2. Cargar Partida" << endl;
    cout << "3. Opciones" << endl;
    cout << "4. Salir" << endl;
    cout << "--------------------------------" << endl;

    cout << "Por favor, ingresa el numero de tu opcion: ";
    cin >> opcion;

    
    cout << "Has elegido la opcion: " << opcion << endl;

    return 0;
}