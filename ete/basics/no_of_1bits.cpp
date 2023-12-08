#include <iostream>
using namespace std;
int onebits(int n){
    int count=0;
    while (n>0)
    {
        n=n&n-1;
        count++;
        // n/=10;
    }
    return count;    
}
int main(){
    int n;
    cout<<"Enter a number ";
    cin>>n;
    cout<<"No of 1 bits are "<<onebits(n);
}