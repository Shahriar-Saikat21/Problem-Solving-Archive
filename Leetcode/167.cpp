#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>result;
        int s=0,e=numbers.size()-1;
        int sum = 0;
        while(s<e){
            sum = numbers[s]+numbers[e];
            if(sum==target){
                result.push_back(s+1);
                result.push_back(e+1);
                break;
            }
            if(sum>target){
                e--;
            }else{
                s++;
            }
        }
        return result;
    }
};