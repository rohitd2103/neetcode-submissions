class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        int maxFreq =  INT_MIN, maxLen = INT_MIN;
        unordered_map<char,int> mp;

        int l = 0, r = 0;

        while(r<n){
            mp[s[r]]++;

            maxFreq = max(maxFreq,mp[s[r]]);
            int changes = (r-l+1)-maxFreq;
            if(changes>k){
                mp[s[l]]--;
                l++;
            }

            maxLen = max(maxLen,r-l+1);
            r++;
        }

        return maxLen;
    }
};
