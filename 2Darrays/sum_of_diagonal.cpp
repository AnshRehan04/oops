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
    int sum=0;
    for (int i = 0; i < m; i++)
    {
        
            sum+=arr[i][i];
        
    }
    for (int j = 0; j < m; j++)
    {
        
            sum+=arr[j][j];
        
    }
    cout<<"Sum of diagonal is  "<<sum;
}