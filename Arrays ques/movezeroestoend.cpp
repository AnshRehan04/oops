// Write a code to move zeroes to end 
#include <iostream>
using namespace std;
void movezeroes(int arr[],int n){
    int i=0;
    for (int j = 0; j < n; j++)
    {
        if (arr[j]!=0)
        {
            swap(arr[j],arr[i]);
            i++;
        }
    }
}
void printarray(int arr[],int n){
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
    movezeroes(arr,size);
    printarray(arr,size);
}