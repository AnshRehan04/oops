// Brute force
#include <iostream>
using namespace std;
int main(){
    int arr[5]={2,3,9,6,8};
    int k=3;
    for (int i = 0; i <5; i++)
    {
        if (arr[i]<=k)
        {
            k++;
        }
        else{
            break;
        }
    }
    cout<<k;
}