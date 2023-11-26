#include <iostream>
using namespace std;
class employee{
    private:
    int id;
    // int salary;
    public:
    void getdata(){
        cout<<"Enter the Id of the Employee ";
        cin>>id;
    }

    void display(){
        cout<<"The Id of the Employee is "<<id<<endl;
    }
};
int main(){
    // employee ansh;
    // ansh.getdata();
    // ansh.display();

    // Using arrays.

    employee ansh[4];
    for (int i = 0; i < 4; i++)
    {
        ansh[i].getdata();
    }
    for (int i = 0; i < 4; i++)
    {
        ansh[i].display();
    }
    
}