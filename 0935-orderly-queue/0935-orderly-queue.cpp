class Solution {
public:
    string orderlyQueue(string s, int k) {
        if (k > 1) {
            sort(begin(s), end(s));
            return s;
        }

        string result = s;
        int n = s.length();

        for(int i = 1; i < n; i++){
            string temp = s.substr(i) + s.substr(0, i);
            result = min(result,temp);
        }
        return result;
    }
};