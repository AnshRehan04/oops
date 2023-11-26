#include <iostream>
#include <string.h>
using namespace std;
class String{
    char str[20];
    public:
    void getdata(){
        gets(str);
    }
    int operartor ==(String s){
        if (!strcmp(str,s,str))
        {
            return 1;
        }
        return 0;
    }
};
int main(){
    String s1,s2;
    cout<<"Enter First String "<<endl;
    s1.getdata();
    cout<<"Enter Second String "<<endl;
    s2.getdata();
    if (s1==s2)
    {
        cout<<"Strings are Equal \n";
    }
    else{
        cout<<"Strings are not Equal ";
    }
    
}