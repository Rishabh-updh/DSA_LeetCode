class Solution {
public:
    string removeStars(string s) {
        string str ;
        for(auto in : s)
            if(in == '*')
                str.pop_back();
            else
                str.push_back(in);
            return str ;
    }
};