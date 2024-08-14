class Solution {
public:

string normalizeString(const string& s) {
    string normalized;
    for (char c : s) {
        if (isalnum(c)) {
            normalized += tolower(c);
        }
    }
    return normalized;
}

// Recursive function to check if a string is a palindrome
bool isPalindromeRecursive(const string& s, int i) {
    int n = s.size();
    if (i >= n/2) {
        return true;
    }
    if (s[i] != s[n-i-1]) {
        return false;
    }
    return isPalindromeRecursive(s, i+ 1 );
}
    bool isPalindrome(string s) 
    {
        string St = normalizeString(s);
        return isPalindromeRecursive(St,0);
    }
};

// Method 1 using if-else condition
// bool isPalindrome(string s) {
//        int start=0;
//        int end=s.size()-1;
//        while(start<=end){
//            if(!isalnum(s[start])){start++; continue;}
//            if(!isalnum(s[end])){end--;continue;}
//            if(tolower(s[start])!=tolower(s[end]))return false;
//            else{
//                start++;
//                end--;
//            }
//        }
//        return true;
//     }