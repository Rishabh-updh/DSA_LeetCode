class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> v = {} ;
        for(auto in : nums){
            if(in%2==0) v.insert(v.begin(),in) ;
            else v.push_back(in);
        }
        return v ;
    }
};