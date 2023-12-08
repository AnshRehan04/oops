#include <iostream>
#include <string>
using namespace std;
int main(){
    string name;
    cout<<"Enter the string ";
    getline(cin,name);
    char ch=name.length()-1;
    if(ch=='n'){
        cout<<"True ";
    }
    else{
        cout<<"False";
    }
}