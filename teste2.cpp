#include <iostream>

using namespace std;

int main() {

    // 2 * pi * r
    const float PI= 3.1416; //constantes nao podem ser mudados os valores e são sempre maiúsculas
    //diferença entre constantes e variaveis a constante nao pode mudar o valor
    const int X= 2;
    
    float valor;

    cout << "indique o valor do raio:";
    cin >> valor; //cin vai dar um input

    cout << X * PI * 5 << endl;

int x=1,y=5,z=9;
int m;
char abc = 'a';


m= 10;




 




    //operadores lógicos:
    // +=      a = a + n;
    // ==     igual (compara)
    // !=     diferente (ponto de exclamação (!) é a diferença)
    // >      maior
    // <      menor
    // >=     maior ou igual
    // <=     menor ou igual
    // &&     significa "e lêsse i"
    // ||(chama-se pipes) significa ou     

    if( x == 1 || y == 5 ) { // o if é um bloco de codigo que é executado se uma determinada condição for verdadeira
        cout << "x é igual a 1 e y é igual a 5" << endl;
    }else{ // caso contrário
        cout << "x não é igual a 1 e y não é igual a 5" << endl;
    }

    return 0;   
    }