#include <iostream>
using namespace std;
void display(int arr[],int n){
    cout<<"The Array is ";
    for (int i = 0; i <n; i++)
    {
        cout<<arr[i];
        cout<<" ";
    }
}

int main(){
    int arr[10];
    int size;
    cout<<"Enter the size ";
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    display(arr,size);
}

