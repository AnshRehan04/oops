// Given an integer array nums, return true if any value appears at least twice in the array,
//  and return false if every element is distinct.
// Example 1:
// Input: nums = [1, 2, 3, 1]
// Output: true
#include <iostream>
using namespace std;
bool myfun(int arr[],int n){
    
    for (int i = 0; i < n; i++)
    {
        int count=0;
        for (int j = i+1; j < n; j++)
        {
            if (arr[i]==arr[j])
            {
                return 1;
            }
        }
        
    }
    return 0;
    
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
    if (myfun(arr,size))
    {
        cout<<"true ";
    }
    else{
        cout<<"false ";
    }
}