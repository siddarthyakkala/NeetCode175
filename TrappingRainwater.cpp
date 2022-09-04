class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        if(n<=2) return 0;
        int ans=0;
        vector<int> ar(n,0);
        int maxx=height[0];
        for(int i=1;i<n;i++){
            if(height[i]>maxx){
                maxx=height[i];
            }
            else{
                ar[i]=maxx-height[i];
            }
        }
        maxx=height[n-1];
        for(int i=n-2;i>=0;i--){
            if(height[i]>maxx){
                maxx=height[i];
            }
            else{
                ans+=min(maxx-height[i],ar[i]);
            }
        }
        return ans;
    }
};
