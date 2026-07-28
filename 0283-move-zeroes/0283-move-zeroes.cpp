class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if(nums.size()==1 && nums[0]==0) return ;
        int zeros = count(nums.begin(),nums.end(),0);
        for(auto it = nums.begin() ; it!=nums.end() ; )
            if(*it==0) nums.erase(it) ;
            else ++it ;
        int n = nums.size();
        nums.insert(nums.begin()+n , zeros , 0);
    }
};