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
    int ele;
    cout<<"Enter element ";
    cin>>ele;
    bool found=false;
    for (int i = 0; i <m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j]==ele)
            {
                found=true;
                break;
            }
            
        }
    }
    if (found)
    {
        cout<<"1";
    }
    else{
        cout<<"0";
    }
    
}