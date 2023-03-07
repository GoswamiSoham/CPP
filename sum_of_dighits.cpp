//write a c++ program to calculate sum of dighits..
#include <iostream>
using namespace std;
class Sod
{
private:
    int n;

public:
    void getdata(void)
    {
        cout << "Enter the number: ";
        cin >> n;
    }
    void sumb(void)
    {
        int r, s = 0;
        while (n != 0)
        {
            r = n % 10;
            s = s + r;
            n = n / 10;
        }
        cout << "Sum of dighit is: " << s << endl;
    }
};
int main()
{
    Sod p;
    p.getdata();
    p.sumb();

    return 0;
}