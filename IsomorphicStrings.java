class Solution {
    public boolean isIsomorphic(String s, String t) {
       HashMap<Character,Character> mp1=new HashMap<>();
       HashMap<Character,Boolean> mp2=new HashMap<>();
       if(s.length()!=t.length()) return false; 
       for(int i=0;i<s.length();i++)
       {
           char ch1=s.charAt(i);
           char ch2=t.charAt(i);
           if(mp1.containsKey(ch1)==true)
           {
               if(mp1.get(ch1)!=ch2)
               {
                   return false;
               }
           }
           else
           {
               if(mp2.containsKey(ch2)==true)
               {
                   return false;
               }
               else
               {
                   mp1.put(ch1,ch2);
                   mp2.put(ch2,true);
               }
           }
       }
        
      return true;
        
    }
}
