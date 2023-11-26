#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    string name="aaann";
    vector<int> freq(26,0);
    for (int i = 0; i <name.length(); i++)
    {
        freq[name[i]-'a']++;
    }
    
    int j=0;
    for (int i = 0; i < name.length(); i++)
    {
        while (freq[i]--)
        {
            name[i]=i+'a';
            j++;
        }
    }
    return s;
    
}