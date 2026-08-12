class Solution {
public:
    bool detectCapitalUse(string word) {
        string lower = word , upper = word ;
        bool flag = false ;
        for (char &c : upper)
            c = toupper(c);
        for (char &c : lower)
            c = tolower(c);
        if(word==lower || word==upper) return true ;
        if(word[0]>=65 && word[0]<=90) flag = true ;
        for(int i = 1 ; i < word.length() ; i++){
            if(!(word[i]>=97 && word[i]<=122)){
                flag = false ;
                break ;
            }
        }
        return flag ;
    }
};