#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        unsigned int n = 0;
        unsigned int s = x;
        while(x>0){
            n = (n*10) + (x%10);
            x /= 10;
        }
        if(n==s){
            return true;
        }
        return false;
    }
};