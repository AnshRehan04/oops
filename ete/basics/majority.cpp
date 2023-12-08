#include <iostream>
using namespace std;
int majority(int arr[]){
    int count=0;
    for (int i = 0; i <5; i++)
    {
        for (int j = 0; j <5; j++)
        {
        if(arr[i]==arr[j]){
            count++;
        }
        }
        if(count>5/2){
            return arr[i];
        }
    }
    return count;
}
int main(){
    int arr[5]={1,2,2,2,2};
    cout<<"Majority Element is "<<majority(arr);
}