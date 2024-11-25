
#include <iostream>

using namespace std;
//TPC DO IRS
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

    //TPC DAS MEDIDAS
}

float pedido;
int main()
{
    cout << "digite uma medida em metros que queria em milimetros: ";
 cin >> pedido;
 cout << "a medição em milimetros é: "<< pedido *1000 << endl;
}

//TPC DO RAIO
float PI = 3.14159;

int main() {
    float raio;
    cout << "Raio: "; 
    cin >> raio;
    cout << "Perimetro: " << 2 * PI * raio << endl;
    cout << "Area: " << PI * raio * raio << endl;
    return 0;
}
