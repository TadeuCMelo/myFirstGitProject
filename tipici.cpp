#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    char letras[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    srand(time(0));
    char letra_certa = letras[rand() % 26], chute;

    cout << "Adivinha a letra (a-z)! Tens 4 tentativas." << endl;
    for (int i = 0; i < 4; ++i) {
        cout << "Tentativa " << i + 1 << ": ";
        cin >> chute;

        bool valido = false;
        for (char c : letras) {
            if (c == chute) {
                valido = true;
                break;
            }
        }

        if (!valido) {
            cout << "É UMA LETRA MINÚSCULA! Tenta novamente." << endl;
            --i;  
        } else if (chute == letra_certa) { 
            cout << "acertaste gostoso!" << endl;
            return 0;  
        } else { 
            cout << "A letra é " << (chute < letra_certa ? "mais alta" : "mais baixa") << "." << endl;
        }
    }

    cout << "Perdeste! A letra era '" << letra_certa << "'." << endl;
    return 0;
}
