#include <iostream>
using namespace std;
void leftrotate(int arr[],int n){
    int temp[n];
    for (int i = 1; i <n; i++)
    {
        temp[i-1]=arr[i];
    }
    temp[n - 1] = arr[0];
    for (int i = 0; i < n; i++)
    {
        cout<<temp[i]<<" ";
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
    leftrotate(arr,size);

}