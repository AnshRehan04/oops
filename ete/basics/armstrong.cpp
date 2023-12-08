#include <iostream>
using namespace std;
bool armstrong(int n){
    int sum=0;
    while (n!=0)
    {
        int r=n%10;
        sum=sum+(r*r*r);
        n/=10;
        if (sum==n)
        {
            return 1;
        }        
    }
    return 0;
    
}
int main(){
    int n;
    cout<<"Enter a number ";
    cin>>n;
    if (armstrong(n))
    {
        cout<<"It is armstrong ";
    }
    else{
        cout<<"It is not armstrong ";
    }
    

}