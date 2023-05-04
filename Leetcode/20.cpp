#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='('||s[i]=='{'||s[i]=='['){
                st.push(s[i]);
            }else{
                if(st.empty() || (st.top()=='(' && s[i]!=')') || (st.top()=='{' && s[i]!='}') || (st.top()=='[' && s[i]!=']')) return false;
                st.pop();
            }
        }
        return st.empty();
    }
};