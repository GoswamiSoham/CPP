//write a c++ program to addition of two complex numbers.
#include <iostream>
using namespace std;
class Complex
{
private:
    float real, img;

public:
    void getdata(void)
    {
        cout << "\nEnter the real and imginery part: ";
        cin >> real >> img;
    }
    void display(void)
    {
        cout << "\n"
             << real << "+i" << img << "\n";
    }
    void add(Complex c1, Complex c2)
    {
        real = c1.real + c2.real;
        img = c1.img + c2.img;
    }
};
int main()
{
    Complex c1, c2, c3;
    cout << "Enter the frist complex number: ";
    c1.getdata();
    cout << "Enter the 2nd complex number: ";
    c2.getdata();
    c3.add(c1, c2);
    cout << "\n Addition is: ";
    c3.display();

    return 0;
}