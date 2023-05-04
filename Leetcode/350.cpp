#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>m;
        for(auto i:nums1){
            m[i]++;
        }
        vector<int>result;
        for(auto x:nums2){
            if(m[x]!=0){
                result.push_back(x);
                m[x]--;
            }
        }
        return result;
    }
};