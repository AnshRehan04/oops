#include <iostream>
using namespace std;
void myfun(int arr[],int n){
    int count=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <n; j++)
        {
            if (i!=j && arr[i]>=arr[j])
            {
                count++;
            }
            
        }
        if (count>=2)
        {
            cout<<arr[i]<<" ";
        }
        
        
    }
    
}
int main(){
    int arr[10];
    int n;
    cout<<"Enter the size ";
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    myfun(arr,n);
}