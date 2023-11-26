// Write a code to transpose a matrix
#include <iostream>
using namespace std;

int main(){
    int m,n;
    int arr[m][n];
    cout<<"Enter the column ";
    cin>>m;
    cout<<"Enter the rows ";
    cin>>n;
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
            cout<<arr[i][j];
        }
        
    }
    
}