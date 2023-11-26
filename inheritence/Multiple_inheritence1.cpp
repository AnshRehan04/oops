// Multiple inheritence are those in which we there is one base class and multiple derieved class is inherited from it.
#include <iostream>
using namespace std;
class A{
    public:
    void adisplay(){
        cout<<"class A "<<endl;
    }
};
class B{
    public:
    void bdisplay(){
        cout<<"class B "<<endl;
    }
};
class C:public A,public B{
    public:
    void cdisplay(){
        cout<<"class C "<<endl;
    }
};
int main(){
    C c;
    c.adisplay();
    c.bdisplay();
    c.cdisplay();
}