#include <iostream>
#include <string>

using namespace std;

bool isPrime(int num, int divisor = 2) {
    if (num <= 1) {
        return false;
    }
    if (divisor * divisor > num) {
        return true;
    }
    if (num % divisor == 0) {
        return false;
    }
    return isPrime(num, divisor + 1);
}

int sumAsciiRecursive(const string& s, int index = 0, int asciiSum = 0) {
    if (index == s.length()) {
        return asciiSum;
    }
    asciiSum += static_cast<int>(s[index]);
    return sumAsciiRecursive(s, index + 1, asciiSum);
}

int main() {
    string inputString;
    cout << "Enter a string: ";
    cin >> inputString;

    int asciiSum = sumAsciiRecursive(inputString);

    if (isPrime(asciiSum)) {
        cout << "The sum of ASCII values (" << asciiSum << ") is prime." << endl;
    } else {
        cout << "The sum of ASCII values (" << asciiSum << ") is not prime." << endl;
    }

    return 0;
}
