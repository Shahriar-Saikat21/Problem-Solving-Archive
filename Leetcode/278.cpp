#include<bits/stdc++.h>

using namespace std;

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        unsigned int low = 0, hi = n;
        
        while(low<=hi){
            unsigned int mid = (low+hi)/2;
            bool r =isBadVersion(mid);
            if(r==true){
                hi = mid-1;
            }else{
                low = mid+1;
            }
        }
        return low;
    }
};