// WAP to sort the array.
#include <iostream>
using namespace std;
void sortarray(int arr[]){
    for (int i = 0; i <5; i++)
    {
        for (int j = i+1; j <5; j++)
        {
            if (arr[i]>=arr[j])
            {
                swap(arr[i],arr[j]);
            }
        }
    }
}
void display(int arr[]){
    for (int i = 0; i <5; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
int main(){
    int arr[5]={27,12,-1,0,10};
    sortarray(arr);
    display(arr);
}