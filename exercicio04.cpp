/*
Exercício 4: Organização de Código
• Em grupo, escolham uma funcionalidade simples para um programa (por
exemplo, uma calculadora de operações matemáticas).
• Dividam o programa em diferentes funções, atribuindo a cada membro do
grupo a responsabilidade por uma função específica.
• Juntem as funções criadas por cada membro e criem um programa completo
que utilize todas elas.
• Usem os recursos do Git para dividir e juntar os códigos.
*/

#include <iostream>
#include <locale.h>

using namespace std;

class Calculadora {
public:
    // M�todos est�ticos para realizar opera��es matem�ticas
    static double adicao(double num1, double num2) {
        return num1 + num2;
    }

    static double subtracao(double num1, double num2) {
        return num1 - num2;
    }

    static double multiplicacao(double num1, double num2) {
        return num1 * num2;
    }

    static double divisao(double num1, double num2) {
        if (num2 == 0) {
            cout << "Divis�o por zero n�o � permitida." << endl;
            return 0.0;
        }
        return num1 / num2;
    }
};

int main() {

    setlocale(LC_ALL, "Poruguese_Brazil");

    double num1, num2, resultado;
    char operacao;

    cout << "Digite o primeiro n�mero: ";
    cin >> num1;

    cout << "Digite a opera��o (+, -, *, /): ";
    cin >> operacao;

    cout << "Digite o segundo n�mero: ";
    cin >> num2;

    switch (operacao) {
        case '+':
            resultado = Calculadora::adicao(num1, num2);
            break;
        case '-':
            resultado = Calculadora::subtracao(num1, num2);
            break;
        case '*':
            resultado = Calculadora::multiplicacao(num1, num2);
            break;
        case '/':
            resultado = Calculadora::divisao(num1, num2);
            break;
        default:
            cout << "Opera��o inv�lida." << endl;
            return 1;
    }

    cout << "Resultado: " << resultado << endl;

    return 0;
}
