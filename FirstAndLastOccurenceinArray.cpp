class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int lo=0,hi=nums.size()-1;
        vector<int> ans(2,-1);
        int temp=-1;
        //first pos
        while(lo<=hi)
        {
            int mid=lo+((hi-lo)/2);
            if(target<nums[mid])
            {
                hi=mid-1;
            }
            else if(target>nums[mid])
            {
                lo=mid+1;
            }
            else if(target==nums[mid])
            {
                temp=mid;
                hi=mid-1;
            }
        }
        ans[0]=temp;
        
        int temp2=-1;
        lo=0,hi=nums.size()-1;
        
        //second pos
        while(lo<=hi)
        {
            int mid=lo+((hi-lo)/2);
            if(target<nums[mid])
            {
                hi=mid-1;
            }
            else if(target>nums[mid])
            {
                lo=mid+1;
            }
            else if(target==nums[mid])
            {
                temp2=mid;
                lo=mid+1;
            }
        }
        ans[1]=temp2;
        
        return ans;
    }
};
