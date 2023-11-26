#include <iostream>
using namespace std;
int removeduplicate(int arr[],int n){
    int i=0;
    for (int j = 1; j < n; j++)
    {
        if (arr[i]!=arr[j])
        {
            arr[i+1]=arr[j];
            i++;
        }
    }
    return i+1;
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
    removeduplicate(arr,size);
    printarray(arr,size);
}