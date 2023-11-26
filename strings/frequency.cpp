#include <iostream>
#include <string>
using namespace std;
int freq(string name,int n){
    int frequency[26]={0};
    for(char c:name){
        if (isalpha(c))
        {
            c=tolower(c);
            frequency[c-'a']++;
        }
    }
    for (char c = 'a'; c <='z'; c++)
    {
        if (frequency[c-'a']>0)
        {
            cout<<"Frequency of the element is "<<c<<":"<<frequency[c-'a']<<endl;
        }
    }
    
}
int main(){
    string name;
    cout<<"Enter the string ";
    getline(cin,name);
    int n=name.length();
    freq(name,n);
}