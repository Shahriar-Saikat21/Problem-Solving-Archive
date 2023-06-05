class Solution {
public:
    double average(vector<int>& salary) {
        int minSalary = INT_MAX;
        int maxSalary = 0;
        double sum = 0;
        for(auto i : salary){
            if(i<minSalary){
                minSalary = i;
            }
            if(i>maxSalary){
                maxSalary = i;
            }
            sum += i;
        }
        sum -= (minSalary+maxSalary);
        return sum/(salary.size()-2);
    }
};