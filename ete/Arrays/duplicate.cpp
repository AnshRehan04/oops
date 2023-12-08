// To check the duplicate in array and prints their sum.
#include <iostream>
using namespace std;
int main(){
    int arr[5]={1,2,2,4,4};
    int sum=0;
    for (int i = 0; i <5; i++)
    {
        for (int j = i+1; j <5; j++)
        {
            if (arr[i]==arr[j])
            {
                // cout<<"Duplicate ";
                cout<<arr[i]<<" "<<endl;
                sum+=arr[i];
            }
        }
    }
    cout<<"Sum of duplicate is "<<sum;
}