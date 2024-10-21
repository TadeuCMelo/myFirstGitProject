 #include <iostream>

 using namespace std;

 int main() {
      //operadores lógicos:
    // ==     igual (compara)
    // !=     diferente (ponto de exclamação (!) é a diferença)
    // >      maior
    // <      menor
    // >=     maior ou igual
    // <=     menor ou igual
    // &&     significa "e lêsse i"
    // ||(chama-se pipes) significa ou    

    int x = 1;
    int y = 2;
    int z = 3;

    if( x == 1 || y == 5 ) { // o if é um bloco de codigo que é executado se uma determinada condição for verdadeira
        cout << "um deles bate certo" << endl;
    }else{ // caso contrário
        cout << "nop...." << endl;
    }

    return 0;  
 }
 
  