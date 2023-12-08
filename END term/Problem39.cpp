// • You are given a string, whose size is stored in a variable with the name N
// •The string is stored in a variable with the name str
// • You have to print true, if the string contains at least one vowel, otherwise print false
// • For example, consider the value stored in N = 6, and the value stored in str = "nrupul", then the output will be true, since the string contains the vowel u twice
// Note: The string only contains lowercase English alphabets
// Note: The vowels in the English Alphabet are considered the following - a,e,i,o,u
// Input
// •The first line of the input contains the value stored in N
// • The next line contains the value stored in str

#include <iostream>
#include <string>
using namespace std;
int main(){
    string name;
    cout<<"Enter string ";
    getline(cin,name);
    int count=0;
    for (int i = 0; i <name.length(); i++)
    {
        if (name[i]=='a' ||name[i]=='e' ||name[i]=='u' ||name[i]=='i' ||name[i]=='o')
        {
            count++;
        }
    }
    if (count>1)
    {
        cout<<"true ";
    }
    else{
        cout<<"False" ;
    }
    
}