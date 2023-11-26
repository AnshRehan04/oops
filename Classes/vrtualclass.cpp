#include <iostream>
using namespace std;
class A{
    public:
    A(){
        cout<<"Constructor A\n";
    }
    void display(){
        cout<<"Hello Class A\n";
    }
};
int main(){
    A d1;
    d1.display();
    return 0;
}