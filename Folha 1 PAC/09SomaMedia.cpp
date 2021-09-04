/*Faça um programa que leia dois números inteiros que serão fornecidos pelo usuário, calcule e exiba a
soma e a média dos números. Este programa deverá utilizar as seguintes funções:
a)le_calcula_soma: lê 2 números inteiros, calcula e retorna a soma.
b)calcula_media: recebe como parâmetro a soma dos números, calcula e exibe a média.*/
#include <iostream>
using namespace std;

int le_calcula_soma(int n1,int n2)
{
    return n1+n2;
}

void calcula_media(float m)
{
    cout <<"Sua media: " << m/2.0;
}

int main()
{
    int n1,n2;
    cin >> n1;
    cin >> n2;
    cout <<"Sua soma: "<< le_calcula_soma(n1,n2) << endl;
    calcula_media(le_calcula_soma(n1,n2));
    return 0;
}
