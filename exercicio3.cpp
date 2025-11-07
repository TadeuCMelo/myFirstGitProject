#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int TAM = 31;

struct Player {
    string nome;
    int pos;
};

Player jogadores[3] = {
    {"António", 1},
    {"Rebeca", 1},
    {"Joaquim", 1}
};


void tabela(Player jogadores[], int numJogadores) {
    for (int i = 1; i < TAM; i++) {
        bool casaOcupada = false;

        cout << "[";
        if (i < 10) cout << " "; // espaço para alinhar com números de 2 dígitos
        cout << i << "] ";

        for (int j = 0; j < numJogadores; j++) {
            if (jogadores[j].pos == i) {
                cout << jogadores[j].nome[0]; // primeira letra do nome
                casaOcupada = true;
            }
        }

        if (!casaOcupada) cout << "_";
        cout << "  ";


        if ((i + 1) % 10 == 0) cout << endl;
    }
   
}


bool moverJogador(Player &p) {

    cout << "\nToca Enter pa jogares (" << p.nome << "): ";
    cin.get();

    int dado = rand() % 6 + 1;
    p.pos += dado;

    if (p.pos > 30) p.pos = 30;

    cout << p.nome << " moveu " << dado << " casas -> posição " << p.pos << endl;


    return p.pos == 30;
}

int main() {
    srand(time(0)); 

    bool jogoAtivo = true;
    int numJogadores = 3;

    system("clear");
    tabela(jogadores, numJogadores);

    while (jogoAtivo) {
        for (int i = 0; i < numJogadores && jogoAtivo; i++) {
            bool venceu = moverJogador(jogadores[i]);
            system("clear");
            tabela(jogadores, numJogadores);

            if (venceu) {
                cout << jogadores[i].nome << " venceste o jogo!\n";
                jogoAtivo = false;
            }
        }
    }

    return 0;
}
