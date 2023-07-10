#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int>m;
        int n = nums.size();
        for(int i=0; i<n; i++){
            m[nums[i]]++;
        }
        int result = 0;
        for(auto x:m){
            if(x.second==1){
                result = x.first;
                break;
            }
        }
        return result;
    }
};