#include <iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter rows ";
    cin>>m;
    int n;
    cout<<"Enter columns ";
    cin>>n;
    int arr[m][n];
    int arr1[m][n];
    for (int i = 0; i <m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }
    }
    // Transpose
    for (int i = 0; i <m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr1[i][j]=arr[j][i];
        }
    }
    // Print
    cout<<"Tanspose "<<endl;
    for (int i = 0; i <m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // arr1[i][j]=arr[j][i];
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }
    
}