// write a c++ program to check a number is prime or not
#include <iostream>
using namespace std;
int main()
{
    int n, i, m = 0, flag = 0;
    cout << "Enter the number to check prime : " << endl;
    cin >> n;
    m = (n / 2);
    for (i = 2; i <= m; i++)
    {
        if (n % i == 0)
        {
            cout << "This number is not prime." << endl;
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "Number is prime" << endl;
    }
    return 0;
}