#include <bits/stdc++.h>
using namespace std;
bool anagram(string str1,string str2){
    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());
    int n=str1.length();
    int m=str2.length();

    if(n!=m){
        return false;
    }
    
    return str1==str2;

}
int main(){
    string str1; 
    cout<<"Enter string 1 ";
    getline(cin,str1);

    string str2;
    cout<<"Enter string 2 ";
    getline(cin,str2);

    if(anagram(str1,str2)){
        cout<<"It is not anagram ";
    }
    else{
        cout<<"It is anagram ";
    }

}