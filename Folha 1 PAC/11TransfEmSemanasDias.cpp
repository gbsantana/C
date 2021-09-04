/*Faça uma função que receba como parâmetro o número de dias decorrido em um evento e exiba na tela o
mesmo valor expresso em números de semanas e número de dias. Por exemplo, se a função receber como
parâmetro o valor 19, deverá exibir: “2 semanas e 5 dias”*/
#include <iostream>
using namespace std;
// em n�meros de semana e dias
int valor_em_semanas(int n)
{
    cout << n/7 << " Semanas e " << n%7 << " dias";
    return n;
}
