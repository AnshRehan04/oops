// WAP to transpose the matrix.
#include <iostream> 
using namespace std;
int main(){
    int m,n;
    int arr[10][10];
    int trans[10][10];
    cout<<"Enter the rows ";
    cin>>m;
    cout<<"Enter the cols ";
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
            trans[j][i]=arr[i][j];
        }
    }

    cout<<"Transpose matrix is "<<endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<trans[i][j]<<" ";
        }
        cout<<endl;
    }
}