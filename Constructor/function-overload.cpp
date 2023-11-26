#include <iostream>
using namespace std;
class add{
    int x,y;
    public:
    // add(){
    //     int a=0;
    //     int b=0;
    // }
    int sum(int a,int b){   
        x=a;
        y=b;
    }
    int sum(int a){
        int b=0;
    }
    void printarray(){
        cout<<"Sum is "<<(x+y)<<endl;
    }
};
int main(){
    add c1;
    c1.sum(10,20);
    c1.printarray();

    add c2;
    c2.sum(2,2);
    c2.printarray();
}