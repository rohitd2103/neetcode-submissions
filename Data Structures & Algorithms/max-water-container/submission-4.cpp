class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int l = 0, r= n-1;
        int maxi = 0;
        
        while(l<r){
            int area = (r-l)*min(heights[l],heights[r]);
            maxi = max(area,maxi);

            //move the pointer of lower height
            if(heights[l]<heights[r]){
                l++;
            }
            else{
                r--;
            }
        }
        return maxi;
    }
};
