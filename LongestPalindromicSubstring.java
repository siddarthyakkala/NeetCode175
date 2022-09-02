class Solution {
    public String longestPalindrome(String s) {
        int n=s.length();
        String res=null;
        int palAt=0,maxLen=0;
        
        boolean dp[][]=new boolean[n][n];
        
        for(int i=n-1;i>=0;i--){
            for(int j=i;j<n;j++){
                dp[i][j]=s.charAt(i)==s.charAt(j) && (j-i<3 || dp[i+1][j-1]);
                
                //update max-palindrome;
                
                if(dp[i][j] && (j-i+1)>maxLen){
                    palAt=i;
                    maxLen=j-i+1;
                }
            }
        }
        
        return s.substring(palAt,palAt+maxLen);
    }
}
