#include<bits/stdc++.h>

using namespace std;

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