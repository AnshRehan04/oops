#include <iostream>
#include <string>
using namespace std;
int main(){
    string name;
    cout<<"Enter the address ";
    getline(cin,name);
    string ans;
    int n=name.size();
    int index=0;
    while (index<n)
    {
        if (name[index]=='.')
        {
            ans=ans+"[.]";
        }
        else{
            ans=ans+name[index];
            index++;
        }
    }
    cout<<ans;
    
}