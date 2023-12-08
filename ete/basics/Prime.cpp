// To check wheather a number is prime or not.
// 7%2==1
#include <iostream>
using namespace std;
bool isprime(int n){
    if (n<=2)
    {
        return 0;
    }
    
    for (int i = 2; i < n; i++)
    {
        if (n%i==0)
        {
            return 0;
        }
    }
    return 1;
    
    
}
int main(){
    int n;
    cout<<"Enter a number ";
    cin>>n;
    bool prime=isprime(n);
    if (prime)
    {
        cout<<"It is Prime "; 
    }
    else{
        cout<<"It is not Prime ";
    }
    
    
    
}