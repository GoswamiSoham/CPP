//Write a c++ program to implement constructor.
#include <iostream>
using namespace std;
class Example
{
  int a, b;

public:
  Example()
  {
    a = 10;
    b = 20;
    cout << "I am Constructor" << endl;
  }
  void display()
  {
    cout << "values:" << a << "\t" << b;
  }
};
int main()
{
  Example object;
  object.display();
  return 0;
}