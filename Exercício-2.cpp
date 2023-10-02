#include <iostream>
using namespace std;

float converterCelsiusParaFahrenheit(float celsius) {
    return (celsius * 9/5) + 32;
}

void mostrarResultado(float fahrenheit) {
    cout << "A temperatura em Fahrenheit é: " << fahrenheit << " °F" << endl;
}

int main() {
    float temperaturaCelsius = 25.0;

    float temperaturaFahrenheit = converterCelsiusParaFahrenheit(temperaturaCelsius);

    mostrarResultado(temperaturaFahrenheit);

    return 0;
}
