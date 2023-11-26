#include <iostream>
using namespace std;
// In constructor classname and function name is same.
// Constructor is a member function of a class, whose name is same as the class name.
// Syntax
// class <class-name>{
//     public:
//     class_name(c){
    //statements
//     }
// }
class constructor{
    public:
    constructor(){  //Default constructor.
        cout<<"constructor is called "<<endl;
    }
    constructor(int a){  //Parameterized constructor.
        cout<<"Num is "<<a;
    }
};
int main(){
    constructor obj1,obj2;  //We don't need to call the constructor when we declared the obj it is automatically called.
    constructor c1(2);
    return 0;
}