// WAP to check the last index of 1.
#include <iostream>
#include <string>
using namespace std;
int main(){
    string str;
    cout<<"Enter a number ";
    getline(cin,str);
    int pos=-1;
    int n=str.length();
    for (int i=n-1;i>=0;i--)
    {
        if (str[i]=='1')
        {
            pos=i;
            break;
        }
    }
    cout<<pos<<endl;
}