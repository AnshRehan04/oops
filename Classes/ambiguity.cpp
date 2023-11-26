#include <iostream>
using namespace std;
class A
{
    public:
    void display(){
        cout<<"Class A\n";
    }
};
class B
{
    public:
    void display(){
        cout<<"Class B\n";
    }
};
class C:public A,public B{
    public:
    void show(){
        // A::display();
        // B::display();
        cout<<"Class C\n";
    }
};

int main(){
    C c1;
    c1.show();
    c1.A::display();
    c1.B::display();
}