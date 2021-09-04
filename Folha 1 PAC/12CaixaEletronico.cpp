#include <iostream>
using namespace std;

int saque(int quantia)
{
    int c100 ,c50,c20,c10,c5,c2,c1;
    c100 = quantia / 100;
    quantia%=100;
    c50 = quantia /50;
    quantia%=50;
    c20 = quantia /20;
    quantia%=20;
    c10 = quantia/10;
    quantia%=10;
    c5 = quantia/5;
    quantia%=5;
    c2 = quantia/2;
    quantia%=2;
    c1=quantia/1;
    cout << "100=" << c100 <<"\n";
    cout << "50=" << c50<<"\n";
    cout << "20=" << c20<<"\n";
    cout << "10=" << c10<<"\n";
    cout << "5=" << c5<<"\n";
    cout << "2=" << c2<<"\n";
    cout << "1=" << c1<<"\n";
    return c100 ,c50,c20,c10,c5,c2,c1,quantia;
}
int main()
{
    int c100 ,c50,c20,c10,c5,c2,c1,quantia;
    cout << "Digite a quantia: R$";
    cin >> quantia;
    saque(quantia);
    return 0;
}
