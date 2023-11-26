// Inheritence is the property in which we can derived a class from existing class
// The inherited class is called as derived class(child class) and the properties of the main class 
// we inherited is called as parent class(base class).
#include <iostream>
using namespace std;
// class person{
//     private:
//     int id;
//     char name[20];
//     public:
//     void set(){
//         cout<<"Enter the id ";;
//         cin>>id;
//         cout<<"Enter the name ";
//         cin>>name;
//     }
//     void display(){
//         cout<<"Id is "<<id<<endl<<"name is "<<name<<endl;
//     }
// };
// class child:private person{
//     int fee;
//     char course[30];
//     public:
//     void set_s(){
//         set();
//         cout<<"Enter the fee ";
//         cin>>fee;
//         cout<<"Enter the course ";
//         cin>>course;
//     }
//     void display_s(){
//         display();
//         cout<<"fee is "<<fee<<endl<<"coursename is "<<course<<endl;
//     }
// };

class A{
    public:
    void display(){
        cout<<"Class A " ;
    }
};
class B:public A{
    public:
    void display(){
        cout<<"Class B " ;
    }
};
int main(){
    // child s;
    // s.set_s();
    // s.display_s();
    B b;
    b.display();
}