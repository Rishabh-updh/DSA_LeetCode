class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        long max = INT_MIN , temp = 1 ;
        // case1 only positve elements 
        int i = 1 ;
        while(i<4){
            temp*=nums[nums.size()-i];
            i++;
        }
        if(temp>max) max = temp ;
        // negative elements 
        temp = nums[0]*nums[1]*nums[nums.size()-1];
        if(temp>max) max = temp ;
        return max ;
    }
};