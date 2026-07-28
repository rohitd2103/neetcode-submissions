class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans="";

        int s1 = 0, s2=0;
        while(s1<word1.size() && s2<word2.size()){
            ans+=word1[s1];
            ans+=word2[s2];
            s1++;
            s2++;
        }
        if(word2.size()>word1.size()){
            while(s2<word2.size()){
                ans+=word2[s2];
                s2++;
            }
            
        }
        if(word1.size()>word2.size()){
            while(s1<word1.size()){
                ans+=word1[s1];
                s1++;
            }
            
        }
        return ans;
    }
};