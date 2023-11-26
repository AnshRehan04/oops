#include <iostream>
#include <string>
using namespace std;
void freq(string name,int n){
    int freq[26]={0};
    for(char c:name){
        if (isalpha(c))
        {
            c=tolower(c);
            freq[c-'a']++;
        }
    }
    for (char c = 'a'; c <='z'; c++)
    {
        if (freq[c-'a']>0)
        {
            cout<<"Frequency of "<<c<<":"<<freq[c-'a'];
        }
    }
}
int main(){
    string name;
    cout<<"Enter the name ";
    getline(cin,name);
    int n=name.length();
    freq(name,n);
    
}