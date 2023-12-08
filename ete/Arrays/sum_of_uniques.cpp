#include <iostream>
#include <set>
using namespace std;
int sum(int arr[],int n){
    int ans=0;
    for (int i = 0; i < n; i++)
    {
        ans=ans^arr[i];
    }
    return ans;

    
}
int main(){
    int arr[7]={3 ,5 ,3 ,3 ,5 ,6};
    cout<<sum(arr,7);
}