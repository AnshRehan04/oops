// Wap to reverse a string.
#include <iostream>
#include <string>
using namespace std;
string reverse(string name,int n){
    int s=0;
    int e=n-1;
    while (s<=e)
    {
        swap(name[s],name[e]);
        s++;
        e--;
    }
    cout<<name<<endl;
}
int main(){
    string name;
    cout<<"Enter the name ";
    getline(cin,name);
    int n=name.length();
    string a=reverse(name,n);
    if(a==name){
        cout<<"It is palidrome "<<endl;
    }
    else{
        cout<<"It is not palidrome ";
    }
}