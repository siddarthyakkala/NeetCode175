class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        //sliding window method
        //time complexity-O(N)
        //Space Complexity-O(1)
        
        int i=0,j=0,sum=0;
        int ans=INT_MAX;
        int n=nums.size();
        while(j<n){
            while(sum<target && j<n)
            {
                sum+=nums[j++];
            }
            while(sum>=target && i<n)
            {
                ans=min(ans,j-i);
                sum-=nums[i++];
            }
        }
        
        if(ans==INT_MAX)
        {
            ans=0;
        }
        
        return ans;
    }
};
