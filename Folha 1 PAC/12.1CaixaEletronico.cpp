/*Considere que um caixa eletrônico está abastecido com cédulas de R$1,00, R$2,00, R$5,00, R$10,00,
R$20,00, R$50,00 e R$100,00. Faça um programa, utilizando a função abaixo, que leia um valor (inteiro) a
ser sacado por um cliente e exiba a quantidade a ser fornecida de cada cédula considerando que o caixa
eletrônico sempre deverá fornecer a menor quantidade total de cédulas possível. Faça uma função que
receba como parâmetro o valor a ser sacado, calcule e exiba a quantidade a ser fornecida de cada cédula.*/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c100,c50,c20,c10,c5,c2,c1,quantia;
    printf("Insira a quantia: ");
    scanf("%d",&quantia);

    c100=quantia/100;
    quantia%=100;
    c50=quantia/50;
    quantia%=50;
    c20=quantia/20;
    quantia%=20;
    c10=quantia/10;
    quantia%=10;
    c5=quantia/5;
    quantia%=5;
    c2=quantia/2;
    quantia%=2;
    c1=quantia/1;

    printf("100=%d  50=%d  20=%d 10=%d 5=%d 2=%d 1=%d",c100,c50,c20,c10,c5,c2,c1);

    return 0;
}
