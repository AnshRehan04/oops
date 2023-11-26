// Write a code in which you have to replace the even index with 0 and odd index with 1
#include <iostream>
using namespace std;
void change(int arr[],int n){
    int i;
    for ( i = 0; i < n; i++)
    {
        if (i%2==0)
        {
            arr[i]=0;
        }
        else{
            arr[i]=1;
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
    change(arr,size);
    printarray(arr,size);
}