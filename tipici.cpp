#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
void tpcJogoAdivinhaLetra(){
/*
* Jogo adivinha letra
*
* Terás um array com as letras minúsculas do alfabeto e o computador escolherá uma letra aleatória.
*
* O jogador terá que adivinhar a letra escolhida pelo computador.
*
* O jogador terá que digitar uma letra e o computador dirá se a letra é maior ou menor que a letra escolhida.
*
* O jogo termina quando o jogador acertar a letra escolhida.
*
*/

    char letras[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

    srand(time(0));
    char aleatoria = letras[rand() % 26];
    char palpite;
    int tentativas = 0;

    system("clear");
    while(true){
        cout << "Escreve uma letra: ";
        cin >> palpite;
        tentativas++;

        if (palpite == aleatoria){
            cout << "Parabéns acertaste a letra" << aleatoria << "!\n";
        }else if(palpite > aleatoria){
            cout << "a letra " << palpite << " é maior" << endl;
        } else {
            cout << "a letra " << palpite << " é menor" << endl;
        }
    }
}


void tbuada(){
int num;
cout << "Digite um número: ";
cin >> num;

for(int i=0 ; i <= 10 ; i++) cout << num << " x " << i << " = " << num*i << endl;

}

void codigo() {
cout << "Números: ";
for(int i = 0; i<5; i++) cout << rand() % 45 << "\n";
cout << endl;
cout << "Estrelas: ";
for(int i= 0; i<2; i++) cout << rand() % 12 << "\n";
cout << endl;
}

void bingo(){
/*
*Jogo do Bingo
*
*1ª Parte
*Será pedido ao utilizador quantos cartões de bingo ele deseja gerar.
*Cada cartão de bingo terá 5 linhas e 5 colunas.
*preenchidos com números aleatórios de 1 a 75.
*
* Serão gerados tantos cartões quando o utilizador indicar.
*(O utilizador poderá passar os cartões para um papel)
*
*2ª Parte
*O computador irá sortear números aleatórios de 1 a 75
*Ganha o jogador que completar o cartão de bingo primeiro.
*
*Regras do bingo:
*Não poderá havern +umeros repetidos no cartão
*O cartão de bingo terá 5 linhas e 5 colunas.
*O cartão de vingo terá números de 1 a 75.
*Não podem ser sorteados números repetidos.
*/



}




void inverteNome() {

  string nome;
    cout << "Digite seu Nome: ";
    cin >> nome;

int num = nome.length();

for(int x = num ; x >= 0 ; x--){
cout << nome[x];
    }
    cout << endl;

}

    int main() {
        codigo();
        return 0;
    }
