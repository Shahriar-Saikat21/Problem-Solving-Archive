#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        if(n==0 || x==1) return 1;
        
        if(n<0){
            x = 1/x;
            n = abs(n);
        }

        int mid = n/2;

        if(n%2==0){
            double val = myPow(x,mid);
            return val*val;
        }else{
            double val = myPow(x,mid);
            return val*val*x;
        }
    }
};