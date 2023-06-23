class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int size = digits.size();
        int carry = 0;
        if(digits[size-1]<9){
            digits[size-1]++;
            return digits;
        }else{
            digits[size-1] = 0;
            carry = 1;
            for(int i = size-2; i>=0; i--){
                if(digits[i]+carry>9){
                    digits[i] = 0;
                    carry =1;
                }else{
                    digits[i]+=carry;
                    carry = 0;
                }
            }
        }

        if(carry==1) digits.insert(digits.begin(),1);
        
        return digits;
    }
};
