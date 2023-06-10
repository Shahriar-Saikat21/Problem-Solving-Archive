#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        map<int,int> m;
        int sum = 0, length = nums.size();
        for(int i = 0; i<length; i++){
            if(m.find(nums[i])==m.end()){
                m[nums[i]]=1;
            }else{
                m[nums[i]] += 1;
            }
        }

        /*
         for(int i = 0; i<length; i++){
            m[nums[i]]++;
        }
        */

        for(auto i : m){
            if(i.second==1){
                sum+= i.first;
            }
        }
        
        return sum;
    }
};