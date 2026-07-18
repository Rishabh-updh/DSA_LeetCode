class Solution {
public:
    int GCD(int x , int y){
        if (y == 0)
            return x;
        return GCD(y, x % y);
    }
    void sort(vector<int>& nums){
        for(int i = 0 ; i < nums.size() ; i++){
            for(int j = 0 ; j < nums.size()-i-1 ; j++){
                if(nums[j] > nums[j+1])
                    swap(nums[j] , nums[j+1]) ;
            }
        }
    }
    int findGCD(vector<int>& nums) {
        sort(nums);
        return GCD(nums[nums.size()-1],nums[0]);
    }
};