#include <bits/stdc++.h>
using namespace std;
class employee{
    private:
    int salary;
    int hours;
    public:
    void getinfo(){
        cout<<"Enter salary ";
        cin>>salary;
        cout<<"Enter hours ";
        cin>>hours; 
    }
    void addsal(){
        if(salary<500){
            salary=salary+10;
        }
        cout<<"Salary is "<<salary;
    }
    void Addwork(){
        if(hours>6){
            salary=salary+5;
        }
        cout<<"Salary is "<<salary;
    }
};
int main(){
    employee e;
    e.getinfo();
    e.addsal();
    cout<<endl;
    e.Addwork();

}