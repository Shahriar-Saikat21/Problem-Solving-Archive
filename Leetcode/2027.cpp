#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int minimumMoves(string s) {
        int move = 0;
        bool isX = false,start = false;
        int count = 0;
        for(int i = 0; i<s.size(); i++){
            if(s[i]=='X' || start ==true){
                count++;
                isX = true;
                start = true;
            }
            if(count==3 && isX==true){
                move++;
                isX = false;
                start = false;
                count=0;
            }
        }
        if(isX==true) move++;
        return move;
    }
};