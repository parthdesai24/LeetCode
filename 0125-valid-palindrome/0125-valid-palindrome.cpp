class Solution {
public:
    bool valid(char ch) {
        return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') ||
               (ch >= '0' && ch <= '9');
    }
    bool isPalindrome(string s) {
        int right = s.size()-1;
        int left = 0;

        while (left < right) {

            while (left < right && !valid(s[left]))
                left++;
            while (left < right && !valid(s[right]))
                right--;

            if (tolower(s[left]) != tolower(s[right])) {
                return false;
            }
            left++;
            right--;
        }
        return true;
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