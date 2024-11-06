/*
*Um programa que peça 3 notas dos alunos,
de 0 a 20 e apresente a média da nota
*
*
*/
#include <iostream>

using namespace std;


int main(){

float num1, num2, num3, soma;

    cout << "Dá-me 1ª nota: ";
    cin >> num1;
    cout << "Dá-me a 2ª nota: ";
    cin >> num2;
    cout << "Dáme a 3ª nota: ";
    cin >> num3;
    
    cout << "A média é:" << (num1+num2+num3)/3 << endl; 


    return 0;
}