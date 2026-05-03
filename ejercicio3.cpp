#include <iostream>
using namespace std;

int main() {
    float velocidad = 2.5f;   
    float fps = 60.0f;        
    float distancia;

    distancia = velocidad * fps;

    cout << "La distancia recorrida en 1 segundo es: " << distancia << endl;

    return 0;
}
