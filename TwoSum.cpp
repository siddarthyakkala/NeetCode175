//Brute force solution
//TC- O(n*n) SC-O(1)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        for(int i=0;i<nums.size()-1;i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i] + nums[j] == target)
                {
                    return {i,j};
                }
            }
        }
        
        return {};
    }
};

//Given the array is sorted
//Using the two pointer technique and binary search 
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int p1=0,p2=int(nums.size())-1;
        while(p1<p2){
            
            if(nums[p1]+nums[p2]==target){
                return {p1+1,p2+1};
            }
            if(nums[p1]+nums[p2]<target){
                p1++;
            }
            else 
            {
                p2--;
            }
        }
        
        return {-1,-1};
    }
};
tc-O(N)
