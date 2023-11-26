#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
vector<int> leader(int arr[],int n){
    vector<int> ans;
    int maxi=INT_MIN;
    for (int i = n-1; i>=0; i--)
    {
        if (arr[i]>maxi)
        {
            ans.push_back(arr[i]);
        }
        //Updating maxi
        maxi=max(maxi,arr[i]);
    }
    return ans;
    }
void printarray(int arr[],int n){
    for (int i = 0; i <n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
int main(){
    int arr[10];
    int size;
    cout<<"Enter the size ";
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    leader(arr,size);
    printarray(arr,size);
}