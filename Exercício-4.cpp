#include<iostream>
using namespace std;

// Função de adição
double add(double num1, double num2) {
    return num1 + num2;
}

// Função de subtração
double subtract(double num1, double num2) {
    return num1 - num2;
}

// Função de multiplicação
double multiply(double num1, double num2) {
    return num1 * num2;
}

// Função de divisão
double divide(double num1, double num2) {
    if(num2 != 0)
        return num1 / num2;
    else
        return 0; // Retorne 0 se a divisão por zero
}

int main() {
    double number1 = 10.0, number2 = 5.0;

    cout << "Número 1: " << number1 << ", Número 2: " << number2 << endl;
    cout << "Adição: " << add(number1, number2) << endl;
    cout << "Subtração: " << subtract(number1, number2) << endl;
    cout << "Multiplicação: " << multiply(number1, number2) << endl;
    cout << "Divisão: " << divide(number1, number2) << endl;

    return 0;
}
