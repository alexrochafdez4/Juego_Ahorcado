#include <iostream>
#include <string>

using namespace std;

int main() {
    string palabra;
    cout<< " _____\n";
    cout<<" |    |\n";
    cout <<" |    O \n";
    cout<<" |   /|\\ \n";
    cout<<" |    | \n";
    cout<<" |   / \\ \n";
    cout<<" | \n";
    cout<<" | \n";
    cout<<"  ** BIENVENIDO AL JUEGO DEL AHORCADO  **\n\n";
    cout << "Ingresa la palabra a adivinar: ";  // Pide al usuario que ingrese una palabra para adivinar
    cin >> palabra;
    string secreta;
    int fallos = 0;
    int correctas = 0;
    bool psecreta[26] = {false};
    // El bucle principal del juego
    while (fallos < 6 && correctas < palabra.length()) {
        cout << "Adivina una letra: "; // Pide al usuario que ingrese una letra
        cin >> secreta;
        bool escorrecto = false; // Declara una variable para indicar si la letra ingresada es correcta o no
        for (int i = 0; i < palabra.length(); i++) {
            if (secreta[0] == palabra[i] && !psecreta[i]) { // Si la letra ingresada es igual a una letra de la palabra y no ha sido ingresada antes
                psecreta[i] = true; // Marca la letra como ingresada
                correctas++; // Aumenta la cantidad de letras correctas
                escorrecto = true; // Indica que la letra ingresada es correcta
            }
        }
        if (!escorrecto) {
            cout << "Lo siento, esa letra no esta en la palabra. Te quedan " << 6 - fallos << " intentos." << endl; // Aumenta la cantidad de fallos y muestra un mensaje en consola 
            fallos++;
            // Mostrar un dibujo nuevo del ahorcado cada vez que falles
            if (fallos == 1) {
                cout << " _____ " << endl;
                cout << " |    |" << endl;
                cout << " |    O" << endl;
                cout << " |   " << endl;
                cout << " |   " << endl;
                cout << " |   " << endl;
                cout << " |  " << endl;
                cout << " |  " << endl;
                cout << " |  " << endl;
                cout << " |  " << endl;
            }
            else if (fallos == 2) {
                cout << " _____ " << endl;
                cout << " |    |" << endl;
                cout << " |    O" << endl;
                cout << " |    |" << endl;
                cout << " |    |" << endl;
                cout << " |   " << endl;
                cout << " |  " << endl;
                cout << " |  " << endl;
                cout << " |  " << endl;
                cout << " |  " << endl;
            }
            else if (fallos == 3) {
                cout << " _____ " << endl;
                cout << " |    |" << endl;
                cout << " |    O" << endl;
                cout << " |   /|" << endl;
                cout << " |    |" << endl;
                cout << " |   " << endl;
                cout << " |  " << endl;
                cout << " |  " << endl;
                cout << " |  " << endl;
                cout << " |  " << endl;
            }
            else if (fallos == 4) {
                cout << " _____ " << endl;
                cout << " |    |" << endl;
                cout << " |    O" << endl;
                cout << " |   /|\\" << endl;
                cout << " |    |" << endl;
                cout << " |   " << endl;
                cout << " |  " << endl;
                cout << " |  " << endl;
                cout << " |  " << endl;
                cout << " |  " << endl;
            }
            else if (fallos == 5) {
                cout << " _____ " << endl;
                cout << " |    |" << endl;
                cout << " |    O" << endl;
                cout << " |   /|\\" << endl;
                cout << " |    |" << endl;
                cout << " |   /" << endl;
                cout << " |  " << endl;
                cout << " |  " << endl;
                cout << " |  " << endl;
                cout << " |  " << endl;
            }
            else if (fallos == 6) {
                cout << " _____ " << endl;
                cout << " |    |" << endl;
                cout << " |    O" << endl;
                cout << " |   /|\\" << endl;
                cout << " |    |" << endl;
                cout << " |   / \\" << endl;
                cout << " |  " << endl;
                cout << " |  " << endl;
                cout << " |  " << endl;
                cout << " |  " << endl;
                cout << "Lo siento, has perdido. La palabra era " << palabra << endl;
                break;
            }
        }
        else {
            cout << "Correcto, La letra " << secreta << " esta en la palabra." << endl;
            if (correctas == palabra.length()) {
                cout << "Felicidades, has adivinado la palabra" << endl;
                break;
            }
        }
    }
    return 0;
}
