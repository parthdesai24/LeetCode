class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int i = 0;
        int index = 0;

        while (i < n) {
            char curr = chars[i];
            int count = 0;
            while (i < n && curr == chars[i]) {
                i++;
                count++;
            }
            chars[index++] = curr;

            if (count > 1) {
                string countStr = to_string(count);
                for (char &ch : countStr) {
                    chars[index++] = ch;
                }
            }
        }
        return index;
    }
};