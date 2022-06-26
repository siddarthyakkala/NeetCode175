class Solution {
    public int longestPalindrome(String s) {
    
        int[] counts = new int[58];

        for (char c : s.toCharArray()) {
            counts[c - 'A']++;
        }
        
        int sum = 0;
        boolean odd = false;

        for (int i : counts) {            
            sum += i;       
            if (i % 2 == 1) {
                odd = true;
                --sum;
            }
        }   
        return odd ? sum + 1 : sum;
    
    }
}
