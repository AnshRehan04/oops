// WAP to check wheather the given string is uppercase or lowercase.
#include <iostream>
#include <string>
using namespace std;
string check(string n){
    for (int i = 0; i <n.length(); i++)
    {
        if (n[i]>='a' && n[i]<='z')
        {
            cout<<"It is Lowercase "; 
        }     
    }
    cout<<"It is uppercase ";
}
int main(){
    string n;
    cout<<"Enter a string ";
    getline(cin,n);
    
    check(n);
    
}