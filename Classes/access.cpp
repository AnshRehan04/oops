#include <iostream>
using namespace std;
class hero{

    public:
    // Properties
    int a;
    int b;
};
int main(){

    // Declaring an object.
    hero h1;
    cout<<"Values is "<<h1.a<<endl;   //By Default Class is Private so we cant access them untill we declare it as public
    cout<<"Values is "<<h1.b;         //When We declare the class as Public now we can access them in main as well as within the class
}