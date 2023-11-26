#include <iostream>
using namespace std;
void transpose(int arr[10][10],int m,int n){
    int arr1[m][n];
    for (int i = 0; i <m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr1[j][i]=arr[i][j];
        }
    }
    for (int i = 0; i <m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<arr1[i][j];
        }
    }
}
int main(){
    int m,n;
    cout<<"Enter the rows ";
    cin>>m;
    cout<<"Enter the cols ";
    cin>>n;
    int arr[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    // transpose(arr[2][2],m,n);
    
    
}