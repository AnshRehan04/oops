#include <iostream>
using namespace std;
int maxproduct(int arr[],int n){
    int product=-1;
    for (int i = 0; i <n; i++)
    {
        for(int j=i+1;j<n;j++){
        if (arr[i]*arr[j]>product)
        {
            product=arr[i]*arr[j];
        }
        }
    }
    return product;
    
}
int main(){
    int arr[5]={1,34,5,-9,1};
    cout<<"Max product is "<<maxproduct(arr,5);
}