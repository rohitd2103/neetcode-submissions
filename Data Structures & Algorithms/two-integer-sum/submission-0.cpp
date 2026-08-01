class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;

        for(int i = 0;i<nums.size();i++){
            int currSum = target-nums[i];
            if(mp.find(currSum)!=mp.end()){
                return {mp[currSum],i};
            }

            mp[nums[i]]= i;
        }

        return {};
    }
};
