// • You are given an array, whose size is stored in a variable with the name N
// • The array is stored in a variable with the name arr
// • You have to find the product of all the elements of the array, which are stored at odd indexes
// . For example, consider the value stored in N = 4, and the value stored in arr = [1,2,3,4]. Then, the elements stored at even indexes are 2,4, therefore, the product becomes 2*4 = 8, which is the required answer
#include <iostream>
using namespace std;
int product(int arr[],int n){
    int prod=1;
    for (int i = 0; i <=4; i++)
    {
        if (i%2!=0)
        {
            prod=prod*arr[i];
        }
    }
    return prod;
}
int main(){
    int arr[4]={1,2,3,40};
    
    cout<<product(arr,4);
    
}