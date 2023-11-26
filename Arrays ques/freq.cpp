#include <iostream>
using namespace std;
int freq(int arr[],int n,int number){
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==number)
        {
            count++;
        }
    }
    return count;
}
int main(){
int arr[10];
    int size;
    cout<<"Enter the size ";
    cin>>size;
    for (int i = 0; i <size; i++)
    {
        cin>>arr[i];
    }
    int number;
    cout<<"Enter the number ";
    cin>>number;
    cout<<"The frequency of number is "<<freq(arr,size,number);
}