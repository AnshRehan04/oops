// Parameteritic constrcutor takes parameters .
#include <iostream>
using namespace std;
class rectangle{
    private:
    int length;
    int breadth;
    public:
    rectangle(int l,int b){
        length=l;
        breadth=b;
    }
    int area(){
        return length*breadth;
    }
};
int main(){
    rectangle r1(2,3);
    cout<<"Area is "<<r1.area();
    
}