#include <iostream>
#include <string>
using namespace std;
class student{
    private:
    int rollno;
    string name;
    public:
    void getdata(int r,string n){
        rollno=r;
        name=n;
    }
    void display(){
        cout<<"Name "<<name<<" Roll no "<<rollno<<endl;
    }
};
int main(){
    student st;
    st.getdata(2,"ansh");
    st.display();
}