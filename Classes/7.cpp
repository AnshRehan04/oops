#include <iostream>
using namespace std;
class test{
private:
	int x;
public:
	void getdata() {
		cout<<"\n I am into function ";
		// cin>>x;
		x=10;
		cout<<"x="<<x;
		}
    // void display(){
    //     cout<<"x:"<<x;
    // }
};
int main(){
	test obj;
	obj.getdata();
}