/*
*um array com 10 valores de virgula flutuante
*e apresentar am média dos valores
*
*/
#include <iostream>

using namespace std;

float coisa[10] = {13,17,21,34,56.2,13.7,27.3,11.2,3,2};

int main() {

    float media = 0, soma=0;

for(int i = 0; i < 10 ; i++){
    soma += coisa[i];
}
cout << soma/10 << endl;


return 0;
}
