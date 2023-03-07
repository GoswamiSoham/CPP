//write a c++ program to implement single inheritance.
#include <iostream>
using namespace std;
class B
{
private:
    int a;

public:
    int b;
    void get_ab(void)
    {
        a = 5;
        b = 10;
    }
    int get_a(void)
    {
        return (a);
    }
    void show_a(void)
    {
        cout << "a=" << a;
    }
};
class D : public B
{
private:
    int c;

public:
    void multiply(void)
    {
        c = b * get_a();
    }
    void display(void)
    {
        cout << "\n a=" << get_a();
        cout << "\n b=" << b;
        cout << "\n c=" << c;
    }
};
int main()
{
    D d;
    d.get_ab();
    d.multiply();
    d.show_a();
    d.display();
    d.b = 20;
    d.multiply();
    d.display();
    return 0;
}