#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        map<int,int>m;
        int count = 0;
        for(int i=0; i<nums.size(); i++){
            m[nums[i]]++;
        }
        for(auto i : m){
            int n = i.second;
            if(n > 1){
                count += ((n*(n-1))/2);
            }
        }
        return count;
    }
};