class Solution {
    
    bool isOk(int l,int r)
    {
        if(l==r || (l>='A' && l<='Z' && r==l+32)
          || (r>='A' && r<='Z' && l==r+32))
            return true;
        return false;
    }
public:
    bool isPalindrome(string s) {
        int n=s.size();
        if(n==0)
            return true;
        vector<int> ar;
        int i=0;
        while(i<n)
        {
            if((s[i]>='A' && s[i]<='Z')||(s[i]>='0' && s[i]<='9') || (s[i]>='a' && s[i]<='z')){
                ar.push_back(s[i]);
            }
            i++;
        }
        
        int l=0;
        n=ar.size();
        while(l<n)
        {
            if(!isOk(ar[l],ar[n-1]))
            {
                return false;
            }
            l++;
            n--;
        }
        
        return true;
    }
};
