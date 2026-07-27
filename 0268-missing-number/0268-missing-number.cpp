class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size() ;
        long sum_n = (long)(n*(n+1))/2 ;
        long sum_o = accumulate(nums.begin(),nums.end(),0);
        return sum_n - sum_o;
    }
};