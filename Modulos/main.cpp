#include <iostream>
#include "my_math.h"

using namespace std;

int main(int argc, char *argv[])
{
  int n = 5;

  cout << "Fatorial de " << n << ": " << fatorial(n) << endl;
  cout << "Area quadrado com lado " << n << ": " << area_quadrado(n) << endl;
  cout << "Area retangulo:" << area_retangulo(n, n) << endl;

  return 0;
}
