/*
Crie uma struct chamada "Ponto" que represente as coordenadas (x, y) de um
ponto no plano.
• Implemente uma função que calcule a distância entre dois pontos.
• Utilize a struct e a função para calcular e exibir a distância entre dois pontos
dados
*/

#include <iostream>
#include <cmath> // Para a função sqrt() (raiz quadrada)
using namespace std;

// Definição da struct para representar um ponto no plano
struct Ponto {
    double x;
    double y;
};

// Função para calcular a distância entre dois pontos
double calcularDistancia(const Ponto& ponto1, const Ponto& ponto2) {
    double diferencaX = ponto1.x - ponto2.x;
    double diferencaY = ponto1.y - ponto2.y;
    return sqrt(diferencaX * diferencaX + diferencaY * diferencaY);
}

int main() {
    Ponto ponto1, ponto2;

    cout << "Digite as coordenadas do primeiro ponto:" << endl;
    cout << "Coordenada x: ";
    cin >> ponto1.x;
    cout << "Coordenada y: ";
    cin >> ponto1.y;

    cout << "Digite as coordenadas do segundo ponto:" << endl;
    cout << "Coordenada x: ";
    cin >> ponto2.x;
    cout << "Coordenada y: ";
    cin >> ponto2.y;

    double distancia = calcularDistancia(ponto1, ponto2);

    cout << "A distância entre os dois pontos é: " << distancia << endl;

    return 0;
}
