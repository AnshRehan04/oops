// WAP to find kth largest Element
#include <iostream>
#include <algorithm>
using namespace std;
int klarge(int arr[],int n,int k){
    sort(arr,arr+5);
    return arr[n-k];
}
int main(){
    int arr[10]={3, 5 ,1 ,7, 8, 18 ,2, 7, 18, 100 };
    int k=3;
    cout<<klarge(arr,10,3);
    
}