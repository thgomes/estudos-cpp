#include <iostream>

using namespace std;

void mensagem(int n) {
  cout << "numero: " << n << endl;
}

void mensagem(char c) {
  cout << "caractere: " << c << endl;
}

void mensagem(int n1, int n2, int n3) {
  int soma = n1 + n2 + n3;

  cout << "soma: " << soma << endl; 
}

int main(int argc, char *argv[]) {
  mensagem(10);

  mensagem('A');

  mensagem(10, 5, 3);

  return 0;
}