#include <iostream>
using namespace std;
// int factorial(int n){
//     int fact=1;
//     for (int i = 1; i <=n; i++)
//     {
//         fact=fact*i;
//     }
//     return fact;
// }

void factorial1(int *n){
    int fact=1;
    for (int i = 1; i <=*n; i++)
    {
        fact=fact*i;
    }
    // cout<<"Factorial is "<<factorial(*n);
    cout<<fact;
}
int main(){
    int n;
    cout<<"Enter the name ";
    cin>>n;
    // cout<<"Factorial is "<<factorial(n);
    factorial1(&n);
}