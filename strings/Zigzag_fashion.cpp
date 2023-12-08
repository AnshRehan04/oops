#include <iostream>
using namespace std;
void zigzag(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        if (i%2==0 && arr[i]>arr[i+1])
        {
            swap(arr[i],arr[i+1]);
        }
        else if (i%2==1 && arr[i]<arr[i+1])
        {
            swap(arr[i],arr[i+1]);
        }
    }
}

void print(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
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
    zigzag(arr,size);
    print(arr,size);
}