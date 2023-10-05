/*
Exercício 1: Reutilização de Funções
• Escreva uma função em C++ que calcule o fatorial de um número inteiro.
• Crie um programa que utilize essa função para calcular e exibir o fatorial de
três números diferentes.
*/

#include <iostream>

using namespace std;

// Função para calcular o fatorial de um número inteiro
int Fatorial(int numero) {
    if (numero <= 0) {
        return 1; // O fatorial de 0 é 1
    } else {
        int fat = 1;
        for (int i = 1; i <= numero; i++) {
            fat *= i;
        }
        return fat;
    }
}

int main() {
    int num1, num2, num3;

    cout << "Digite o primeiro número: ";
    cin >> num1;

    cout << "Digite o segundo número: ";
    cin >> num2;

    cout << "Digite o terceiro número: ";
    cin >> num3;

    int fat1 = Fatorial(num1);
    int fat2 = Fatorial(num2);
    int fat3 = Fatorial(num3);

    cout << "O fatorial de " << num1 << " é " << fat1 << endl;
    cout << "O fatorial de " << num2 << " é " << fat2 << endl;
    cout << "O fatorial de " << num3 << " é " << fat3 << endl;

    return 0;
}
