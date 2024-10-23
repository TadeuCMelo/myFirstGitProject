#include <iostream>

using namespace std;

int main() {
    
    int par;
    cout << "Introduza um número:" << endl;
    cin >> par;

    if(par%2 == 0){ //só diz se é aqlo ou aqlo
    cout << "esse número é par" << endl;
     }else{
        cout << "esse número é impar" << endl;
     }
 //ou mais facil
 // numero%2 == 0 ? cout << "par" : cout << "ímpar" <<endl;

}