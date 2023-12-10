// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     string name;
//     cout<<"Enter the string ";
//     getline(cin,name);
//     string s;
//     cout<<"Enter a letter ";
//     getline(cin,s);

//     int pos=-1;
//     for (int i = 0; i <name.length(); i++)
//     {
//         if(name[i]==s[0]){
//             pos=i;
//             break;
//         }
//     }

//     cout<<"First occurence of character is "<< pos;
    
    
    
// }
#include <bits/stdc++.h>
using namespace std;
int main(){
    string name;
    cout<<"Enter the string ";
    getline(cin,name);
    string s;
    cout<<"Enter a letter ";
    getline(cin,s);
    int n=name.length();

    int pos=-1;
    for (int i = n-1; i>=0; i--)
    {
        if(name[i]==s[0]){
            pos=i;
            break;
        }
    }

    cout<<"Last occurence of character is "<< pos;
    
    
    
}