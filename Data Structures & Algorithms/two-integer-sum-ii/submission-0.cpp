class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0, right = numbers.size()-1;
        int sum = 0;
        vector<int> ans;
        while(left<=right){
            sum = numbers[left]+numbers[right];
            if(sum>target){
                sum-=numbers[right];
                right--;
            }
            else if(sum<target){
                sum-=numbers[left];
                left++;
            }
            else{
                ans.push_back(left+1);
                ans.push_back(right+1);
                break;
            }
        }
        return ans;
    }
};
