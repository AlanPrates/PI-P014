/* Modularização
• Implemente um programa que converta uma temperatura de Celsius para 
Fahrenheit.
• Separe a lógica de conversão em uma função e a entrada/saída em outra 
função.
• Teste a função de conversão com diferentes valores.*/

#include <iostream>
using namespace std;


double converterParaFahrenheit(double celsius) {
    return (celsius * 9/5) + 32;
}


double lerTemperaturaCelsius() {
    double celsius;
    cout << "Digite a temperatura em graus Celsius: ";
    cin >> celsius;
    return celsius;
}


void exibirResultado(double celsius, double fahrenheit) {
    cout << celsius << " graus Celsius equivalem a " << fahrenheit << " graus Fahrenheit." << endl;
}

int main() {
    double celsius, fahrenheit;

    celsius = lerTemperaturaCelsius(); 
    fahrenheit = converterParaFahrenheit(celsius);
    exibirResultado(celsius, fahrenheit); 

    return 0;
}
