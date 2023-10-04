/*Estruturas de Dados com Structs
• Crie uma struct chamada "Ponto" que represente as coordenadas (x, y) de um
ponto no plano.
• Implemente uma função que calcule a distância entre dois pontos.
• Utilize a struct e a função para calcular e exibir a distância entre dois pontos
dados.*/

#include <iostream>
#include <cmath>
using namespace std;

struct Ponto
{
    double x;
    double y;
};

double calcularDistancia(Ponto ponto1, Ponto ponto2)
{
    double deltaX = ponto1.x - ponto2.x;
    double deltaY = ponto1.y - ponto2.y;
    return sqrt(deltaX * deltaX + deltaY * deltaY);
}

int main()
{
    Ponto pontoA, pontoB;

    cout << "Digite as coordenadas do ponto A:" << endl;
    cout << "x: ";
    cin >> pontoA.x;
    cout << "y: ";
    cin >> pontoA.y;

    cout << "Digite as coordenadas do ponto B:" << endl;
    cout << "x: ";
    cin >> pontoB.x;
    cout << "y: ";
    cin >> pontoB.y;
    double distancia = calcularDistancia(pontoA, pontoB);
    cout << "A distância entre os pontos A e B é: " << distancia << endl;

    return 0;
}
