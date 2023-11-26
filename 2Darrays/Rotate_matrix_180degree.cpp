#include <iostream>
using namespace std;
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

    // Transpose the matrix
    for (int i = 0; i < m-1; i++)
    {
        for (int j = i+1; j <n; j++)
        {
            swap(arr[i][j],arr[j][i]);
        }
    }
    // Reverse Each Row.
    for (int i = 0; i < m; i++)
    {
        int s=0;
        int e=m-1;
        while (s<=e)
        {
            swap(arr[i][s],arr[i][e]);
            s++;
            e--;
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
    for (int i = 0; i < m-1; i++)
    {
        for (int j = i+1; j <n; j++)
        {
            swap(arr[i][j],arr[j][i]);
        }
    }
    // Reverse Each Row.
    for (int i = 0; i < m; i++)
    {
        int s=0;
        int e=m-1;
        while (s<=e)
        {
            swap(arr[i][s],arr[i][e]);
            s++;
            e--;
        }
    }
    cout<<"180 degree" ;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    
    
}