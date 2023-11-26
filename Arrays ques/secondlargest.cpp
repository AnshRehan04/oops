#include <iostream>
#include <limits.h>
using namespace std;
int secondlargest(int arr[],int n){
    int ans=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>ans)
        {
            ans=arr[i];
        }
    }
    int maxi=-1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]!=ans)
        {
            maxi=max(maxi,arr[i]);
        }
    }
    return maxi;
}
int main(){
    int arr[10];
    int size;
    cout<<"Enter the size ";
    cin>>size;
    for (int i = 0; i <size; i++)
    {        
        cin>>arr[i];
    }
    cout<<"Second largest is "<<secondlargest(arr,size);
}