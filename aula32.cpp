#include <iostream>

using namespace std;

int main() {
      int x = 1;
    int y = 2;
    int z = 3;

    if( x == 2 ) { 
        cout << "x é igual a dois" << endl;
    }else if(y == 2){ 
        cout << "y é igual a dois" << endl;
    }else if( z == 4){ //else if é uma condição que vai sofrer uma avaliação se a anterior for falsa
        cout << "z é igual a quatro" << endl;
    }else{
        cout << "Nenhum dos valores é igual a 2, 3 ou 4" << endl;
    }



    

    return 0;  
}