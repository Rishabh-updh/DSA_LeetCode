class Solution {
public:
    bool isPerfectSquare(int num) {
        for(__int128 i = 1 ; i*i <= num ; i++)
            if(i*i==num)return true ;
        return false ;
    }
};