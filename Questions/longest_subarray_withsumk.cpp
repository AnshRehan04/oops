// Brute Force
#include <iostream>
using namespace std;
// int longsum(int arr[],int n,int sum){
//     int len=0;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i; j <n; j++)
//         {
//             int s=0;
//             for (int k = i; k <=j; k++)
//             {
//                 s+=arr[k];
//             }
//             if (s==sum)
//             {
//                 len=max(len,j-i+1);
//             }
//         }
//     }
//     return len;
// }

// Better Approach
int longsum(int arr[],int n,int sum){
    int len=0;
    for (int i = 0; i < n; i++)
    {
        int s=0;
        for (int j = i; j <n; j++)
        {
            s+=arr[j];
            if (s==sum)
        {
            len=max(len,j-i+1);
        }
        }
    } 
    return len;
    
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
    int sum;
    cout<<"Enter the sum ";
    cin>>sum;
    cout<<"Max subarray length is "<<longsum(arr,size,sum);

}