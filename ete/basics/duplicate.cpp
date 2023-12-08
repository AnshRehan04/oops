// Wap to check the duplicate 
#include <iostream>
using namespace std;
int duplicate(int arr[]){
    for (int i = 1; i <5; i++)
    {
        if (arr[i]==arr[i-1])
        {
            return arr[i];
        }
    }
    return -1;
}
int main(){
    int arr[5]={1,12,12,3,4};
    cout<<"Duplicate is "<<duplicate(arr);
}