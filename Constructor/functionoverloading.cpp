#include <iostream>
using namespace std;
class cons{
    public:
    cons(){
        cout<<"Default constructor "<<endl;
    }
    cons(int a){
        cout<<a<<endl;
    }
    cons(int a,int b){
        cout<<"Sum is "<<a+b;
    }
};
int main(){
    cons c1;
    cons c2(2);
    cons c3(2,3);
    return 0;
}