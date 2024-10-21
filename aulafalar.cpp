#include <iostream>

using namespace std;

int main(){

//int time = 20;
//string result = (time < 18) ? "bom dia." : "boa noite"; // ? pergunta se time é menor que 18 vai dar bom dia e se for maior é boa noite os dois pontos
// é se for maior que 20 vai dar boa noite
//cout << result;

int day; //lêsse que está a declarar day em inteiro
cout << "Digite um número de 1 a 3: ";
cin >> day;

switch (day){ //
case 1: //caso o dia seja 1
    cout << "Domingo" << endl;
    break; //para nao parar o código e continuar ou quebra e passa pra baixo
case 2:
    cout << "Segunda" << endl;
    break;
case 3:
    cout << "Terça" << endl;
    break;
default:
cout << "Dia inválido" << endl;
}

}