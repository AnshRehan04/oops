#include <iostream>

// Function to calculate the sum of digits of a number
int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

// Function to check if a number is stable
bool isStable(int num) {
    while (num >= 10) {
        num = sumOfDigits(num);
    }
    return num == 1;
}

int main() {
    int number;

    // Input a number from the user
    std::cout << "Enter a number: ";
    std::cin >> number;

    // Check if the number is stable and display the result
    if (isStable(number)) {
        std::cout << number << " is a stable number." << std::endl;
    } else {
        std::cout << number << " is not a stable number." << std::endl;
    }

    return 0;
}
