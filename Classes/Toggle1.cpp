#include <iostream>
#include <cctype> // For islower and toupper

void toggleCase(char* inputString) {
    for (int i = 0; inputString[i] != '\0'; i++) {
        if (std::isalpha(inputString[i])) {
            if (std::islower(inputString[i])) {
                inputString[i] = std::toupper(inputString[i]);
            } else {
                inputString[i] = std::tolower(inputString[i]);
            }
        }
    }
}

int main() {
    const int maxInputLength = 100; // Maximum length of the input
    char input[maxInputLength];

    std::cout << "Enter a string: ";
    std::cin.getline(input, maxInputLength);

    toggleCase(input);

    std::cout << "Toggled string: " << input << std::endl;

    return 0;
}
