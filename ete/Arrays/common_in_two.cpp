// WAP to insert common element between 2 arrays in new vector.
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int arr[5]={1,2,8,9,5};
    int arr1[5]={1,2,7,8,9};
    vector<int> ans;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <5; j++)
        {
            if (arr[i]==arr1[j])
            {
                ans.push_back(arr[i]);
            }
        }
    }
    for(int it:ans){
        cout<<it<<" ";
    }
    
}