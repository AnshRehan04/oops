// Merge two Arrays //Conditions :Arrays must be sorted.
#include <iostream>
using namespace std;
void merge(int arr1[],int arr2[],int n,int m,int arr3[]){
    int left=0;
    int right=0;
    int index=0;
    while (left<n && right<m )
    {
        if (arr1[left]<=arr2[right])
        {
            arr3[index++]=arr1[left++];
        }
        else{
            arr3[index++]=arr2[right++];
        }
    }
    while (left<n)
    {
        arr3[index++]=arr1[left++];
    }
    while (right<m)
    {
        arr3[index++]=arr2[right++];
    }
}

void print(int arr3[],int y){
    for (int i = 0; i <y; i++)
    {
        cout<<arr3[i]<<" "; 
    }
    
}
int main(){
    int arr1[5]={0,1,2,3,4};
    int arr2[4]={5,6,7,8};
    int arr3[9];
    merge(arr1,arr2,5,4,arr3);
    print(arr3,9);


}