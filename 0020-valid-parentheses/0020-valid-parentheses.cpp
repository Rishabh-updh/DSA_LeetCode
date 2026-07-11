class Solution {
public:
    bool isValid(string s) {
        std::stack<char> stk ;
        for(int i = 0 ; i < s.size() ; i++) {
            if(s[i]=='(' || s[i]=='[' || s[i]=='{')
                stk.push(s[i]);
            else if(s[i]==')' || s[i]==']' || s[i]=='}'){
                if(stk.empty()) return false;
                char ch = stk.top() ;
                stk.pop();
                if(!isMatching(ch , s[i])){
                    return false ;
                }
            }
        }
        return stk.empty();
    }
    bool isMatching(char open , char close ){
        if(open == '(' && close == ')') return true ;
        if(open == '[' && close == ']') return true ;
        if(open == '{' && close == '}') return true ;
        return false ;
    }
};