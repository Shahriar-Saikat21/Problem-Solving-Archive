#include<bits/stdc++.h>

using namespace std;

/*
Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

There is only one repeated number in nums, return this repeated number.

You must solve the problem without modifying the array nums and uses only constant extra space.

 

Example 1:

Input: nums = [1,3,4,2,2]
Output: 2
Example 2:

Input: nums = [3,1,3,4,2]
Output: 3

*/

class Solution {
public:
    // int findDuplicate(vector<int>& nums) {
    //     int slow = nums[0], fast = nums[nums[0]];
    //     while (slow != fast) {
    //         slow = nums[slow];
    //         fast = nums[nums[fast]];
    //     }
    //     slow = 0;
    //     while (slow != fast) {
    //         slow = nums[slow];
    //         fast = nums[fast];
    //     }
    //     return slow;
    // }

    int findDuplicate(vector<int>& nums) {
        map<int,int>m;
        for(int i=0; i<nums.size(); i++){
            m[nums[i]]++;
        }
        for(auto x:m){
            if(x.second>1) return x.first;
        }
        return -1;
    }

    
};