#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int arrayA[m+1], arrayB[n+1];

        for (int i = 0; i < m; i++)
        {
            arrayA[i] = nums1[i];
        }
        arrayA[m] = 99999999;

        for (int i = 0; i < n; i++)
        {
            arrayB[i] = nums2[i];
        }
        arrayB[n] = 99999999;

        int q = 0, w = 0;

        for (int i = 0; i < m+n; i++)
        {
            if(arrayA[q]<arrayB[w]){
                nums1[i] = arrayA[q++];
            }else{
                nums1[i] = arrayB[w++];
            }
        }

    }
};