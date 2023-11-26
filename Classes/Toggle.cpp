#include <iostream>
#include <string>

class StringToggler {
public:
    StringToggler(const std::string& inputString) : inputString(inputString) {}

    std::string toggleString() {
        std::string toggledString = inputString;

        for (char& c : toggledString) {
            if (std::isalpha(c)) {
                if (std::islower(c)) {
                    c = std::toupper(c);
                } else {
                    c = std::tolower(c);
                }
            }
        }

        return toggledString;
    }

private:
    std::string inputString;
};

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::cin >> input;

    StringToggler toggler(input);
    std::string toggledString = toggler.toggleString();

    std::cout << "Toggled string: " << toggledString << std::endl;

    return 0;
}
