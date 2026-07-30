class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false ;
        map<char,int> freq ;
        for(int i = 0 ; i < s.size() ; i++)
            freq[s[i]]++;
        for(int i = 0 ; i < t.size() ; i++)
            if(freq.count(t[i]) && freq[t[i]]>0)
                freq[t[i]]--;
            else return false;
        return true ; 
    }
};