// Programa básico de c++ para testar o funcionamento do computador

#include <iostream>

using namespace std; /*uma especie de casulo que protege o codigo e organizar o código como se fosse quarto*/


int main() {
    

    cout << "Hello World!" << endl; // (<< menor) (>> maior)
    

    // Adicção de números
    //cout << 3 + 3 << endl;
    // Subtração de números
    //cout << 3 - 3 << endl;
    // Multiplicação de números
    //cout << 3 * 3 << endl;
    // Divisão de números
    //cout << 5 / 3 << endl;
    // Resto da divisão
    //cout << 3 % 3 << endl;

    // Variáveis sempre minúsculas ou camel case, nunca deve começar por um número 
    int qntLivros = 5; //int é inteiro de positivos ou negativos, qntlivros nome da variável 
    int x, y, z;
    x = 25;

    cout << qntLivros * 2 << endl;
    cout << qntLivros + 5 << endl;
    cout << qntLivros - x << endl;
    cout << x + 2 << endl;

    bool isTrue = false; //vem de um matemático so tem 2 valores ou vrdd ou falso o boolian so pode ter true ou false
    bool isHigh;

    isHigh = true;

    float altura = 1.75; //float é porque leva um numero decimal na computação chamamos de numero de virgula flutuante
    float peso, teste;

    peso = 34.6;
    teste = 13.2;

    double altura2 = 1.75;
    double peso2;
    peso2 = 34.6;

    char letra = 'a'; //char representa apenas um caracter char significa character e é a mais pequena
    char letra2;
    letra2 = 'b';

    string nome = "Lucas"; // string é uma classe e é sequencias de char (const char[6])
    string sobrenome;
    sobrenome = "santos";

    cout << "Nome: " << nome << " " << sobrenome << endl;

    

    return 0;

}
/*int é uma função ,,main é a função principal a chaveta serve para criar um bloco de código e pertence sempre há função nesse caso há função main
o que tem antes dos parenteses é uma função sempre e o que tiver dentro dos parenteses também

uma função é um nome que damos a um bloco de codigo especifico */