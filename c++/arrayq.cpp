#include <iostream>
using namespace std;
int even(int *arr,int n,int *brr){
    int count=0;
    // int oddcount=0;
    int i;
    for ( i = 0; i <n; i++)
    {
        if (arr[i]%2==0)
        {
            count++;
            
        }
    }
    brr[0]=count;
    return brr[0];
}

int odd(int *arr,int n,int *brr){
    int oddcount=0;
    int i;
    for ( i = 0; i <n; i++)
    {
        if (arr[i]%3==0)
        {
            oddcount++;
        }
    }
    brr[1]=oddcount;
    return brr[1];
}

int prime(int *arr,int n,int *brr){
    int oddcount=0;
    int i;
    for ( i = 2; i <n; i++)
    {
        if (arr[i]%i==0)
        {
            oddcount++;
        }
    }
    brr[2]=oddcount;
    return brr[2];
}

int main(){
    int arr[10];
    int brr[6];
    int n;
    cout<<"Enter the size :";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<even(arr,n,brr)<<" "<<odd(arr,n,brr)<<" "<<prime(arr,n,brr);
    // cout<<
}