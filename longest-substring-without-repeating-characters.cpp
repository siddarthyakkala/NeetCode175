class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       //optimized sliding window
        map<char,int> mp;
        int i=0,j=0,ans=0;
        while(i<s.length() && j<s.length())
        {
            if(mp.count(s[j])){
                i=max(mp[s[j]],i);
            }
            mp[s[j]]=j+1;
            ans=max(ans,j-i+1);
            j++;
        }
        
        return ans;
    }
};

tc-O(N)
  
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> st;
        int ans=0;
        int i=0;
        int j=0;
        while(i<s.length() && j<s.length())
        {
            if(st.count(s[j])){
                st.erase(s[i]);                i++;
            }
            else
            {
                st.insert(s[j]);
                j++;
                ans=max(j-i,ans);
            }
        }
        return ans;
    }
};

tc-O(2N)
