#include <iostream>
using namespace std;
int reverse(int n){
    int rev=0;
    while (n!=0)
    {
        int rem=n%10; //123=123%10=3   12%10=2
        rev=rev*10+rem; //30+0=30  300+2;
        n/=10;
    }
    return rev;
}
bool palidrome(int n){
    int reversed=reverse(n);
    if (reversed==n)
    {
        return 1;
    }
    else{
        return 0;
    }
}


int main(){
    int n;
    cout<<"Enter a number ";
    cin>>n;
    if (palidrome(n))
    {
        cout<<"It is Palidrome ";
    }
    else{
        cout<<"It is not Palidrome ";
    }
    

}