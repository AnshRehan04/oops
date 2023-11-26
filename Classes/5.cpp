#include <iostream>

class Input {
public:
    void getData(int &n1, int &n2) {
        std::cout << "Enter the lower bound (n1): ";
        std::cin >> n1;
        std::cout << "Enter the upper bound (n2): ";
        std::cin >> n2;
    }
};

class Prime {
public:
    static bool isPrime(int num) {
        if (num <= 1) {
            return false;
        }
        if (num <= 3) {
            return true;
        }
        if (num % 2 == 0 || num % 3 == 0) {
            return false;
        }
        for (int i = 5; i * i <= num; i += 6) {
            if (num % i == 0 || num % (i + 2) == 0) {
                return false;
            }
        }
        return true;
    }

    static int sumOfPrimesBetween(int n1, int n2) {
        int primeSum = 0;
        for (int num = std::max(n1, 2); num <= n2; ++num) {
            if (isPrime(num)) {
                primeSum += num;
            }
        }
        return primeSum;
    }
};

class NonPrime {
public:
    static int sumOfNonPrimesBetween(int n1, int n2) {
        int nonPrimeSum = 0;
        for (int num = std::max(n1, 2); num <= n2; ++num) {
            if (!Prime::isPrime(num)) {
                nonPrimeSum += num;
            }
        }
        return nonPrimeSum;
    }
};

class Display {
public:
    void showDifference(int primeDiff, int nonPrimeDiff) {
        std::cout << "Difference between sum of prime numbers: " << primeDiff << std::endl;
        std::cout << "Difference between sum of non-prime numbers: " << nonPrimeDiff << std::endl;
    }
};

int main() {
    Input input;
    Prime prime;
    NonPrime nonPrime;
    Display display;

    int n1, n2;
    input.getData(n1, n2);

    int primeSum = prime.sumOfPrimesBetween(n1, n2);
    int nonPrimeSum = nonPrime.sumOfNonPrimesBetween(n1, n2);

    int primeDiff = primeSum - nonPrimeSum;
    int nonPrimeDiff = nonPrimeSum - primeSum;

    display.showDifference(primeDiff, nonPrimeDiff);

    return 0;
}
