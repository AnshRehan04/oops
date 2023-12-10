#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cout<<"Enter the string ";
    getline(cin,s);
    // cin>>s;
    
    // int i=0;
    // while (s[i]!='\0')
    // {
    //     s[i]=s[i]-32;
    //     i++;
    // }
    // cout<<s;
    // if ((s>='a' &&s<='z') || (s>='A' && s<='Z'))
    //     {
    //         if (s>='a' && s<='z')
    //             s=s-32;
    //         else if(s>='A' && s<='Z'){
    //             s=s+32;
    //         }
    //                 }
    //                 cout<<s;
    
    for(int  i=0;i<s.length();i++){
    if (s[i]>='a' &&s[i]<='z' || s[i]>='A' && s[i]<='Z')
        {
            if (s[i]>='a' && s[i]<='z')
            {
                s[i]=s[i]+32;
            }
            else if(s[i]>='A' && s[i]<='Z'){
                s[i]=s[i]-32;
            }
            }
            
    }
    cout<<s;
}