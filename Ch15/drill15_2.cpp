#include "std_lib_facilities.h"

struct Person
{
    string n;
    int a;
}

int main()
{
  Person p1{ "Goofy", 63 };
  cout << p1;

  return 0;
}
