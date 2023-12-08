#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter first number ";
    cin>>a;
    int b;
    cout<<"Enter second number ";
    cin>>b;

    int prime;
    for (int i = a; i <b; i++)
    {
        prime=1;
        for (int j = 2; j <b; j++)
        {
            if (i%j==0)
            {
                prime=0;
                break;
            }
        }
        if (prime)
    {
        cout<<i<<" ";
    }
    }
    
    
    
}