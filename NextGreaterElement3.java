class Solution {
    public int nextGreaterElement(int n) {
        char[] str = (n + "").toCharArray();
        int l=str.length;
        int i,j;
        for(i=l-1;i>0;i--)
        {
            if(str[i]>str[i-1])
            {
                break;
            }
        }
        
        if(i==0)
            return -1;
        
        int d=str[i-1],small=i;
        for(j=i+1;j<l;j++)
        {
            if(str[j]>d && str[j]<str[small])
            {
                small=j;
            }
        }
        
        char temp = str[i-1];
        str[i-1] = str[small];
        str[small] = temp;
        
        Arrays.sort(str,i,str.length);
            
        long ans=Long.parseLong(new String(str));
        return (ans<=Integer.MAX_VALUE)? (int)ans : -1;
    }
}
