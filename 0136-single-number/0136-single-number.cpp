class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if(nums.size()==1) return nums[0] ;
        for(int i = 0 ; i < nums.size() ; i++){
            bool flag = false ;
            for(int j = 0 ; j < nums.size() ; j++){
                if(i==j) continue ;
                if((nums[i]-nums[j])==0){
                    flag = true ;
                    break ;
                }
            }
            if(flag!=true) return nums[i] ;
        }
        return 0 ;
    }
};