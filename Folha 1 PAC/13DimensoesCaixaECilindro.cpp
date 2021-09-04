/*Sabe-se que o volume de uma caixa de lados a, b e c é dado por Vcaixa = a . b . c e que o volume de um
cilindro de raio r e altura h é dado por Vcilindro = πhr^2. Pede -se:
a)Escreva uma função para calcular e retornar o volume de uma caixa de lados a, b e c. Esta função
deverá receber como parâmetro os lados a, b e c.

b)Escreva uma função para calcular e retornar o volume de um cilindro de raio r e altura h. Esta função
deverá receber como parâmetro o raio e a altura.

c)Usando as funções dos itens anteriores, escreva um programa para calcular o volume de uma caixa
com um furo cilíndrico, com as dimensões ilustradas na figura abaixo.
O programa deve capturar do teclado os valores das dimensões da peça e deve exibir o valor do volume
calculado.*/
/* Vcaixa= a x b x c
vcilindro= h x pir�*/
#include <iostream>
using namespace std;

int vcaixa(int a,int b,int c)
{
    return a*b*c;
}

int vcilindro(int r,int h)
{
    return h*3,14*(r*r);
}

int main()
{
    int a,b,c,r,h;
    cout<<"Digite os valores da caixa: \n";
    cout<<"Digite o lado a: ";
    cin>>  a;
    cout<<"Digite o lado b: ";
    cin>>  b;
    cout<<"Digite o lado c: ";
    cin>>  c;
    cout<<"Os valores do cilindro: \n";
    cout<< "Do raio do cilindro: ";
    cin>> r;
    cout<< "Da altura: ";
    cin>> h;
    vcaixa(a,b,c);
    vcilindro(r,h);
    cout<< "O Volume da caixa com um furo cilindrico eh " << vcaixa(a,b,c)-vcilindro(r,h) << "m�";

    return 0;
}
