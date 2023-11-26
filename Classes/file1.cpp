#include <iostream>
using  namespace std;

class add
{
    private:
    int a,b,c;
    
    public:
    void getdata();
    void logic();
    void display();
};
void add::getdata(){
    cout<<"Enter two numbers";
    cin>>a>>b;
}
void add::logic(){
    c=a+b;
}
void add::display(){
    cout<<"Sum is "<<c;
}


