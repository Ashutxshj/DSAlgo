class Solution {
    public String longestPalindrome(String s) {
        String longest="";
        for(int i=0;i<s.length();i++){
            for(int j=i+1;j<=s.length();j++){
                String sub=s.substring(i,j);
                if(isPalindrome(sub) && sub.length()>longest.length())
                    longest=sub;
            }
        }
        return longest;
    }

    public static boolean isPalindrome(String s){
        int left=0,right=s.length()-1;
        while(left<right){
            if(s.charAt(left)!=s.charAt(right))
                return false;
            left++;
            right--;
        }
        return true;
    }
}