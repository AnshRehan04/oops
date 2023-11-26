#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool pangram(string s1){
    vector<bool>ans(26,0);
    for (int i = 0; i < s1.size(); i++)
    {
        ans[s1[i]-'a']=1;
    }
    for (int i = 0; i < 26;i++)
    {
        if (ans[i]==0)
        {
            return 0;
        }        
    }
    return 1;
}

int main(){
    string s1;
    cout<<"Enter the string ";
    getline(cin,s1);
    if (pangram(s1))
    {
        cout<<"It is   pangram "<<endl;
    }
    else{
        cout<<"It is  not pangram "<<endl;
    }
    

    
}