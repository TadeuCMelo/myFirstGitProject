#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    char alfabeto[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    srand(time(0));
    char maquina = alfabeto[rand() % 26];
    
    char jogador;
    for (int tentativas = 0; tentativas < 5; tentativas++) {
        cout << "Tentativa " << tentativas + 1 << "\n"<< "escreve uma letra: ";
        cin >> jogador;
        
        if (jogador == maquina) {
            cout << "Parabéns acertaste!" << endl;
            return 0;
        }
        cout << (jogador < maquina ? "Maior" : "Menor") << endl;
    }
    
    cout << "Perdeste a letra era: " << maquina << endl;
    return 0;
}
