#include <iostream>
using namespace std;
int main(){
    int arr[5]={0,0,1,2,3};
    int i=0;
        for (int j = i+1; j <5; j++)
        {
            if (arr[j]!=0)
            {
                swap(arr[i],arr[j]);
                i++;
            }
        }
        
        for (int k = 0; k < 5; k++)
        {
            cout<<arr[k]<<" ";
        }
        
    
}