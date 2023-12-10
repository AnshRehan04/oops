#include <iostream>
using namespace std;
int main(){
    int arr[6]={1,2,-1,-3,4,-10};
    for (int i = 0; i < 6; i++)
    {
        if (arr[i]<0)
        {
            cout<<arr[i]<<" ";
        }
        
    }
    
}