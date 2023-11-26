#include <iostream>
using namespace std;
void waveprint(int arr[][3],int m,int n){
    for (int j = 0; j < n; j++)
    {
        if (j%2==0)
        {
            for (int i = 0; i < m; i++)
            {
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            for (int i = m-1; i >=0; i--)
            {
                cout<<arr[i][j]<<" ";
            }
            
        }
        
    }
    
}
int main(){
    int m,n;
    cout<<"Enter the rows ";
    cin>>m;
    cout<<"Enter the cols ";
    cin>>n;
    int arr[3][3];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }
    }
    waveprint(arr,3,3);
}