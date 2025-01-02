#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        
        int xorSum = 0;
        vector<int> frequency(26, 0);
        
        for (int i = 0; i < s.length(); i++) {
            xorSum ^= s[i] ^ t[i]; // XOR both characters
            frequency[s[i] - 'a']++; // Increment for s
            frequency[t[i] - 'a']--; // Decrement for t
        }
        
        if (xorSum != 0) return false; // If XOR isn't zero, they're not anagrams
        
        for (int freq : frequency) {
            if (freq != 0) return false; // Check frequency counts
        }
        
        return true;
    }
};