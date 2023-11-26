#include <iostream>
using namespace std;
void subarray(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        int start=arr[i];
        for (int j = i; j <n; j++)
        {
            cout<<arr[i]<<" "<<arr[j]<<" ";
        }
        cout<<endl;
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
    subarray(arr,size);
}