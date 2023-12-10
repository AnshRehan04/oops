#include <iostream>
using namespace std;
class Complex{
    private:
    int real;
    int imag;
    public:
    Complex(int r=0,int i=0){
        real=r;
        imag=i;
    }
    Complex operator +( Complex const& c){
        Complex temp;
        temp.real=real+c.real;
        temp.imag=imag+c.imag;
        return temp;
    }
    void show(){
        cout<<real<<"+"<<"i"<<imag<<endl;
    }
};
int main(){
    Complex c1(2,3),c2(4,5);
    Complex c3=c1+c2;
    c3.show();
}