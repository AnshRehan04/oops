#include <iostream>
using namespace std;
class second;
int add(int, int );
class first{
    int a;
    public:
    void getdata();
    void display();
    void first::getdata(){
        cout<<"Enter first number ";
        cin>>a;
    }
    friend add(first,second);
};
class second{
    int b;
    public:
    void getdata();
    void display();
    void second::getdata(){
        cout<<"Enter second number ";
        cin>>b;
    }
    friend add(first,second);
};

int add(first f,second s){
    return f.a+s.b;
}

int main(){
    first obj1;
    second obj2;
    int s=add(obj1,obj2);
    cout<<s;
    
}