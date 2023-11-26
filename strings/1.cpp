// WAP to remove everything Without alphabets.
#include <iostream>
#include <string>
using namespace std;
void remove(string name,int n){
    int c=0;
    for (int i = 0; i < n; i++)
    {
        if (name[i]>='A' && name[i]<='Z' || name[i]>='a' && name[i]<='z' )
        {
            name[c]=name[i];
            c++;
        }
    }
    cout<<name.substr(0,c);
}
int main(){
    string name;
    cout<<"Enter the string ";
    getline(cin,name);
    int n=name.length();
    remove(name,n);
    
}