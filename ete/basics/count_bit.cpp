// WAP to count the number of set bit.
// 8=1000=1
#include <iostream>
using namespace std;
int setbit(int n){
    int count=0;
    while (n!=0)
    {
        if (n&1==1)
        {
            count++;
        }
        n=n>>1;
    }
    return count;
}
int main(){
    int n;
    cout<<"Enter the number ";
    cin>>n;
    
    cout<<"No of 1 bits "<<setbit(n);
    
}