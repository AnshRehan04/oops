// Write a code to reverse a string.
#include <iostream>
#include <string>
using namespace std;
void reverse(string name){
    int s=0;
    int e=name.length()-1;
    while (s<=e)
    {
        swap(name[s],name[e]);
        s++;
        e--;
    }
    cout<<"Reverse string : "<<name;
}
int main(){
    string name;
    cout<<"Enter the string :";
    cin>>name;
    reverse(name);
}