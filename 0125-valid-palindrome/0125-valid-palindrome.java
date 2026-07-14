class Solution {
    public boolean isPalindrome(String s) {
        s = s.toLowerCase();
        int i = 0 ;
       while(i < s.length()){
            if(!((s.charAt(i)>=97 && s.charAt(i)<=122) || (s.charAt(i)>=48 && s.charAt(i)<=57)))
                s = s.replace(String.valueOf(s.charAt(i)), "");
            else i++ ;       
        } 
        int front = 0 , back = s.length()-1 ;
        while(front < back){
            if(s.charAt(front)!=s.charAt(back)){
                return false;
            }
            else{
                front++;
                back--;
            }
        }
        return true ;
    }
}