#include <iostream>
using namespace std;
int maxones(int arr[],int n){
    int count=0;
    int maxi=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==1)
        {
            count++;
        }
        else{
            count=0;
        }
        maxi=max(maxi,count);
    }
    cout<<"Max ones is "<<maxi;
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
    maxones(arr,size);
}