#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>m;
        for(auto i:nums1){
            m[i]=1;
        }
        vector<int>result;
        for(auto x:nums2){
            if(m[x]==1){
                result.push_back(x);
                m[x]=0;
            }
        }
        return result;
    }
};