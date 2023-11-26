#include <iostream>
using namespace std;
int a=0;
class call{
    public:
    call(){
        a++;
        cout<<a<<" "<<"constructor called"<<endl;
    }
    ~call(){
        cout<<a<<" "<<"Destructor called"<<endl;
        --a;
    }
};
int main(){
    call obj1,obj2;
}