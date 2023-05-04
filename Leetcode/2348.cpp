#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long result = 0,count = 0;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i]==0){
                count++;
            }else{
                result += (count*(count+1))/2;
                count = 0;
            }
        }
        if(count!=0){
            result += (count*(count+1))/2;
            count = 0;
        }
        return result;
    }
};