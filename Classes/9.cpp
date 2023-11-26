#include <iostream>
#include <string>
using namespace std;

int main() {
    string mainString, subString;
    cout << "Enter the main string: ";
    getline(cin, mainString);

    cout << "Enter the substring to search for: ";
    getline(cin, subString);

    int n=mainString.length();

    cout<<n;
}