class Solution {
    public int longestConsecutive(int[] nums) {
        
       if(nums.length==0) return 0; 
       HashMap<Integer,Boolean> hm = new HashMap<Integer,Boolean>();
        
       for(int i : nums){
           hm.put(i,true);
       } 
        
       for(int i:nums){
           if(hm.containsKey(i-1)){
               hm.put(i,false);
           }
       }
        
        int res=-1;
        
        for(int i:nums){
            if(hm.get(i)==true){
                int len=1;
                int stp=i;
                while(hm.containsKey(stp+len)){
                    len++;
                }
                
                if(len>res){
                    res=len;
                }
            }
        }
        
        return res;
    }
}
