#include <iostream>
#include <cmath>
using namespace std;

struct Ponto {
    float x;
    float y;
};

float calcularDistancia(Ponto ponto1, Ponto ponto2) {
    return sqrt(pow((ponto2.x - ponto1.x), 2) + pow((ponto2.y - ponto1.y), 2));
}

int main() {
    Ponto pontoA = {2.0, 3.0};
    Ponto pontoB = {5.0, 7.0};

    float distancia = calcularDistancia(pontoA, pontoB);

    cout << "A distância entre os pontos A(" << pontoA.x << ", " << pontoA.y << ") e B(" << pontoB.x << ", " << pontoB.y << ") é: " << distancia << endl;

    return 0;
}
