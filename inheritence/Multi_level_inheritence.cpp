// Multi-level Inheritence are those in which we inherited the derived class from base class attribute.
#include <iostream>
using namespace std;
class A{
    public:
    void adisplay(){
        cout<<"Class A"<<endl;
    }
};
class B{
    public:
    void bdisplay(){
        cout<<"Class B"<<endl;
    }
};
class C:public A,public B{

};
int main(){
    C c;
    c.adisplay();
    c.bdisplay();
}