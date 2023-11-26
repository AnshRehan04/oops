// Write a code for missing number in an array.
#include <iostream>
using namespace std;
int missingnumber(int arr[],int n,int number){
    int sum1=number*(number+1)/2;
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];
    }
    cout<<"Missing number is "<<(sum1-sum); 
    
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
    missingnumber(arr,size,number);
}