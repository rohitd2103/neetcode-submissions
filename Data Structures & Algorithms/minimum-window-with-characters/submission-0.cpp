class Solution {
public:
    string minWindow(string s, string t) {
        vector<int> mapS(256,0);
        vector<int> mapT(256,0);

        for(int i = 0;i<t.size();i++){
            mapT[t[i]]++;
        }

        int l = 0,r = 0, minLen = INT_MAX, startIndex = 0, required = t.size();

        while(r<s.size()){
            mapS[s[r]]++;

            if(mapS[s[r]]>0 && mapS[s[r]]<=mapT[s[r]]){
                required--;
            }

            while(required==0){
                if(r-l+1<minLen){
                    minLen = min(minLen,r-l+1);
                    startIndex = l;
                }

                if(mapS[s[l]]>0 && mapS[s[l]]==mapT[s[l]]){
                    required++;
                }

                mapS[s[l]]--;
                l++;
            }
            r++;
        }

        return minLen==INT_MAX ? "" : s.substr(startIndex,minLen);
    }
};
