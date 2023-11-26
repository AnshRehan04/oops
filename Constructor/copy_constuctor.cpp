// As the name suggests the word copy constructor in c++ is used to create a copy or to initialize the object with the help of the already existing or created object.
// In simple words, it is used to copy one object to another object. It is on the user to either define the default constructor or to write the default constructor in c++ explicitly.
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
    rectangle(rectangle &obj){
        length=obj.length;
        breadth=obj.breadth;
    }
    int area(){
        return length*breadth;
    }
};
int main(){
    rectangle r1(2,3);
    rectangle r2=r1;
    cout<<"Area of rectangle 1 is "<<r1.area()<<endl;
    cout<<"Area of rectangle 2 is "<<r2.area();

}