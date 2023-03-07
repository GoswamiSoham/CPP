//Program to sum of two dighit using class and object in c++
#include <iostream>
using namespace std;
class Add
{
private:
    int a, b;

public:
    void getdata(void)
    {
        cout << "Enter two numbers : " << endl;
        cin >> a >> b;
    }
    int sum(void)
    {
        int c;
        c = a + b;
        return c;
    }
};
int main()
{
    Add s;
    s.getdata();
    cout << "Sum is : " << s.sum() << endl;
    return 0;
}