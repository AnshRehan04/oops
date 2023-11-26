#include <iostream>
#include <bitset>

int main() {
    int decimalNumber;
    
    std::cout << "Enter a decimal number: ";
    std::cin >> decimalNumber;

    // Convert decimal to binary
    std::bitset<sizeof(int) * 2> binaryNumber(decimalNumber);

    std::cout << "Binary representation: " << binaryNumber << std::endl;

    return 0;
}
