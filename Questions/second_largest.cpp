#include <iostream>
#include <limits.h>
using namespace std;
int secondlargest(int arr[],int n){
    int maxi=INT_MIN;
    for (int i = 0; i <n; i++)
    {
        if (arr[i]>maxi)
        {
            maxi=arr[i];
        }
    }
    int ans=-1;
    for (int i = 0; i <n; i++)
    {
        if (arr[i]!=maxi)
        {
            ans=max(ans,arr[i]);
        }
    }
    return ans;
    
}
int main(){
    int arr[5]={1,23,45,6,7};
    cout<<"Second largest is "<<secondlargest(arr,5);
}