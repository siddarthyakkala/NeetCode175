
//Leetcode
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

//Interview Bit
vector<int> Solution::nextGreater(vector<int> &A) {
    int n=A.size();
    vector<int> ans;
    stack<int> st;
    for(int i=n-1;i>=0;i--)
    {
        if(st.empty())
        {
            ans.push_back(-1);
        }
        else if(st.size()>0 && A[i]<st.top())
        {
            ans.push_back(st.top());
        }
        else if(st.size()>0 && A[i]>=st.top())
        {
            while(st.size()>0 && A[i]>=st.top())
            {
                st.pop();
            }
            if(st.empty())
            {
                ans.push_back(-1);
            }
            else if(st.size()>0 && A[i]<st.top())
            {
                ans.push_back(st.top());
            }
        }
        
        st.push(A[i]);
    }
    
    reverse(ans.begin(),ans.end());
    
    return ans;
}

