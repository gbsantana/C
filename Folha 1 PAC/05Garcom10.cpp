/*Faça um programa, utilizando a função abaixo,para calcular e exibir o valor total a ser pago por um cliente
de um restaurante, considerando os 10% do garçom. O usuário deverá fornecer o valor do gasto do cliente.

Faça a função valor_garcom: recebe como parâmetro o valor do gasto do cliente, calcula e retorna o valor a ser pago ao garçom.

Exemplo: se o usuário fornecer o valor 100.00 (valor do gasto), o programa deverá exibir o valor 110.00.*/
#include <iostream>
using namespace std;

float valor_garcom(float valor_total)
{
    valor_total+=valor_total*0.10;
    return valor_total;
}

int main()
{
    float valor_total;
    cout << "Insira o valor total: ";
    cin >> valor_total;
    cout << "O valor a pagar o garcom e: " << valor_garcom(valor_total);
    return 0;
}
