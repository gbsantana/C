/*Faça um programa, utilizando a função abaixo, para calcular e exibir a média aritmética de três números
  inteiros que serão fornecidos pelo usuário. Faça a seguinte função:
  calcula_media: recebe como parâmetros 3 número inteiros, calcula e retorna a média aritmética dos
  números*/
#include <iostream>

float calcula_media(int p1,int p2,int p3)
{
    return (p1+p2+p3)/3;
}

int main()
{
    int p1,p2,p3;
    std::cout << "Digite a p1: ";
    std::cin >> p1;
    std::cout << "Digite a p2: ";
    std::cin >> p2;
    std::cout << "Digite a p3: ";
    std::cin >> p3;
    std::cout << "A media aritmetica e: " << calcula_media(p1,p2,p3);
    return 0;
}
