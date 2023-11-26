#include <iostream>
using namespace std;
void increment(int);
void main(){
    int x=15;
    increment(x);
    cout<<x;
}
void increment(int a){
    ++a;
    cout<<a;
}