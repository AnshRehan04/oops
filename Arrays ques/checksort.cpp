#include <iostream>
using namespace std;
bool checksort(int arr[],int n){
    for (int i = 1; i < n; i++)
    {
        if (arr[i]>=arr[i-1])
        {
        }
        return 1;
    }
    return 1;
    
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
    if(checksort(arr,size)){
        cout<<"Array is Sorted "; 
    }
    else{
        cout<<"Array is not sorted ";
    }
    
}