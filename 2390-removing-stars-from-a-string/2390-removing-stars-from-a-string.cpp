class Solution {
public:
    string removeStars(string s) {
        stack<char> st ;
        string str ;
        for(int i = 0 ; i < s.length() ; i++){
            if(s[i] != '*') 
                st.push(s[i]) ;
            else{
                st.pop();
            }
        }
            while(!st.empty()){
                str.push_back(st.top());
                st.pop();
            }
            for(int j = 0 ; j < str.length()/2 ; j++){
                swap(str[j],str[str.length()-j-1]);
            }
            return str ;
    }
};