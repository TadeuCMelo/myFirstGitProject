#include <iostream>

using namespace std;

int main() {
    float valorHora, horas;
    cout << "Valor/hora: "; cin >> valorHora;
    cout << "Horas: "; cin >> horas;

    float total = valorHora * horas;
    float descontoIRS = total * 0.125;
    float sobra = total - descontoIRS;
    
    cout << endl;
    
    cout << "Total: " << total << " euros" << endl;
    cout << "Desconto IRS: " << descontoIRS << " euros" << endl;
    cout << "Sobra: " << sobra << " euros" << endl;

    return 0;
}
