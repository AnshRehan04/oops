#include <iostream>
using namespace std;
int main(){
    int arr[5]={10,34,-5,-4,0};
    int sum=0;
    int maxi=arr[0];
    for (int i = 0; i < 5; i++)
    {
        sum+=arr[i];
        maxi=max(maxi,sum);
        if(sum<0){
            sum=0;
        }
    }
    cout<<maxi;
    
    
}