#include <iostream>
using namespace std;
int majority(int arr[],int n){
    int count=0;
    
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i]==arr[j])
            {
                count++;
            }
            
        }if (count>n/2)
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
    cout<<"Majority element is "<<majority(arr,size);
}