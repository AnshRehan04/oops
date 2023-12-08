// WAP to count the number of frequency of element in an array.
#include <iostream>
using namespace std;
int main(){
    int arr[5]={1,1,2,3,4};
    int n;
    cout<<"Enter the number ";
    cin>>n;
    int count=0;
    for (int i = 0; i <5; i++)
    {
        if (arr[i]==n)
        {
            count++;
        }
    }
    cout<<count;
    
}