#include <iostream>
#include <vector>
#include <set>
using namespace std;
vector<int> Union(int arr1[],int arr2[],int n,int m){
    set<int> st;
    for (int i = 0; i < n; i++)
    {
        st.insert(arr1[i]);
    }
    for (int i = 0; i < m; i++)
    {
        st.insert(arr2[i]);
    }
    for(auto it:st){
        cout<<it<<" ";
    }
}
int main(){
    int arr1[5]={1,2,3,4,5};
    int arr2[5]={6,7,2,7,10};
    Union(arr1,arr2,5,5);
}