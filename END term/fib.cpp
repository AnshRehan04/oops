// Using Recursion Fiboncii series 
#include <iostream>
using namespace std;
int fib(int n){
    if (n<=1)
    {
        return n;
    }
    return fib(n-2)+fib(n-1);
}
int main(){
    int n;
    cout<<"Enter a number ";
    cin>>n;
    cout<<fib(n);
}