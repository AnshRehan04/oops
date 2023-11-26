#include <iostream>
using namespace std;
class A{
    public:
    virtual void show()=0;
};
class B:public A{
    public:
    void show(){
        cout<<"B derived from A "<<endl;
    }
};
int main(){
    A *bptr;
    B d;
    bptr=&d;
    bptr->show();

}