#include <iostream>
using namespace std;
int main(){
    int a=10;
    // cout<<a;  //10
    int *ptr=0;  //null pointer
    ptr=&a;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    
    cout<<*ptr;
}