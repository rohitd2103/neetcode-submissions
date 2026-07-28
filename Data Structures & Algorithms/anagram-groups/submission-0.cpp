class Solution {
public:
     vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string,vector<string>> mp;

        for(int i =0;i<strs.size();i++){
            string temp = strs[i];
            sort(temp.begin(),temp.end());

            mp[temp].push_back(strs[i]);
        }

        for(const auto& pair: mp){
            ans.push_back(pair.second);
        }

        return ans;
    }
};
