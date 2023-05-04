#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>>qmax;

        for(int i=0; i<nums.size(); i++){
            qmax.push(nums[i]);
        }
        int count=1;
        int result = 0;
        while(!qmax.empty()){
            result = qmax.top();
            qmax.pop();
            if(count==k) break;
            else count++;
        }
        return result;
    }
};