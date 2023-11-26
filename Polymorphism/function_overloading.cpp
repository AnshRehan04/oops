// Function Overloading is part of Compile Time polymorphism in which name of the function is same with differnent number 
// of arguments or different return type.
#include <iostream>
using namespace std;
class test{
    public:
    void fun(){
        cout<<"I am a Function with no arguments "<<endl;
    }
    void fun(int x){
        cout<<"I am a Function with int arguments "<<endl;
    }
    void fun(double x){
        cout<<"I am a Function with double arguments "<<endl;
    }
};
int main(){
    test t;
    t.fun();
    t.fun(3);
    t.fun(3.2);
}