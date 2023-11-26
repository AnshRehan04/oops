// Given an array of integers. Find the Inversion Count in the array.
#include <iostream>
using namespace std;
int inversioncount(int arr[],int N){
    int count=0;
        for(int i=0;i<N;i++){
            for(int j=1;j<N;j++){
                if(arr[i]>arr[j] && i<j){
                    count++;
                }
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
    cout<<"Number of pairs are "<<inversioncount(arr,size);
}