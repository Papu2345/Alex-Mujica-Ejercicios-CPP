#include <iostream>

using namespace std;

int main() {
    int edadPerro;
    int edadHumana;

    cout << "Ingresa la edad de tu perro: ";
    cin >> edadPerro;

    edadHumana = edadPerro * 7;

    cout << "La edad humana aproximada de tu perro es: " << edadHumana << " anos." << endl;

    return 0;
}