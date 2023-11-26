#include <iostream>
using namespace std;
class A{
    private:
    int a;
    public:
    void setdata(int a){
        this->a=a;
        // This Keyword is a keyword which points to the object which invokes the member functions
    }

    void display(){
        cout<<"Value of a is "<<a;
    }
};

int main(){
    A obj;
    obj.setdata(3);   
    obj.display();//It will return garbage value.
}