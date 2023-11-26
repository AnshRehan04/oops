#include <iostream>
using namespace std;
void twosum(int arr[],int n,int target){
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j <  n; j++)
        {
            if (arr[i]+arr[j]==target)
            {
                cout<<arr[i]<<" , "<<arr[j]<<endl;
            }
            
        }
        
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
    int target;
    cout<<"Enter the target ";
    cin>>target;
    twosum(arr,size,target);
}