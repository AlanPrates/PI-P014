/*Abstração e Modularização
• Em grupo, escolham um objeto do mundo real (por exemplo, um carro) e
identifiquem suas características e comportamentos.
• Dividam o objeto em partes menores e atribuam a cada membro a
responsabilidade por modelar uma parte como uma struct.
• Juntem as structs criadas por cada membro para formar uma representação
completa do objeto.
*/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <cmath>
#include <algorithm>
#include <string>
using namespace std;

struct moto
{
    string cor;
    string marca, modelo;
    double preco;
    int ano;
} moto;

struct Carro
{
    string cor;
    string marca, modelo;
    double preco;
    int ano;
} carro;

int main()
{

    cout << "Informe a cor do moto: ";
    cin >> moto.cor;
    cout << "Informe a marca do moto: ";
    cin >> moto.marca;
    cout << "Informe o modelo do moto: ";
    cin >> moto.modelo;
    cout << "Informe o preco do moto: ";
    cin >> moto.preco;
    cout << "Informe o ano do moto: ";
    cin >> moto.ano;
    cout << endl;

    cout << "- MOTO -" << endl;
    cout << "Cor: " << moto.cor << endl;
    cout << "Marca: " << moto.marca << endl;
    cout << "Modelo: " << moto.modelo << endl;
    cout << "Preco: " << moto.preco << endl;
    cout << "Ano: " << moto.ano << endl;

    cout << "Informe a cor do carro: ";
    cin >> carro.cor;
    cout << "Informe a marca do carro: ";
    cin >> carro.marca;
    cout << "Informe o modelo do carro: ";
    cin >> carro.modelo;
    cout << "Informe o preco do carro: ";
    cin >> carro.preco;
    cout << "Informe o ano do carro: ";
    cin >> carro.ano;
    cout << endl;

    cout << "- CARRO -" << endl;
    cout << "Cor: " << carro.cor << endl;
    cout << "Marca: " << carro.marca << endl;
    cout << "Modelo: " << carro.modelo << endl;
    cout << "Preco: " << carro.preco << endl;
    cout << "Ano: " << carro.ano << endl;

    return 0;
}