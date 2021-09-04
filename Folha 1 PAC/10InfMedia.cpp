/*Faça um programa, utilizando a função abaixo, que processe um aluno de uma turma. O programa deverá
ler as seguintes informações do aluno: matrícula, nota da primeira prova, nota da segunda prova, nota do
primeiro trabalho e nota do segundo trabalho. Este programa deverá calcular e exibir: matrícula, média
das provas, média dos trabalhos e média final. Todas as médias são aritméticas. Este programa deverá
utilizar a seguinte função:
a)Para calcular e retornar a média aritmética. Esta função deverá receber os dois valores para o cálculo
da média aritmética como parâmetros.*/
#include <iostream>
using namespace std;

int fbi(float matricula,float p1,float p2,float t1,float t2)
{
    return matricula, (p1+p2)/2.0,(t1+t2)/2.0;
}

int main()
{
    fbi(matricula,p1,p2,t1,t2);
    return 0;
}
