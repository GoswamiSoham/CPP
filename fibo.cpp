//Write a c++ program to calculate fibonacci series up to n numbers of terms.
#include <iostream>
using namespace std;
int main()
{
    int n, t1 = 0, t2 = 1, next_trem = 0;
    cout << "Enter the number of trems: " << endl;
    cin >> n;
    cout << "fibonacci series:";
    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            cout << t1 << ",";
            continue;
        }
        if (i == 2)
        {
            cout << t2 << ",";
            continue;
        }

        next_trem = t1 + t2;
        t1 = t2;
        t2 = next_trem;
        cout << next_trem << ",";
    }
    return 0;
}