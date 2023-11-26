#include <iostream>
using namespace std;
class A{
    public:
    A(){
        cout<<"Class A"<<endl;
    }
};
class B{
    public:
    B(){
        cout<<"Class B"<<endl;
    }
};

// First sub class
class C:public A{
};

// Second sub class
class D:public A,public B{
};
int main(){
    D d;
}