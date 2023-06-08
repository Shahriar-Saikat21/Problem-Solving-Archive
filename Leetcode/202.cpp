#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int getNum(int n){
        int num = 0;
        while(n!=0){
            int d = n%10;
            num += d*d;
            n/=10;
        }
        return num;
    }

    bool isHappy(int n) {
        set<int> s;

        while(n!=1 && !s.count(n)){
            s.insert(n);
            n = getNum(n);
        }
        return n==1;
    }
};