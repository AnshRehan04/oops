#include <iostream>
#include <vector>
using namespace std;
int main(){
//     vector<int> ans;
//     ans.push_back(2);
//     ans.push_back(32);
//     ans.push_back(22);
//     // int n=ans.size();
//     // for (int i = 0; i <n; i++)
//     // {
//     //     cout<<ans[i]<<" ";
//     // }
//     cout<<"Before POP "<<endl;
//     for(int it:ans){
//         cout<<it<<" ";
//     }
//     ans.pop_back();
//     cout<<"After POP "<<endl;
//     for(int it:ans){
//         cout<<it<<" ";
//     }
//     cout<<endl;
    vector<int> a (6);
    // a.push_back(23);
    // a.push_back(233);
    // a.push_back(233);
    // a.push_back(2323);
    // a.push_back(232);
    int n=a.size();
    for(auto it:a){
        cout<<it<<" "<<endl;
    }
    cout<<n;
}