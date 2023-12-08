// WAP tp check wheather a string is palidrome or not.
#include <iostream>
#include <string>
using namespace std;
string reversed(string s){
    int n=s.length();
    int st=0;
    int e=n-1;
    while (st<=e)
    {
        swap(s[st],s[e]);
        st++;
        e--;
    }
    return s;
}
int main(){
    string s;
    cout<<"Enter a string ";
    getline(cin,s);
    if (reversed(s)==s)
    {
        cout<<"It is Palidrome ";
    }
    else{
        cout<<"It is not Palidrome ";
    }
}