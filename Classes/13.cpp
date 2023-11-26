#include <iostream>
#include <string>
using namespace std;
int main(){
    string name;
    cout<<"Enter string ";
    // cin>>name;
    getline(cin,name);
    cout<<name;
}