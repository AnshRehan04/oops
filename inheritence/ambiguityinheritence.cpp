#include <iostream>
using namespace std;
class A{
    public:
    void fun(){
        cout<<"I am class A "<<endl;
    }
};
class B{
    public:
    void fun(){
        cout<<"I am class B "<<endl;
    }
};
class C:public A,public B{
};
int main(){
    C obj;
    // obj.fun();  //It show error of ambiguity as both class A and B has same function
}