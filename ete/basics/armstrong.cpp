#include <iostream>
using namespace std;

bool armstrong(int n) {
    int sum = 0;
    int temp = n;

    while (temp != 0) {
        int r = temp % 10;
        sum = sum + (r * r * r);
        temp /= 10;
    }

    return (sum == n);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (armstrong(n)) {
        cout << "It is an Armstrong number." << endl;
    } else {
        cout << "It is not an Armstrong number." << endl;
    }

    return 0;
}
