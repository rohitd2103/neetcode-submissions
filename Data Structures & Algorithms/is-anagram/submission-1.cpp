class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> track(26,0);
        if(s.size()!=t.size()) return false;

        for(int i = 0;i<s.size();i++){
            track[s[i]-'a']++;
            track[t[i]-'a']--;
        }

        for(int i = 0;i<26;i++){
            if(track[i]!=0) return false;
        }
return true;

    }
};
