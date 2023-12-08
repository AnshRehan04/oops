#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cout<<"Enter the string ";
    getline(cin,s);
    
    int i=0;
    while (s[i]!='\0')
    {
        s[i]=s[i]-32;
        i++;
    }
    cout<<s;
    
    
}