#include<iostream>
using namespace std;

// Struct Motor
struct Motor {
    int potencia;
    string tipoCombustivel;
    int cilindrada;
};

// Struct Rodas
struct Rodas {
    int tamanho;
    string tipoPneu;
};

// Struct Carroceria
struct Carroceria {
    string cor;
    string tipo;
};

// Struct Carro
struct Carro {
    Motor motor;
    Rodas rodas;
    Carroceria carroceria;
};

int main() {
    // Criação de um carro
    Carro meuCarro;

    // Definição do motor
    meuCarro.motor.potencia = 150;
    meuCarro.motor.tipoCombustivel = "Gasolina";
    meuCarro.motor.cilindrada = 2000;

    // Definição das rodas
    meuCarro.rodas.tamanho = 17;
    meuCarro.rodas.tipoPneu = "Esportivo";

    // Definição da carroceria
    meuCarro.carroceria.cor = "Vermelho";
    meuCarro.carroceria.tipo = "Sedan";

    // Exibição das informações do carro
    cout << "Motor: " << meuCarro.motor.potencia << " HP, " << meuCarro.motor.tipoCombustivel << ", " << meuCarro.motor.cilindrada << " cc" << endl;
    cout << "Rodas: " << meuCarro.rodas.tamanho << ", " << meuCarro.rodas.tipoPneu << endl;
    cout << "Carroceria: " << meuCarro.carroceria.cor << ", " << meuCarro.carroceria.tipo << endl;

    return 0;
}
