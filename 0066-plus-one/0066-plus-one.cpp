class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 0 , sum = 0 ;
        digits[digits.size()-1] += 1 ;
        if(digits[digits.size()-1]>=10){
            carry = 1 ;
            digits[digits.size()-1]%=10 ;
        }
        else return digits ;

        for(int i = digits.size()-2 ; i >= 0 ; i--){
            if(carry == 1){
                digits[i]+=carry ;
                carry = 0 ;
                if(digits[i]>=10){
                    carry = 1 ;
                    digits[i]%=10 ;
                }
                else break ;
            }
        }
        if(carry!=0){
            digits.push_back(carry);
            int temp = digits[0];
            digits[0] = digits[digits.size()-1] ;
            digits[digits.size()-1] = temp ;
            carry = 0 ;
        }
        return digits ;
    }
};