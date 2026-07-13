class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 0 ;
        for(int i = 0 ; i < nums.size() ; i++ ){
            k++;
            int j ;
            for(j = i+1 ; j < nums.size(); ){
                if(nums[i]==nums[j])nums.erase(nums.begin() + j);
                else if(nums[i]!=nums[j]) break ;
            }
        }
        return k ;
    }
};