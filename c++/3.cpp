#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

// Custom comparison function to compare two numbers based on their concatenated forms
bool customCompare(int a, int b) {
    string ab = to_string(a) + to_string(b);
    string ba = to_string(b) + to_string(a);
    return ab > ba; // Compare in descending order to maximize the resulting number
}

// Function to find the maximum number that can be formed from an array of numbers
string findMaximumNumber(vector<int>& nums) {
    sort(nums.begin(), nums.end(), customCompare);

    // Handle the case where the array contains only zeros
    if (nums[0] == 0) {
        return "0";
    }

    string result = "";
    for (int num : nums) {
        result += to_string(num);
    }

    return result;
}

int main() {
    vector<int> numbers = {54,4,6,60,10};

    string maxNumber = findMaximumNumber(numbers);

    cout << "The maximum number that can be formed is: " << maxNumber << endl;

    return 0;
}
