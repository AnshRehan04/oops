// Wap to find the wheather arr1 is subset of arr2.
#include <bits/stdc++.h>
using namespace std;
bool subset(int arr1[],int arr2[],int n,int m){
    int i=0;
    int j=0;
    sort(arr1,arr1+n);
    sort(arr2,arr2+m);
    while (i<n && j<m)
    {
        if(arr1[i]<arr2[j]){
            i++;
        }
        else if(arr1[i]==arr2[j]){
            i++;
            j++;
        }
        else{
            return false;
        }
    }
    return j==m;
}
int main(){
    int arr1[5]={1,2,3,4,5};
    int arr2[5]={1,2,3,6,8};
    if(subset(arr1,arr2,5,5)){
        cout<<"It is a subset ";
    }
    else{
        cout<<"It is not subset ";
    }
}