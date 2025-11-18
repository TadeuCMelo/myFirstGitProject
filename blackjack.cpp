#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int moedas = 200;
int nivel = 0;

struct Cartas
{
    string nome;
    int num;
};

Cartas As{"As", 11};
Cartas As2{"As", 11};
Cartas Rei{"Rei", 10};
Cartas Rainha{"Rainha", 10};
Cartas Joker{"Joker",10};
Cartas Dez{"Dez", 10};
Cartas Nove{"Nove", 9};
Cartas Oito{"Oito", 8};
Cartas Sete{"Sete", 7};
Cartas Seis{"Seis", 6};
Cartas Cinco{"Cinco", 5};
Cartas Quatro{"Quatro", 4};
Cartas Tres{"Tres", 3};
Cartas Dois{"Dois", 2};

void jogoNormal(){
    char resposta;
    int cartas;
    int cartasBot;
    
    srand (time(0));
    
    cartas = rand();
    cartasBot = rand() % 21;
    cout << cartas;
    cout << "Queres aumentar(s/n)?";
    cin >> resposta;
    if(resposta == 's' || resposta == 'S'){
   
    }
 }


void telaDoJogo(){
    int resposta;
    do {
    cout << "Bem vindo ao jogo de BlackJack\n";
    cout << "Começas com " << moedas << " Moedas";
    cout << "Menu: ";
    cout << "\n1 - Jogar ";
    cout << "\n2 - Informações";
    cin >> resposta;
        switch (resposta)
        {
        case 1:
            jogoNormal();
            break;
        case 2:

            break;
        default:
            break;
        }
    }while(resposta == 0);
        
}

int main(){
    telaDoJogo();

    return 0;
}
