// Default Comstructor does not take any parameter
#include <iostream>
using namespace std;
class rectangle{
    private:
    int length;
    int breadth;
    public:
    rectangle(){
        length=12;
        breadth=13;
    }
    void display(){
        cout<<"The length is "<<length<<"\n"<<"The Breadth is "<<breadth;
    }
};
int main(){
    rectangle s;
    s.display();
}