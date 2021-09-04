/*Faça um programa, utilizando a função abaixo, que leia a nota da primeira prova e a nota da segunda
  prova de umaluno, calcule e exiba a média ponderada. A primeira prova tem peso 2 e a segunda prova
  tem peso 4. Faça a seguinte função:
  a)calc_pond: recebe como parâmetros as duas notas, calcula e retorna a média ponderada.*/

#include <iostream>
using namespace std;

float calc_pond(float p1,float p2)
{
    return ((p1*2)+(p2*4))/(2+4);
}

int main()
{
    float p1,p2;
    cout << "Digite a p1: ";
    cin >> p1;
    cout << "Digite a p2: ";
    cin >> p2;
    cout << "Sua media ponderada e: " << calc_pond(p1,p2);
    return 0;
}
