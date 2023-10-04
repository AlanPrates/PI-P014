/*Organização de Código
• Em grupo, escolham uma funcionalidade simples para um programa (por
exemplo, uma calculadora de operações matemáticas).
• Dividam o programa em diferentes funções, atribuindo a cada membro do
grupo a responsabilidade por uma função específica.
• Juntem as funções criadas por cada membro e criem um programa completo
que utilize todas elas.
• Usem os recursos do Git para dividir e juntar os códigos.*/

#include <iostream>
#include <stdio.h>
#include <string>
#include <stdlib.h>
#include <math.h>
using namespace std;

class Calculadora
{
public:
    static int adicao(int a, int b)
    {
        return a + b;
    }
    static int subtracao(int a, int b)
    {
        return a - b;
    }
    static int multiplicacao(int a, int b)
    {
        return a * b;
    }
    static int divisao(int a, int b)
    {
        return a / b;
    }
};

int main()
{
    int opcao, a, b;

    cout << "Escolha uma operação: " << endl;
    cout << "1 - ADICAO" << endl;
    cout << "2 - SUBTRACAO" << endl;
    cout << "3 - MULTIPLICACAO" << endl;
    cout << "4 - DIVISAO" << endl;
    cin >> opcao;
    cout << endl;

    if (opcao == 1)
    {
        cout << "Informe o primeiro numero: ";
        cin >> a;
        cout << "Informe o segundo numero: ";
        cin >> b;
        cout << Calculadora::adicao(a, b) << endl;
    }

    if (opcao == 2)
    {
        cout << "Informe o primeiro numero: ";
        cin >> a;
        cout << "Informe o segundo numero: ";
        cin >> b;
        cout << Calculadora::subtracao(a, b) << endl;
    }

    if (opcao == 3)
    {
        cout << "Informe o primeiro numero: ";
        cin >> a;
        cout << "Informe o segundo numero: ";
        cin >> b;
        cout << Calculadora::multiplicacao(a, b) << endl;
    }

    if (opcao == 4)
    {
        cout << "Informe o primeiro numero: ";
        cin >> a;
        cout << "Informe o segundo numero: ";
        cin >> b;
        cout << Calculadora::divisao(a, b) << endl;
    }

    return 0;
}
