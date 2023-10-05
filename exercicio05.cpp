/*
Exercício 5: Abstração e Modularização
• Em grupo, escolham um objeto do mundo real (por exemplo, um carro) e
identifiquem suas características e comportamentos.
• Dividam o objeto em partes menores e atribuam a cada membro a
responsabilidade por modelar uma parte como uma struct.
• Juntem as structs criadas por cada membro para formar uma representação
completa do objeto.
*/

#include <iostream>
#include <string>

using namespace std;

// Definição da struct para representar uma roda de carro
struct Rodas {
    int tamanho; // Tamanho da roda em polegadas
    string tipo; // Tipo da roda (ex: aço, liga leve, etc.)
};

int main() {
    Rodas roda1, roda2;

    // Preenche as características da primeira roda
    cout << "Digite o tamanho da primeira roda (em polegadas): ";
    cin >> roda1.tamanho;
    cout << "Digite o tipo da primeira roda: ";
    cin.ignore();
    getline(cin, roda1.tipo);

    // Preenche as características da segunda roda
    cout << "Digite o tamanho da segunda roda (em polegadas): ";
    cin >> roda2.tamanho;
    cout << "Digite o tipo da segunda roda: ";
    cin.ignore();
    getline(cin, roda2.tipo);

    // Exibe as características das rodas
    cout << "\nCaracterísticas das Rodas:" << endl;
    cout << "Primeira Roda:" << endl;
    cout << "Tamanho: " << roda1.tamanho << " polegadas" << endl;
    cout << "Tipo: " << roda1.tipo << endl;

    cout << "\nSegunda Roda:" << endl;
    cout << "Tamanho: " << roda2.tamanho << " polegadas" << endl;
    cout << "Tipo: " << roda2.tipo << endl;

    return 0;
}
