class Solution {
public:
    
string countAndSay(int n) {
    string result = "1"; // Base case for n = 1

    for (int i = 2; i <= n; i++) {
        string current = "";
        int count = 1;

        for (int j = 1; j < result.size(); j++) {
            if (result[j] == result[j - 1]) {
                count++; // Count consecutive characters
            } else {
                current += to_string(count) + result[j - 1]; // Append count and character
                count = 1; // Reset count
            }
        }

        // Append the last group
        current += to_string(count) + result.back();
        result = current; // Update result for next iteration
    }

    return result;
}
};