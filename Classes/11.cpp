#include <iostream>
using namespace std;
class calculator{
    public:
    int entry();
    int sum(int,int);
    // int  display(int);
};

int calculator::entry(){
    int n;
    cout<<"Enter number ";
    cin>>n;
    int n2;
    cout<<"Enter second number ";
    cin>>n2;
    return n;
    return n2;
};
int calculator::sum(int a,int b){
    cout<<"Sum is "<<a+b;
}
int main(){
    calculator obj;
    int n=obj.entry();
    int m=obj.entry();
    obj.sum(n,m);
    // obj.display(f);

}