#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number ";
    cin>>n;
    int sum=0;
    int i=0;
    while (n!=0)
    {
        int rem=n%10;
        sum=sum+rem*pow(2,i);
        i++;
        n/=10;
    }
    cout<<sum;
    
}