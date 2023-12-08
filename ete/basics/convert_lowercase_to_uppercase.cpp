// WAP to convert lowercase to uppercase
#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cout<<"Enter the string ";
    getline(cin,s);
    // for(char &ch :s){
    //     ch=toupper(ch);
    // }
    for(char &ch:s){
        if (tolower(ch))
        {
            ch=toupper(ch);
        }
        else if(toupper(ch)){
            ch=tolower(ch);
        }
        
    }
    cout<<s;
}