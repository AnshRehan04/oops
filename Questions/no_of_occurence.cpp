#include <iostream>
using namespace std;
int main(){
    int arr[5]={1,1,2,2,2};
    int k=2;
    int count=0;
    for (int i = 0; i <5; i++)
    {
        if (arr[i]==k)
        {
            count++;
        }
    }
    cout<<count;
}