#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number ";
    cin>>n;
    int sum=0;
    while (n!=0)
    {
        int rem=n%10;
        sum+=rem;
        n/=10;
    }
    cout<< sum;
    
}