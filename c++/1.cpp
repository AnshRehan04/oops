#include <iostream>

bool isPrime(int num) {
    if (num <= 1)
        return false;
    if (num <= 3)
        return true;

    if (num % 2 == 0 || num % 3 == 0)
        return false;

    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0)
            return false;
    }

    return true;
}

int main() {
    int n1, n2;
    std::cout << "Enter two integers (n1 and n2): ";
    std::cin >> n1 >> n2;

    int sum = 0;

    for (int i = n1; i <= n2; ++i) {
        if (!isPrime(i)) {
            sum += i;
        }
    }

    std::cout << "Sum of non-prime numbers between " << n1 << " and " << n2 << " is: " << sum << std::endl;

    return 0;
}
