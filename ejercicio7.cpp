#include <iostream>

using namespace std;

int main() {
    int a = 5;
    int b = 10;
    int temporal;

    cout << "Valores iniciales: a = " << a << ", b = " << b << endl;

    temporal = a; 
    a = b;        
    b = temporal; 

    cout << "Valores intercambiados: a = " << a << ", b = " << b << endl;

    return 0;
}