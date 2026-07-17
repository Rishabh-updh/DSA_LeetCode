class Solution {
public:
    string addBinary(string a, string b) {
        bool carry = false ;
        string ans = "" , zero = "0" , one = "1" ;
        if(a=="0"&&b=="0") return zero ;
        int diff = a.length() - b.length() ;
        diff = abs(diff) ;
        if(a.length() > b.length())
            for(int i = 0 ; i < diff ; i++)
                b = zero + b ;
        if(a.length() < b.length())
            for(int i = 0 ; i < diff ; i++)
                a = zero + a ;
        for(int i = a.length()-1 ; i >= 0 ; i--){
            if(!carry){
                if(a[i]=='0'){
                    if(b[i]=='0') ans = zero + ans ;
                    else if(b[i]=='1') ans = one + ans ;
                }
                else if(a[i]=='1'){
                    if(b[i]=='0') ans = one + ans ;
                    else if(b[i]=='1'){
                        ans = zero + ans ;
                        carry = true ;
                    }
                }
            }
            else if(carry){
                if(a[i]=='0'){
                    if(b[i]=='0'){
                        ans = one + ans ;
                        carry = false ;
                    } 
                    else if(b[i]=='1') ans = zero + ans ;
                }
                else if(a[i]=='1'){
                    if(b[i]=='0') ans = zero + ans ;
                    else if(b[i]=='1'){
                        ans = one + ans ;
                    }
                }
            }
        }
        if(carry) ans = one + ans ;
        return ans ;
    }
};