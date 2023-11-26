// Wap to reverse a string.
#include <iostream>
#include <string>
using namespace std;
void reverse(string name,int n){
    int s=0;
    int e=n-1;
    while (s<=e)
    {
        swap(name[s],name[e]);
        s++;
        e--;
    }
    cout<<name;
}
int main(){
    string name;
    cout<<"Enter the name ";
    getline(cin,name);
    int n=name.length();
    reverse(name,n);
}