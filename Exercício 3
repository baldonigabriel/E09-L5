#include <iostream>
using namespace std;

void contarValores(int valores[], int n) {
    int pares = 0, impares = 0, positivos = 0, negativos = 0;

    for (int i = 0; i < n; i++) {
        if (valores[i] % 2 == 0) {
            pares++;
        } else {
            impares++;
        }

        if (valores[i] > 0) {
            positivos++;
        } else if (valores[i] < 0) {
            negativos++;
        }
    }

    cout << "Quantidade de numeros pares: " << pares << endl;
    cout << "Quantidade de numeros impares: " << impares << endl;
    cout << "Quantidade de numeros positivos: " << positivos << endl;
    cout << "Quantidade de numeros negativos: " << negativos << endl;
}

int main() {
    int n;

    cout << "Digite a quantidade de testes: ";
    cin >> n;

    int valores[n];

    cout << "Digite " << n << " valores inteiros: ";
    for (int i = 0; i < n; i++) {
        cin >> valores[i];
    }

    contarValores(valores, n);

    return 0;
}
