#include <iostream>
using namespace std;
class second;
class first{
    int x=10; //Private 
    public:
    
    friend int area(first,second);
};
class second{
    int y=2; //Private 
    public:
    friend int area(first,second);
};

int area(first f,second s){
    return 2*(f.x*s.y);
}

int main(){
    first obj1;
    second obj2;
    int s=area(obj1,obj2);
    cout<<s;
    
}