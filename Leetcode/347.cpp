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