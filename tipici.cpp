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
* Serão gerados tantos cartões quantos o utilizador indicar.
*(O utilizador poderá passar os cartões para um papel)
*
*2ª Parte
*O computador irá sortear números aleatórios de 1 a 75
*Ganha o jogador que completar o cartão de bingo primeiro.
*
*Regras do bingo:
*Não poderá haver numeros repetidos no cartão
*O cartão de bingo terá 5 linhas e 5 colunas.
*O cartão de vingo terá números de 1 a 75.
*Não podem ser sorteados números repetidos.
*/
int pedidos;
cout << "Quantos cartões deseja gerar: ";
cin >> pedidos;
srand(time(0));
for(int i = 0; i<5; i++){
    cout << rand() % 75 << "\n";
    continue;
}


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

void sorteadodica(){

    struct numeros{
        int numero;
        bool sorteado;
    };
    numeros painel[75];

    srand(time(0));

    for (int i = 0; i <= 5 ; i++){
        painel[i].numero = i;
        painel[i].sorteado = false;
        if(painel[i-1].sorteado == false)
            cout << "o numero sorteado foi" << i << endl;
    }else if{
        
    }


}


    int main() {
        sorteadodica();
        return 0;
    }








#define MAX_NUMBER       76
#define MAX_NUM_OF_CARDS 5

int tmpCard[25];

struct numero{
    int num;
    bool sts;
};

numero painel[MAX_NUMBER];

void initPainel(){

    for(int i = 0; i < MAX_NUMBER; i++){
        painel[i].num = i + 1;
        painel[i].sts = false;
    }
}

void geraCartao(){
srand(time(0));
for(int i = 0; i < 25; i++){

    tmpCard[i] = rand() % MAX_NUMBER;
        for(int j = 0; j < i; j++){
        if(tmpCard[i] == tmpCard[j]){
            i--;
            break;
            }
        }
    }
}

void printCard(){
    for(int i = 0; i < 25; i++){
        cout << tmpCard[i] << " ";
        if((i + 1)% 5 == 0){
            cout << endl;
        }
    }
}

void imprimirPainel(){
    for(int i = 0; i < MAX_NUMBER; i++){
cout << painel[i].num << " ";
if((i + 1)% 10 == 0) cout << endl;
    }
}
    //arrumar esse void sortearnumero para garantir que os numeros nao se repitam
void sortearNumero(){
    int num = rand () % MAX_NUMBER;
    //verificar se o numero ja foi sorteado
    if(painel[num-1].sts == false){
        painel[num-1].sts = true;
    }
}

int main() {
initPainel();
geraCartao();
printCard();
imprimirPainel();
for(int i = 0; i < 75; i++){
sortearNumero();
imprimirPainel();
//Delay de 2 segundos
sleep(2);
}
return 0;
    }
