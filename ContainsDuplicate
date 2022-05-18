//Brute force
//O(N*min(N,K))
bool containsNearbyDuplicate(vector<int>& nums, int k) {
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size()&&j<=i+k;i++){
                if(nums[j]==nums[i]){
                    return true;
                }
            }
        }
        
        return false;
    }
    
//using hashSet
//O(N)
