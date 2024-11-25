#include <iostream> // inclui a biblioteca de entrada e saida padrao permitindo o cout e cin

using namespace std; // permite usar elementos do namespace std para não ficar pondo atrás do código

int main() // função principal do programa
{

    int numeros[20] = {0,1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19}; // fazendo um array de 20 valores
    for (int i = 0 ; i < 20 ; i++ ){ // criando um loop
        if(numeros[i] %2 == 0 && numeros[i] != 0)
        cout << numeros[i] << " ";
    }



    
return 0;
}