#include <iostream>
using namespace std;
void printarray(int arr[2][2]){
    cout<<"Output array ";
    for (int i = 0; i <2; i++)
    {
        for ( int j = 0; j <2; j++)
        {
            // cout<<endl;
            cout<<arr[i][j];
        }
    }
}
int main(){
    int arr[2][2];
    for (int i = 0; i <2; i++)
    {
        for ( int j = 0; j <2; j++)
        {
            cin>>arr[i][j];
        }
    }
    printarray(arr);
    
}