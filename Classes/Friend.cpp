#include <iostream>
using namespace std;
class second;
class first{
    int x=10; //Private 
    public:
    friend int add(first,second);
};
class second{
    int y=2; //Private 
    public:
    friend int add(first,second);
};

int add(first f,second s){
    return f.x+s.y;
}

int main(){
    first obj1;
    second obj2;
    int s=add(obj1,obj2);
    cout<<s;
    
}