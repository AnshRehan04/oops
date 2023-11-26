#include <iostream>
using namespace std;
class test{
    public:
    static int x;
};
int test::x=20;
int main(){
    test obj,obj1,obj2;
    cout<<"\nstatic data example:\n"<<obj.x;
    cout<<"\nobj1.x"<<obj1.x<<"\nobj2.x"<<obj2.x;
    return 0;
}