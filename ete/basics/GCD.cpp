// WAP to calculate the GCD between 2 no.s
#include <iostream>
using namespace std;
int gcd(int a,int b){
    for (int i = a; i>=1; i--)
    {
        if (a%i==0 && b%i==0)
        {
            return i;
            break;
        }
        
    }
    
}
int main(){
    int a;
    cout<<"Enter first no ";
    cin>>a;

    int b;
    cout<<"Enter second no ";
    cin>>b;
    cout<<gcd(a,b);

}