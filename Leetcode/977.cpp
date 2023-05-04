#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>result;
        int left = 0, right = nums.size() - 1;
        int m = 0, n = 0;
        for ( int i = right; i >= 0; i-- ) {
            m = nums[ left ] * nums[ left ];
            n = nums[ right ] * nums[ right ];
            
            if ( m > n ) {
                result.insert(result.begin(), m);
                left++;
            }
            else {
                
                result.insert(result.begin(), n); 
                right--; 
            }            
        }    
        return result;
    }
};