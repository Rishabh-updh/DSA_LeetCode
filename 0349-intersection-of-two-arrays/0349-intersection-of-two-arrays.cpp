class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s1 , s2 ;
        vector<int> ans ;
        for(int i = 0 ; i < nums1.size() ; i++)
            s1.insert(nums1[i]);
        for(int i = 0 ; i < nums2.size() ; i++)
            s2.insert(nums2[i]);
        if(s1.size() <= s2.size()){
            for (auto it = s1.begin(); it != s2.end(); it++) 
                if(s2.count(*it))
                    ans.push_back(*it) ;
        }
        else{
            for (auto it = s2.begin(); it != s1.end(); it++)
                if(s1.count(*it))
                    ans.push_back(*it) ;
        }
        return ans; 
    }
};