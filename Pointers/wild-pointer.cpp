#include <iostream>
using namespace std;
int main(){
    int a=3;
    int *ptr;  //declaration of a pointer  //It is a wild pointer as it points to arbitaray location/address
    // ptr=&a;  //ptr no longer wild
    cout<<*ptr;
}