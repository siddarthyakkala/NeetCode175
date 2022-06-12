class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        
        
        
        int minEle=findMin(nums);
        int ans1=binarySearch(nums,0,minEle-1,target);
        int ans2=binarySearch(nums,minEle,n-1,target);
        int ans=max(ans1,ans2);
        
        return ans;
        
    }
     int findMin(vector<int>& nums) {
        int n=nums.size();
        
        int lo=0,hi=n-1;
        
        while(lo<hi)
        {
            int mid=lo+((hi-lo)/2);
            if(nums[hi]<nums[mid]) lo=mid+1;
            else hi=mid;
        }
        
        return lo;
    }
    int binarySearch(vector<int>& arr, int l, int r, int x)
  {
    if (r >= l) {
        int mid = l + (r - l) / 2;
 
        // If the element is present at the middle
        // itself
        if (arr[mid] == x)
            return mid;
 
        // If element is smaller than mid, then
        // it can only be present in left subarray
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
 
        // Else the element can only be present
        // in right subarray
        return binarySearch(arr, mid + 1, r, x);
    }
 
    // We reach here when element is not
    // present in array
    return -1;
  }
};
