/*
* TPC:
*Um programa que peça uma medida em metros
*E converta para milimetros
*
*
*Um programa que peça o raio de um circulo
*e apresente o seu perimetro e a sua area
*
*
*Um programa que vos peça o vosso vencimento(quanto agente ganha) por hora
*de um trabalhador e o numero de horas trabalhadas e apresente o valor total a pagar pelas horas trabalhadas
*e o desconto de 12.5% para o IRS.
*
*/

#include <iostream>

using namespace std;
//TPC DO IRS
int main() {
    system("clear");
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

//float pedido;
//int main()
//{
  //  cout << "digite uma medida em metros que queria em milimetros: ";
 //cin >> pedido;
 //cout << "a medição em milimetros é: "<< pedido *1000 << endl;
//}

//TPC DO RAIO
//const float PI = 3.14159;

//int main() {
  //  float raio;
    //cout << "Raio: "; 
    //cin >> raio;
    //cout << "Perimetro: " << 2 * PI * raio << endl;
    //cout << "Area: " << PI * (raio * raio) << endl;
    //cout << "diametro: " << 2* raio << endl;
    //return 0;
//}