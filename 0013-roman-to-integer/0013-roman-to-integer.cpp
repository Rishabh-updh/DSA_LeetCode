class Solution {
public:
    int value(char ch){
        if(ch == 'I') return 1 ;
        else if(ch == 'V') return 5 ;
        else if(ch == 'X') return 10 ;
        else if(ch == 'L') return 50 ;
        else if(ch == 'C') return 100 ;
        else if(ch == 'D') return 500 ;
        else if(ch == 'M') return 1000 ;
        else return 0 ;
    }
    int romanToInt(string s) {
        int num = 0 ;
        for(int i = 0 ; i < s.size() ; ){
            if(s[i] == 'I' && s[i+1] == 'V') {
                num+=4 ;
                i+=2 ;
            }
            else if(s[i] == 'I' && s[i+1] == 'X') {
                num+=9 ;
                i+=2 ;
            }
            else if(s[i] == 'X' && s[i+1] == 'L') {
                num+=40 ;
                i+=2 ;
            }
            else if(s[i] == 'X' && s[i+1] == 'C') {
                num+=90 ;
                i+=2 ;
            }
            else if(s[i] == 'C' && s[i+1] == 'D') {
                num+=400 ;
                i+=2 ;
            }
            else if(s[i] == 'C' && s[i+1] == 'M') {
                num+=900 ;
                i+=2 ;
            }
            else {
                num+=value(s[i]);
                i++;
            }
        }
        return num ;
    }
};