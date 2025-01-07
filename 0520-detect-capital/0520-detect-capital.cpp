class Solution {
public:
    bool detectCapitalUse(string word) {
        int countCapitals = 0;
        for (char &ch : word) {
            if (isupper(ch)) {
                countCapitals++;
            }
        }
        if(countCapitals == 0 || countCapitals == word.length() || (countCapitals == 1 && isupper(word[0]))) return true;
        return false;
    }
};