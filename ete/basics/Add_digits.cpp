// WAP to add the digits.
// 23=2+3=5
#include <iostream>
using namespace std;
int adddigit(int n){
    int sum=0;
    while (n!=0)
    {
        int rem=n%10;//23%10=3  2
        sum=sum+rem;//0+3=3  3+2=5
        n/=10;//2 0
    }
    return sum; //5
}
int main(){
    int n;
    cout<<"Enter a number ";
    cin>>n;
    cout<<adddigit(n);

}