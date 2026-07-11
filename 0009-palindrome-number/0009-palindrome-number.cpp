class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        long int rev = 0 , remd = 0 , y = x;
        while(x!=0){
            remd = x%10;
            rev = rev*10 + remd ;
            x/=10;
        }
        if(rev == y)
            return true;
        else
            return false;
    }
};