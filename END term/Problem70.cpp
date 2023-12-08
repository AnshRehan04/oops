#include <iostream>
#include <cstring>

int main() {
    int N;
    std::cin >> N;

    char str[1000];
    std::cin.ignore(); // Ignore the newline character left in the buffer
    std::cin.getline(str, sizeof(str));

    // Initialize counts for vowels and consonants
    int vowelCount = 0;
    int consonantCount = 0;

    // Loop through each character in the string
    for (int i = 0; i < N; ++i) {
        char currentChar = str[i];

        // Check if the current character is a vowel
        if (currentChar == 'a' || currentChar == 'e' || currentChar == 'i' || currentChar == 'o' || currentChar == 'u') {
            vowelCount++;
        } else {
            // Check if the current character is a consonant
            consonantCount++;
        }
    }

    // Determine the output based on the counts of vowels and consonants
    if (vowelCount == consonantCount) {
        std::cout << "Tie" << std::endl;
    } else if (vowelCount > consonantCount) {
        std::cout << "Vowel" << std::endl;
    } else {
        std::cout << "Consonant" << std::endl;
    }

    return 0;
}
