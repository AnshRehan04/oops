// #include <iostream>
// using namespace std;
// class A{
//     public:
//      void display(){
//         cout<<"This is class A";
//     }
// };
// class B:public A{
//     public:
//     void display(){
//         cout<<"This is class B";
//     }
// };
// int main(){
//     A *ptr=new B();
//     ptr->display();  //Early binding
//     // obj.display();
// }

#include <iostream>
using namespace std;
class A{
    public:
    void display(){
        cout<<"This is class A";
    }
};
class B:public A{
    public:
    void display() {
        cout<<"This is class B";
    }
};
int main(){
    A *ptr=new B();
    ptr->display();  //Late binding //This is class B
    // obj.display();
}