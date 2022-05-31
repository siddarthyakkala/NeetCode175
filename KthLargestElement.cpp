class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        //using min-heap
        //TIME_COMPLEXITY-O(klogk)
        priority_queue<int,vector<int>,greater<int>> minheap;
        for(int i=0;i<nums.size();i++)
        {
            minheap.push(nums[i]);
            if(minheap.size()>k)
            {
                minheap.pop();
            }
        }
        
        return minheap.top();
    }
};
