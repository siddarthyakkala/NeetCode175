class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
       vector<int> ans;
       stack<int> st;
       map<int,int> mp;
       for(int i=0;i<nums2.size();i++)
       {
           while(!st.empty())
           {
               if(st.top()<nums2[i])
               {
                   mp.insert(pair<int,int>(st.top(),nums2[i]));
                   st.pop();
               }
               else
               {
                   break;
               }
           }
           st.push(nums2[i]);
       }
        
       for(int i=0;i<nums1.size();i++)
       {
           int val=mp[nums1[i]];
           if(val==0)
               ans.push_back(-1);
           else
               ans.push_back(val);
       }
        
        return ans;
    }
};
