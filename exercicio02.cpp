/*
Exercício 2: Modularização
• Implemente um programa que converta uma temperatura de Celsius para
Fahrenheit.
• Separe a lógica de conversão em uma função e a entrada/saída em outra
função.
• Teste a função de conversão com diferentes valores.
*/

#include <iostream>
using namespace std;

// Função para converter temperatura de Celsius para Fahrenheit
double converterCelsiusParaFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

// Função para solicitar a entrada do usuário e exibir o resultado
void entradaSaida() {
    double celsius;
    cout << "Digite a temperatura em Celsius: ";
    cin >> celsius;

    double fahrenheit = converterCelsiusParaFahrenheit(celsius);

    cout << "A temperatura em Fahrenheit é: " << fahrenheit << "°F" << endl;
}

int main() {
    
    entradaSaida();

    return 0;
}
