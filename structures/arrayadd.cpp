#include <iostream>
using namespace std;
int main(){
    int arr[100];
    int n;
    cout<<"Enter the size";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int x;
    int i;
    cout<<"What to add";
    cin>>x;
    for (int i = n; i >=0; i--)
    {
        arr[i]=arr[i]+x;
        
        if (arr[i]>9)
        {
            arr[i]=0;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i];
    }
    
    
    
    
}