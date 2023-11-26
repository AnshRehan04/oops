#include <iostream>
using namespace std;
template <class me>
me value(me x){
    return x;
}
int main(){
    cout<<value(100)<<endl;
    cout<<value(10.25f)<<endl;
    cout<<value('a');
    return 0;
}