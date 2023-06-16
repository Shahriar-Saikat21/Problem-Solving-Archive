#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isPathCrossing(string path) {
        set<pair<int,int>>s;
        int x = 0,y = 0;
        s.insert({x,y});

        for(int i = 0; i<path.size();i++){
            if(path[i]=='N') y++;
            else if(path[i]=='S') y--;
            else if(path[i]=='E') x++;
            else if(path[i]=='W') x--;

            if(s.find({x,y})!=s.end()) return true;
            s.insert({x,y});
        }
        return false;

    }
};