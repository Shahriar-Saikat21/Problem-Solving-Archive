class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int ans = 0, minVal = nums[0];
        for(int i = 1; i<nums.size();i++){
            ans = max(ans,nums[i]-minVal);
            minVal = min(minVal,nums[i]);
        }
        return ans <=0 ? -1 : ans;
    }
};