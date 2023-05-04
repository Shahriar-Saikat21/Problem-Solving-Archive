#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0, hi = nums.size()-1;

        if(target<nums[0]){
            return 0;
        }else if(target>nums[hi]){
            return hi+1;
        }

        while(low<=hi){
            int mid = (low+hi)/2;

            if(nums[mid]==target){
                return mid;
            }else if(nums[mid]>target && target>nums[mid-1]){
                return mid;
            }else if(nums[mid]<target){
                low = mid+1;
            }else{
                hi = mid-1;
            }           
        } 
        return -1;
    }
};