#include <iostream>
using namespace std;
int add(int x,int y){
    return x+y;
}
int main(){
    cout<<add(10.5f,20.10f)<<endl;
    cout<<int(10.5f);
}