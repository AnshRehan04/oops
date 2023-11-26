#include <iostream>
#include <string>
using namespace std;
class hello{
    public:
    void alphas(string);
};

void hello::alphas(string name){
    string result;
    for (char c : name) {
        if (isalpha(c)) {
            result += c;
        }
    }
    cout << "Result: " << result << endl;
}


int main() {
    string name;
    cout << "Enter a string: ";
    getline(cin, name);

    hello obj;
    obj.alphas(name);
    return 0;
}
