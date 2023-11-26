#include <iostream>
using namespace std;
int majority(int arr[],int n){
    int count=0;
    for (int i = 0; i < n; i++)
    {
        for (int  j = i+1; j < n; j++)
        {
            if (arr[i]==arr[j])
            {
                count++;
            }
        }
        if (count>>arr[i])
        {
            return arr[i];
        }
    }
}
int main(){
    int arr[20];
    int n;
    cout<<"Enter the size";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<majority(arr,n);
}