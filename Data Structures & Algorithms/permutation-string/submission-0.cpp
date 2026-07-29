class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int s1_size = s1.size();
        int s2_size = s2.size();
        int l = 0, r = 0;
        vector<int> s1_tracker(26,0);
        vector<int> s2_tracker(26,0);
        if (s1_size > s2_size) return false;

        for(int i = 0;i<s1.size();i++){
            s1_tracker[s1[i]-'a']++;
        }

        while(r<s2.size()){
            s2_tracker[s2[r]-'a']++;

            if(r-l+1 > s1.size()){
                s2_tracker[s2[l]-'a']--;
                l++;
            }

            if(s1_tracker == s2_tracker) return true;

            r++;

        }

        return false;

    }
};
