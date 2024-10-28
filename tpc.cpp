#include <iostream>

using namespace std;

int main() {
    int Pares[20];
    
    for (int x = 0 ; x < 20 ; x++){
        Pares[x] = x * 2;
}
cout << "primeiros vinte números pares";
    for (int x = 0 ; x < 20 ; x++){
        cout << Pares[x] << " ";
    }
    
    
    cout << endl;
    return 0;
}
