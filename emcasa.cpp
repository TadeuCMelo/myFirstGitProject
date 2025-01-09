#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void convertormoedas(){
     cout << "\nVai poder escolher o valor em euros e o tipo de moeda que vai desejar\n";
    cout << "1. Real Brasileiro (BRL)\n";
    cout << "2. Dólar (USD)\n";
    cout << "3. Líbra Esterlina (GBP)\n";
    cout << "4. Iene Japonês (JPY)\n";
    cout << "5. Rupee Indiano (INR)\n";
    cout << "6. South African rand(ZAR)\n";
    cout << "7. Rublo(RUB)\n";
    int escolha;
    cout << "Escolha uma opção (1-5): ";
    cin >> escolha;
    float número;
    cout << "O valor quer deseja converter de euro para " << escolha <<":";
    cin >> número;
    switch (escolha) {
        case 1: 
          cout << número << "€ convertido é : " << número*5.50 << " BRL ";
            break;
        
        case 2: 
          cout << número << "€ convertido é : " << número*1.03 << " USD ";
            break;

        case 3: 
          cout << número << "€ convertido é : " << número*0.86 << " GBP ";
            break;

        case 4: 
          cout << número << "€ convertido é : " << número*145 << " JPY ";
            break;

        case 5: 
          cout << número << "€ convertido é : " << número*90 << " INR ";
            break;

   case 6: 
          cout << número << "€ convertido é : " << número*19.43 << " ZAR ";
            break;

   case 7: 
          cout << número << "convertido é : " << número*106.20 << " RUB ";
            break;

        default: 
            cout << "Opção inválida. Por favor, tente novamente.\n";
    }
}
