// WAP to add the digits.
// 23=2+3=5
#include <iostream>
using namespace std;
int adddigit(int n){
    int sum=0;
    while (n!=0)
    {
        int rem=n%10;
        sum=sum+rem;
        n/=10;
    }
    return sum;
}
int main(){
    int n;
    cout<<"Enter a number ";
    cin>>n;
    cout<<adddigit(n);

}