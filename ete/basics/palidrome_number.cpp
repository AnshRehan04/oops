#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number ";
    cin>>n;
    int rev=0;
    int original=n;
    while (n>0)
    {
        int rem=n%10; //123=1p23%10=3   12%10=2
        rev=rev*10+rem; //30+0=30  300+2;
        n/=10;
    }
    if (rev==original)
    {
        cout<<"It is palidrome ";
    }
    else{
        cout<<"It is not Plaidrome ";
    }
    
    
    
}