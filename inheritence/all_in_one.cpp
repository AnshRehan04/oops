#include <iostream>
using namespace std;
class A{
    int a;
    int b;
    public:
    void show(){
        cout<<"This is Class A "<<endl;
    }
};
class B:public A{
    void show1(){
        cout<<"This is Class B "<<endl;
    };
};
int main(){
    B  b1;
    

}