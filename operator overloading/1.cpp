#include <iostream>
#include <string>
using namespace std;
class rectangle{
    int len;
    int brd;
    public:
    rectangle(int l,int b){
        len=l;
        brd=b;
    }
    operator int (){
        return len*brd;
    }
};
int main(){
    rectangle r(2,23);
    cout<<r;
}