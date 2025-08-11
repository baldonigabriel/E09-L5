#include <iostream>
using namespace std;

int main() {
    int num;
    
    cout << "Digite um número entre 0 e 50: ";
    cin >> num;

    if (num <= 0 || num > 50) {
        cout << "Número inválido. Digite um valor entre 1 e 50." << endl;
        return 1; 
    }

    for (int i = num - 1; i > 0; i--) {
        cout << "Resto da divisão de " << num << " por " << i << ": " << num % i << endl;
    }

    return 0;
}
