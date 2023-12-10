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
    int res[2][2];

    for (int i = 0; i <m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }
    }
    int m1;
    cout<<"Enter rows ";
    cin>>m1;
    int n1;
    cout<<"Enter columns ";
    cin>>n1;
    int arr1[m1][n1];

    for (int i = 0; i <m1; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            cin>>arr1[i][j];
        }
    }
    // Sum
    for (int i = 0; i <m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            res[i][j]=arr[i][j]+arr1[i][j];
        }
    }
    // Result
    for (int i = 0; i <m; i++)
    {
        cout<<endl;
        for (int j = 0; j < n; j++)
        {
            cout<<res[i][j]<<" ";
        }
    }
}