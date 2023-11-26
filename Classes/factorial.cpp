#include <iostream>
using namespace std;
class factorial{
    public:
    int getdata();
    int Logic(int );
    int display(int );
};

int factorial::getdata(){
    int n;
    cout<<"Enter a number ";
    cin>>n;
    return n;
};

int factorial::Logic(int a){
    int fact=1;
    for (int i = 2; i <=a; i++)
    {
        fact=fact*i;
    }
    return fact;
};
int factorial::display(int fact){
    cout<<"Factorial "<<fact;
}
int main(){
    factorial obj;
    int n=obj.getdata();
    int f=obj.Logic(n);
    obj.display(f);
}