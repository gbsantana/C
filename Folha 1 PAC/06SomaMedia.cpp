/*Faça um programa que leia dois números inteiros que serão fornecidos pelo usuário, calcule e exiba a
soma e a média dos números. Este programa deverá utilizar as seguintes funções:
b)calcula_soma: recebe como parâmetros os 2 números inteiros, calcula e retorna a soma.
c)calcula_media: recebe como parâmetros os 2 números inteiros, calcula e exibe a média.*/
#include <iostream>
using namespace std;
int calcula_soma(int n1,int n2)
{
    return n1+n2;
}
void calcula_media(int n1,int n2)
{
     float media;
     media = (n1+n2)/2.0;
     cout << "Sua media e: " << media;
}

int main ()
{
    int n1,n2;
    cout << "Digite o primeiro valor: ";
    cin >> n1;
    cout << "Digite o segundo valor: ";
    cin >> n2;
    cout << "Sua soma e: " << calcula_soma(n1,n2) << endl;
    calcula_media(n1,n2);
    return 0;
}
