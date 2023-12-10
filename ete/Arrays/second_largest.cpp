#include <iostream>
#include <limits.h>
using namespace std;
int main(){
    int arr[5]={12,34,56,78,90};
    int maxi1=INT_MIN;
    int ans=-1;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i]>maxi1)
        {
            maxi1=arr[i];
        }
    }
    for (int i = 0; i < 5; i++)
    {
        if (arr[i]!=maxi1)
    {
        ans=max(ans,arr[i]);
    }
    }
    cout<< ans;
    
    
}