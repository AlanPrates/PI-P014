/*
Reutilização de Funções
• Escreva uma função em C++ que calcule o fatorial de um número inteiro.
• Crie um programa que utilize essa função para calcular e exibir o fatorial de 
três números diferentes.
*/
#include <iostream>

using namespace std;

unsigned long long calcularFatorial(int n) {
    if (n < 0) {
        cerr << "O fatorial não está definido para números negativos." << endl;
        return 0;
    }

    unsigned long long fatorial = 1;
    for (int i = 1; i <= n; ++i) {
        fatorial *= i;
    }
    return fatorial;
}

int main() {
    int num1, num2, num3;

    cout << "Digite o primeiro número inteiro: ";
    cin >> num1;
    cout << "Fatorial de " << num1 << " é " << calcularFatorial(num1) << endl;

    cout << "Digite o segundo número inteiro: ";
    cin >> num2;
    cout << "Fatorial de " << num2 << " é " << calcularFatorial(num2) << endl;

    cout << "Digite o terceiro número inteiro: ";
    cin >> num3;
    cout << "Fatorial de " << num3 << " é " << calcularFatorial(num3) << endl;

    return 0;
}
