#include <iostream>
using namespace std;
int main(){
    int arr[5]={2,3,-1,2,3};
    int sum=0;
    int leftsum=0;
    for (int i = 0; i < 5; i++)
    {
        sum+=arr[i];
    }
    for (int i = 0; i < 5; i++)
    {
        sum=sum-arr[i];
        if (leftsum==sum)
        {
            // cout<< arr[i];
            cout<<i;
        }
        leftsum=leftsum+arr[i];
    }
    // cout<<-1;
}