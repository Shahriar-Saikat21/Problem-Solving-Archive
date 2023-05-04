#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>result;
        unordered_map<int,int> mp;
        mp[nums[0]] = 0;

        for(int i = 1; i<nums.size(); i++){
            int temp = target - nums[i];
            if(mp.find(temp) != mp.end()){
                result.push_back(mp[temp]);
                result.push_back(i);
                return result;
            }else{
                mp[nums[i]] = i;
            }            
        }
        return result;       
    }
};