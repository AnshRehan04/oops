#include <iostream>
using namespace std;
class abc
	{
		int a;
		public:
			void getdata(){  //Function definition
				cin>>a;
				};
			void display(); //Function Declaration
				// cout<<a;   
				// };
	};

void abc::display()
{
	cout<<"a = "<<a;
};
int main(){
    abc obj;
    obj.getdata();
    obj.display();
}