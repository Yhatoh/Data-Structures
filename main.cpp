#include <iostream>
#include <ArrayList.h>

using namespace std;

int main(){
  ArrayList lista;

  lista.append(1);
  cout << lista.length() << "\n";
  cout << lista.get_value() << "\n";
  return 0;
}
