#include <iostream>
#include <string>
using namespace std;
void remove(string name,int n){
    int c=0;
    for (int i = 0; i < n; i++)
    {
        if (name[i]>='a' && name[i]<='z' || name[i]>='A' && name[i]<='Z' )
        {
            name[c]=name[i];
            c++;
        }
    }
    cout<<name.substr(0,c);
}
int main(){
    string name;
    cout<<"Enter the name ";
    getline(cin,name);
    int n=name.length();
    remove(name,n);
}
