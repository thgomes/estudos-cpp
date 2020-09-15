#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char const *argv[])
{
  char str1[100], str2[100];

  cout << "Digite a primeira string: " << endl;
  cin >> str1;
  cout << "Digite a segunda string: " << endl;
  cin >> str2;

  if (strstr(str1, str2)) {
    cout << "eh substring" << endl;

  } else {
    cout <<  "nao eh substring" << endl;
  }

  return 0;
}
