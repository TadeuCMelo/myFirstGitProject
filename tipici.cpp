#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    char letras[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

    srand(time(0));
    char letraEscolhida = letras[rand() % 26];
    char palpite;
    cout << "escreve uma letra de a-z: ";
    do{
        cin >> palpite;
        if (palpite < letraEscolhida){
            cout << "A letra é maior que " << palpite << ". Tente novamente: ";
        } else if(palpite > letraEscolhida){
            cout << "A letra é menor que " << palpite << ". Tente novamente: ";
        } else{
            cout << "Parabéns acertaste a letra: " << palpite << "!";
        }
    } while  (palpite != letraEscolhida);
    return 0;
}
