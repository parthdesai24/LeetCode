class Solution {
public:
    int strStr(string haystack, string needle) {
        // Brute force approach
        // int m = haystack.size();
        // int n = needle.size();
        // for (int i = 0; i < m - n; i++) {
        //     for (int j = 0; j < n; j++) {
        //         if (haystack[i + j] != needle[j]) break;
        //         if (j == n - 1) return i;
        //     }
        // }
        // return -1;

        int m = haystack.size();
        int n = needle.size();
        for (int i = 0; i <= m - n; i++){
            if(haystack.substr(i,n) == needle) return i;
        }
        return -1;
    }
};