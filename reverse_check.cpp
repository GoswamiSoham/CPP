// write a c++ program to reverse a given number.
#include <iostream>
using namespace std;
int main()
{
    int n, reverse = 0, rem;
    cout << "Enter a number:" << endl;
    cin >> n;
    while (n != 0)
    {
        rem = n % 10;
        reverse = (reverse * 10) + rem;
        n = n / 10;
    }
    cout << "reverse of this number is :" << reverse << endl;
    return 0;
}