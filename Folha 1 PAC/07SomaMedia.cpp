/*Faça um programa que leia dois números inteiros que serão fornecidos pelo usuário, calcule e exiba a
soma e a média dos números. Este programa deverá utilizar as seguintes funções:
a)calcula_soma: recebe como parâmetros os 2 números inteiros, calcula, exibe e retorna a soma.
b)calcula_media: recebe como parâmetro a soma dos números, calcula e exibe a média.*/
#include <iostream>
using namespace std;

int calcula_soma(int n1,int n2)
{
    cout << "Sua soma e: "<< n1+n2 << endl;
    return n1+n2;
}

void calcula_media(float m)
{
    cout << "Sua media e: " << m/2.0;
}

int main()
{
    int n1,n2;
    cout << "Digite o primeiro valor: ";
    cin >> n1;
    cout << "Digite o segundo valor: ";
    cin >> n2;
    calcula_media(calcula_soma(n1,n2));
    return 0;
}
