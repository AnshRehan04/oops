// To calculate the ncr of a number
// ncr=factorial(n)/factorial(r)*factorial(n-r);
// 4c2=Factorial(4)/factorial(2)*factorial(2);
#include <iostream>
using namespace std;
int factorial(int n){
    int fact=1;
    for (int i = 1; i <=n; i++)
    {
        fact=fact*i;
    }
    return fact;
}
int ncr(int n ,int r){
    int num=factorial(n);
    int deno=factorial(r)*factorial(n-r);
    return num/deno;
}
int main(){
    int n;
    cout<<"Enter n ";
    cin>>n;
    int r;
    cout<<"Enter r ";
    cin>>r;
    cout<<"NCR is "<<ncr(n,r);
    // cout<<factorial(n);
}