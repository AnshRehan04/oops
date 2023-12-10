#include <iostream>
using namespace std;
class A{
    int val;
    public:
    A(int a){
        val=a;
    }
    void display(){
        cout<<"A "<<val<<endl;
    }
};
class B{
    int x;
    public:
    explicit B(int v){
        x=v;
    }
    void display(){
        cout<<"B "<<x;
    }
};
int main(){
    A obj(3);
    obj.display();
    
    A h=9;
    h.display();

    // B c=4;
}
