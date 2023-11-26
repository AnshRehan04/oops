#include <iostream>
using  namespace std;
class Multiply
{
    private:
    int a,b,c;
    
    public:
    void getdata();
    void logic();
    void display();
};
void Multiply::getdata(){
    cout<<"Enter two numbers ";
    cin>>a>>b;
}
void Multiply::logic(){
    c=a*b;
}
void Multiply::display(){
    cout<<" Product is "<<c;
}


