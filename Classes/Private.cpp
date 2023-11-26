#include <iostream>
using namespace std;
class hero{
    public:
    int a;
    int b;
    void print(){
        cout<<a<<endl;
    }
};

int main(){
    hero h1; //Object is created.

    // To Give them value we use dot operator.

    h1.a=50;
    h1.b=40;
    // cout<<h1.a;  //We cannot access it as it is Private.
    h1.print();  //As print() is Public so we can access it inside main function.  //50

    cout<<h1.a<<endl;  //50
    cout<<h1.b;  //40
}