#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0, minValue = INT_MAX;
        for(int i=0; i<prices.size(); i++){
            minValue = min(minValue,prices[i]);
            if(prices[i]>minValue){
                profit = max(profit,prices[i]-minValue);
            }
        }
        return profit;
    }
};