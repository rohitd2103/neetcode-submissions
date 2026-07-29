class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> charSet;
        int maxLen = 0;

        int l = 0, r = 0;
        while(r<s.size()){
            while(charSet.find(s[r])!=charSet.end()){
                charSet.erase(s[l]);
                l++;
            }

            charSet.insert(s[r]);
            maxLen = max(maxLen,r-l+1);
            r++;
        }

        return maxLen;
    }
};
