#include <iostream>
using namespace std;
int reverse(int n){
    int rev=0;
    while (n!=0)
    {
        int rem=n%10;  //123->3  2 1
        rev=(rev*10)+rem;      //3 32 321
        n=n/10;
    }
    return rev;
}
int main(){
    int n;
    cout<<"Enter the number ";
    cin>>n;
    cout<<reverse(n);
}