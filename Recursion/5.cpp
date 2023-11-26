// Input a string from user and check wheather the given word is present into the given string or not
// To check wheather the sum of ascii values of all the character is Prime or not
// To check wheather the given string is palidrome or not.
#include <iostream>
#include <string>
#include <cmath>

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;

    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) return false;
    }

    return true;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    int sum = 0;

    for (char c : input) {
        sum += static_cast<int>(c);
    }

    bool prime = isPrime(sum);

    std::cout << "Sum of ASCII values: " << sum << std::endl;
    if (prime) {
        std::cout << "The sum is prime." << std::endl;
    } else {
        std::cout << "The sum is not prime." << std::endl;
    }

    return 0;
}
