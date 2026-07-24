class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int element , count = 0 ;
        for(int i = 0 ; i <nums.size() ; i++){
            if(count == 0) element = nums[i];
            if(nums[i]==element) count++;
            if(nums[i]!=element) count--;
        }
        return element ;
    }
};