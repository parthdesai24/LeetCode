class Solution {
public:
    bool isFreqSame(int freq1 [], int freq2 []){
        for(int i = 0; i< 26; i++){
            if(freq1[i] != freq2[i]) return false;
        }

        return true;
    }
    bool checkInclusion(string s1, string s2) {
        int freq[26] = {0};

        for(int i = 0; i < s1.length(); i++){
            freq[s1[i] - 'a']++;
        }

        int winSize = s1.length();
        for(int i = 0; i<s2.length(); i++){
            int idx = i; 
            int winIdx = 0;
            int winFreq[26] = {0};

            while(idx < s2.length() && winIdx < winSize){
                winFreq[s2[idx] - 'a']++;
                winIdx++; idx++;

                if(isFreqSame(freq,winFreq)) return true;
            }
        }
       return false;
    }
};