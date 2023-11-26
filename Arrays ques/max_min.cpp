// Write a code to print the max and min in an array
#include <iostream>
#include <limits.h>
using namespace std;
int maximum(int arr[],int n){
    int max=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
    
}
int minimum(int arr[],int n){
    int min=INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]<min)
        {
            min=arr[i];
        }
    }
    return min;
    
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

    cout<<"Maximum is "<<maximum(arr,size)<<endl;
    cout<<"Minimum is "<<minimum(arr,size);
}