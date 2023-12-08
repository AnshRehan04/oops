#include <iostream>
using namespace std;
int fib(int n){
    int a=0;
    int b=1;
    int sum;
    for (int i = 0; i <n; i++)
    {
        sum=a+b;
        a=b;
        b=sum;
    }
    return 0;
}
int main(){
    int n;
    cout<<"Enter a number ";
    cin>>n;
    
    
}