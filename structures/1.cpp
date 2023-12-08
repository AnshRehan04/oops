#include <iostream> 
#include <algorithm>
using namespace std;
int main(){
    int arr[3]={2,0,10};
    // int asize = sizeofk(arr) / sizeof(arr[0]);
    sort(arr,arr+3);
    for (int i = 0; i < 3; i++)
    {
    cout<<arr[i]<<" ";
    }
    
    
}