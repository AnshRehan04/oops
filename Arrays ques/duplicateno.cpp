#include <iostream>
using namespace std;
int duplicate(int arr[],int n){
    for (int i = 1; i < n; i++)
    {
        if (arr[i]==arr[i-1])
        {
            return arr[i];
        }
    }
    return -1;
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

    cout<<"Duplicate is "<<duplicate(arr,size);
}