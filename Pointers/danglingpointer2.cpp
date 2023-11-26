// Variable out of scope
#include <iostream>
using namespace std;
int main(){
    int *ptr;
    {//Scope starts.
        int i=0;
        ptr=&i;   //Pointer points to invalid location.
    }//scope ends.
    //Pointer is now dangling.
    cout<<*ptr;
}