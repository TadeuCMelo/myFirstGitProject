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



//do vasco

int main(){
    char letras[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

    srand(time(0));
    char letraEscolhida = letras[rand() % 26];
    char palpite;
    cout << "Digite ume letra de a-z: ";
    do{
        cin >> palpite;
        if (palpite < letraEscolhida){
            cout << "A letra é maior que " << palpite << ". Tente novamente: ";
        } else if(palpite > letraEscolhida){
            cout << "A letra é menor que " << palpite << ". Tente novamente: ";
        } else{
            cout << "Parabéns! Acertou a letra: " << palpite << "!";
        }
    } while  (palpite != letraEscolhida);
    return 0;
