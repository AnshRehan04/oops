#include <iostream>
using namespace std;
void intersection(int arr1[],int arr2[],int n,int m){
    int i=0;
    int j=0;
    while (i<n && j<m)
    {
        if (arr1[i]<arr2[j])
        {
            i++;
        }
        else if(arr1[i]>arr2[j]){
            j++;
        }
        else{
            i++;
            j++;
            cout<<arr2[j]<<" ";
        }
    }
}
int main(){
    int arr1[5]={1,2,3,2,4};
    int arr2[5]={1,2,5,3,4};
    intersection(arr1,arr2,5,5);
}