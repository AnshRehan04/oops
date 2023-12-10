#include <bits/stdc++.h>
using namespace std;
int main(){
    string name[5];
    for (int i = 0; i < 5; i++)
    {
        getline(cin,name[i]);
    }
    for (int i = 0; i < 5; i++) {
        transform(name[i].begin(), name[i].end(), name[i].begin(), ::tolower);
    }
    for (int i = 0; i < 5; i++)
    {
    for (int j = i+1; j < 5; j++)
    {
        if(name[i]>name[j]){
            swap(name[i],name[j]);
        }
    }
    }
    for (int i = 0; i < 5; i++)
    {
        cout<<name[i]<<" ";
    }
    
    
}