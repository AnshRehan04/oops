#include <iostream>
#include <string>
using namespace std;

int main() {
    string mainString, subString;
    cout << "Enter the main string: ";
    getline(cin, mainString);

    cout << "Enter the substring to search for: ";
    getline(cin, subString);

    size_t found = mainString.find(subString);
    if (found != string::npos) {
        cout << "Substring found at positions: ";
        while (found != string::npos) {
            cout << found << " ";
            found = mainString.find(subString, found + 1);
        }
    } else {
        cout << "Substring not found in the main string.";
    }

    cout << endl;
    return 0;
}