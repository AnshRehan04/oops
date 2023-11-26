#include <iostream>
#include <string>

using namespace std;

// Function to remove duplicate characters from a string
string removeDuplicates(string str, char ch, int index = 0, bool found = false) {
    // Base case: If we have checked the entire string, return it as is
    if (index == str.length()) {
        return str;
    }

    // If the current character is equal to the given character
    if (str[index] == ch) {
        // If this is the first occurrence of the character
        if (!found) {
            found = true;
        } else {
            // If this is a duplicate, remove it from the string
            str.erase(index, 1);
        }
    }

    // Recursively check the rest of the string
    return removeDuplicates(str, ch, index + 1, found);
}

// Function to count the occurrences of a character in a string
int countOccurrences(string str, char ch, int index = 0, int count = 0) {
    // Base case: If we have checked the entire string, return the count
    if (index == str.length()) {
        return count;
    }

    // If the current character is equal to the given character, increment the count
    if (str[index] == ch) {
        count++;
    }

    // Recursively check the rest of the string
    return countOccurrences(str, ch, index + 1, count);
}

int main() {
    string inputString;
    char targetChar;

    // Input the string and the character to search for
    cout << "Enter a string: ";
    cin >> inputString;
    cout << "Enter a character: ";
    cin >> targetChar;

    // Count the occurrences of the character
    int occurrenceCount = countOccurrences(inputString, targetChar);

    // If there is more than one occurrence, remove duplicates
    if (occurrenceCount > 1) {
        inputString = removeDuplicates(inputString, targetChar);
    }

    // Display the modified string
    cout << "Modified string: " << inputString << endl;

    return 0;
}
