#include <iostream>
using  namespace std;
int sum(int arr[3][3]){
        int sum=0;
    for (int i = 0; i <3; i++)
    {
        for (int j = 2; j< 3; j--)
        {
            sum=sum+(arr[i][j]*arr[i][j]);
            
        }
    }    
    return sum;
}
int main(){
    int arr[3][3];
    for (int i = 0; i <3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>>arr[i][j];
        }
    }
    
}