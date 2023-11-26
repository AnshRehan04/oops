#include <iostream>
using namespace std;
class calc{
    int a;
    int b;
    public:
    calc(){
        int a=10;
        int b=20;
    }
    void sum(int a,int b){
        cout<<a+b;
    }
};
int main(){
    calc obj;
    obj;
    obj.sum(10,20);
}