#include <iostream>
#include <ArrayList.h>
#include <LinkedList.h>

using namespace std;

int main(){
  LinkedList list;

  cout << list;
  list.append(1);
  cout << list;
  cout << "size: " << list.length() << "\n";
  cout << "curr value: " << list.get_value() << "\n";
  list.insert(3);
  list.insert(5);
  cout << list;
  cout << "size: " << list.length() << "\n";
  list.move_to_pos(1);
  cout << "curr value: " << list.get_value() << "\n";
  list.prev();
  cout << "curr value: " << list.get_value() << "\n";
  list.next();
  cout << "curr value: " << list.get_value() << "\n";
  list.move_to_start();
  cout << "curr value: " << list.get_value() << "\n";
  cout << list;
  cout << list.erase() << "\n";
  cout << list;
  return 0;
}
