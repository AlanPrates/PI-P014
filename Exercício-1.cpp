#include <iostream>
using namespace std;

int calcularFatorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    } else {
        return num * calcularFatorial(num - 1);
    }
}

int main() {
    int num1 = 5;
    int num2 = 8;
    int num3 = 3;

    cout << "Fatorial de " << num1 << ": " << calcularFatorial(num1) << endl;
    cout << "Fatorial de " << num2 << ": " << calcularFatorial(num2) << endl;
    cout << "Fatorial de " << num3 << ": " << calcularFatorial(num3) << endl;

    return 0;
}
