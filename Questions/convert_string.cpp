#include <iostream>
#include <string>
using namespace std;
string convertstring(string str){
    string res=str;
    for (int i = 0; i < res.length(); i++)
    {
        if (i==0 || res[i-1]==' ')
        {
            res[i]=toupper(res[i]);
        }
    }
    return res;
    
}
int main(){
    string str;
    cout<<"Enter the string ";
    getline(cin,str);
    cout<<convertstring(str);

}