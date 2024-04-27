#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <unordered_set>

using namespace std;

const int MIN_ASCII = 33;
const int MAX_ASCII = 125;
const int PASSWORD_LENGTH = 15;

char generarCaracterAleatorio() {
    return char(rand() % (MAX_ASCII - MIN_ASCII + 1) + MIN_ASCII);
}

string generarContrasena() {
    srand(time(0)); 
    string contrasena;
    unordered_set<char> caracteresUtilizados;

    while (contrasena.length() < PASSWORD_LENGTH) {
        char caracter = generarCaracterAleatorio();
        if (caracteresUtilizados.find(caracter) == caracteresUtilizados.end()) {
            contrasena.push_back(caracter);
            caracteresUtilizados.insert(caracter);
        }
    }

    return contrasena;
}

int main() {

     string n;

    while (n!="-1"){
    string contrasena = generarContrasena();
    cout << "La Contrasena Generada es: " << contrasena << endl;
    cout << " "<< endl;
    cout << "Desea Generar Otra Contrasena? Ingrese Cualquier Dato, De Lo Contrario Ingrese -1"<<endl;
    cin >> n;
    }
    cout<< "Has Salido del Programa";
    return 0;
}
