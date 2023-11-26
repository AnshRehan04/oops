#include <iostream>
using namespace std;
void largest(int arr[],int n){
    int large=arr[n-1];
    int i;
    for ( i = n-2; i>=0; i--)
    {
        if (arr[i]>large)
        {
            large=arr[i];
        }
    }
    cout<<arr[i]<<" ";
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
    largest(arr,size);
}