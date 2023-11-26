#include <iostream>
using namespace std;                            
class A                            
{                            
    public:
    void display(){                            
        cout<<"Class A\n";                            
    }                            
};                            
class B:public A
{
    public:
    void display(){
        cout<<"Class B\n";
    }
};
// class C{
//     public:
//     void show(){
//         // A::display();
//         // B::display();
//         cout<<"Class C\n";
//     }
// };

int main(){
    B c1;
    c1.display();
    // c1.A::display();
    // c1.B::display();
}