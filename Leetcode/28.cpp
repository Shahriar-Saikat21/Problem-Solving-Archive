#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        // map<string,int>m;
        // int nSize = needle.size();
        // for(int i=0; i<=haystack.size()-nSize+1; i++){
        //     string s = haystack.substr(i,nSize);
        //     m.insert({s,i});
        // }
        // int minIndex = INT_MAX;
        // bool found = false;
        // for(auto x:m){
        //     if(x.first==needle){
        //         minIndex = min(minIndex,x.second);
        //         found = true;
        //     } 
        // }
        // if(found==false) return -1;
        // return minIndex;
        if(haystack.size()<needle.size()) return -1;
        int nSize = needle.size();
        for(int i=0; i<=haystack.size()-nSize+1; i++){
            string s = haystack.substr(i,nSize);
            if(s==needle) return i;
            
        }
        return -1;
    }
};