class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        
        //time complexity-O(n)
        if(k<=1) return 0;
        int n=nums.size();
        int l=0,r=0,ans=0,prod=1;
        while(r<n)
        {
            prod*=nums[r++];
            while(prod>=k){
                prod/=nums[l++];
            }
            ans+=r-l;
        }
        
        return ans;
    }
};
