/*
*um programa que pede 2 números ao utilizador
*e apresenta no terminal a soma dos dois números.
*/
#include <iostream>

using namespace std;

int main(){

int num1, num2;

cout << "Introduza um número: ";
cin >> num1;
cout << "introduza o segundo número: ";
cin >> num2;
cout << "a soma é: "<< num1 + num2<< endl;

return 0;
}