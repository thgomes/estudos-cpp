#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    double num1, num2, resultado;
    char op;

    cout << "Digite o primeiro numero: ";
    cin >> num1;
    
    cout << "Digite o segundo numero: ";
    cin >> num2;

    cout << "Informe a opecao: ";
    cin >> op;

    switch (op)
    {
    case '+':
        resultado = num1 + num2;
        cout << "Soma: " << resultado << endl;
        break;

    case '-':
        resultado = num1 - num2;
        cout << "Subtracao: " << resultado << endl;
        break;
    
    case '*':
        resultado = num1 * num2;
        cout << "Multiplicacao: " << resultado << endl;
        break;
    
    case '/':
        resultado = num1 / num2;
        cout << "Divisao: " << resultado << endl;
        break;
        
    default:
        cout << "Operação invalida";
        break;
    }

    return 0;
}