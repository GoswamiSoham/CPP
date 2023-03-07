//write a c++ program to check largest element in the three given number...
#include<iostream>
using namespace std;
class Max{
    private:
            int a , b , c ;
    public:
            void getdata(void){
                cout<<"Enter three numbers : "<<endl;
                cin>>a>>b>>c;
            }
            int largest(void){
                int lar;
                lar = a;
                if (b > lar)
                   lar = b;
                if(c > lar)
                   lar = c;
                return lar;
            }
};
int main(){
    Max m;
    m.getdata();
    int lar = m.largest();
    cout<<"Largest number is : "<<lar<<endl;
return 0;
}