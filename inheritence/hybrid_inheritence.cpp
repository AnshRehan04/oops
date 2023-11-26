#include <iostream>
using namespace std;

class A{
    protected:
    int a;
    public:
    void getdata_a(){
        cout<<"Enter the value of A ";
        cin>>a;
    }
};
class B{
    protected:
    int b;
    public:
    void getdata_b(){
        cout<<"Enter the value of B ";
        cin>>b;
    }
};
class C{
    protected:
    int c;
    public:
    void getdata_c(){
        cout<<"Enter the value of C ";
        cin>>c;
    }
};
class D:public A,public B,public C{
    protected:
    int d;
    public:
    void mult(){
        getdata_a();
        getdata_b();
        getdata_c();
        cout<<"Prouct is "<<a*b*c;        
    }
};
int main(){
    D d;
    d.mult();
    
}