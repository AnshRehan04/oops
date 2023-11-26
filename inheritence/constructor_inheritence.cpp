#include <iostream>
using namespace std;
class A{
    public:
    A(){
        cout<<"Constructor with Class A "<<endl;
    }
};
class B{
    public:
    B(){
        cout<<"Constructor with Class B "<<endl;
    }
};
class C:public A,public B{
    public:
    C():A(),B(){
        cout<<"Constructor with Class C "<<endl;
    }
};
int main(){
    C c1;
    return 0;
}