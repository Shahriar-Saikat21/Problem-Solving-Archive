/*
Given an integer array nums and an integer k, return the k most frequent elements. You may return the answer in any order.

 

Example 1:

Input: nums = [1,1,1,2,2,3], k = 2
Output: [1,2]
Example 2:

Input: nums = [1], k = 1
Output: [1]
*/

#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        if(nums.size()==1) return nums;
        vector<int>result;
        map<int,int> p;
        for(int i=0; i<nums.size(); i++){
            p[nums[i]]++;
        }

        priority_queue<pair<int,int>> pq;
        for(auto it:p)
            pq.push({it.second,it.first});
        while(k--)
        {
            result.push_back(pq.top().second);
            pq.pop();
        }
        return result;


    }
};