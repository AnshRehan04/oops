#include <iostream>
using namespace std;
int sum(int n,int x){
    // x=0;
    if (n>=1)
    {
        x=x+n%10;
        n=n/10;
        sum(n,x);
    }
    else
    return x;
    // sum(n);

    // if (n<1)
    // {
    //     return x;
    // }
    // else{
    //     x=x+n%10;
    //     n=n/10;
    // }
    
    
    
    
}
int main(){
    int n;
    cout<<"Enter the no ";
    cin>>n;
    cout<<sum(n,0);
}