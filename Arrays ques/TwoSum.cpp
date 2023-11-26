#include<bits/stdc++.h>
using namespace std;
vector<int>twosum(vector<int>v,int target){
    vector<int> ans;
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = i+1; j < ans.size(); j++)
        {
            if(v[i]+v[j]==target){
                ans.push_back(i);
                ans.push_back(j);
            }
        }
    }
    sort(ans.begin(),ans.end());
        return ans;
}

int main() {
    int n; 
    cout<<"Enter the size " ;
    cin>>n; // taking size of vector from user
    int a;
    vector<int> v;
    // we can also mention size here like
    // vector<int> v(n);
    for(int i=0 ; i<n ; i++)
    {
        cin>>a;
        v.push_back(a);
    }
    for(auto &p : v)
    {
        cout<<p<<" ";
    }
    int target;
    cout<<endl;
    cout<<"What is the target ";
    cin>>target;
    twosum(v,n);
    return 0;
}