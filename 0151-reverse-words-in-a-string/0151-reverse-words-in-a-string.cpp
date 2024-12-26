class Solution {
public:
    string reverseWords(string s) {
        // Remove leading and trailing spaces
        int n = s.size();
        int i = 0;
        while (i < n && s[i] == ' ') i++;
        int j = n - 1;
        while (j >= 0 && s[j] == ' ') j--;

        // Collect words into a vector
        vector<string> words;
        string word = "";
        while (i <= j) {
            if (s[i] != ' ') {
                word += s[i];
            } else if (!word.empty()) {
                words.push_back(word);
                word = "";
            }
            i++;
        }
        if (!word.empty()) words.push_back(word);

        // Reverse the order of words
        reverse(words.begin(), words.end());

        // Join the words into a single string with a space
        string result = "";
        for (int k = 0; k < words.size(); ++k) {
            result += words[k];
            if (k != words.size() - 1) result += ' ';
        }

        return result;
    }
};
