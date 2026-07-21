class Solution {
    public int lengthOfLastWord(String s) {
        s = s.trim() ;
        if(s.length()==1 || s.length()==0 ) return s.length();
        int end = s.length()-1 , start ;
        start = end ;
        while(s.charAt(start)!=' '){
            start--;
            if(start<0) break ;
        }
        return end - start ;
    }
}