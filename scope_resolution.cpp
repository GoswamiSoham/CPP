//write a c++ program to implement scope resolution operator.
#include <iostream>
using namespace std;
int a = 10;                     // global variable
int main()
{

    int a = 20;                  // local variable
    cout << "a = " << a << endl;
    cout << "a = " << ::a << endl;

    return 0;
}