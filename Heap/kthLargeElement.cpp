/*Given an integer array nums and an integer k, return the kth largest element in the array.

Note that it is the kth largest element in the sorted order, not the kth distinct element.

You must solve it in O(n) time complexity.

 

Example 1:

Input: nums = [3,2,1,5,6,4], k = 2
Output: 5
Example 2:

Input: nums = [3,2,3,1,2,4,5,5,6], k = 4
Output: 4
*/

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