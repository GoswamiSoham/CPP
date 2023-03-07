// Write a c++ program to find of lenth of a string......
#include <iostream>
using namespace std;
int main()
{
    char str[] = "Garhbeta";
    int count = 0;
    while (str[count] != 0)
        count++;
    cout << "The string is " << str<<endl;
    cout << "The lenth of this string is " << count << endl;
    return 0;
}