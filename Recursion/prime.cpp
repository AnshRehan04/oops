#include <iostream>

bool is_prime(int n, int divisor = 2) {
    if (n <= 1) {
        return false;
    }
    if (divisor * divisor > n) {
        return true;
    }
    if (n % divisor == 0) {
        return false;
    }
    return is_prime(n, divisor + 1);
}

int main() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    if (is_prime(number)) {
        std::cout << number << " is a prime number" << std::endl;
    } else {
        std::cout << number << " is not a prime number" << std::endl;
    }

    return 0;
}
