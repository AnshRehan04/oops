#include <iostream>
using namespace std;

class Add
{
    int c;

public:
    Add(int a, int b)
    {
        c = a + b;
    }

    void display()
    {
        cout << "Sum is:" << c;
    }
};

int main()
{

    int a, b;

    cout << "Enter two numbers:";
    cin >> a >> b;

    Add obj(a, b);
    obj.display();

    return 0;
}