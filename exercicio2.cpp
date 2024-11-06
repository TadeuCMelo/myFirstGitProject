/*
*programa para pedir ao utilizador
*um número e apresentar, posteriormente
*este número no terminal
*/

#include <iostream>


int números;

int main() {
std::cout << "Escolhe um número: ";
std::cin >> números;
std::cout << " o número introduzido foi: " << números << std::endl;
return 0;
}