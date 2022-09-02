class Solution {
public:
    bool isperfect(int x){
        long double srt=sqrt(x);
        return (srt-floor(srt)==0);
    }
    int numSquares(int n) {
        vector<int> sqrs;
        for(int i=1;i<=n;i++){
            if(isperfect(i)){
                sqrs.push_back(i);
            }
        }
        int dp[n+1];
        sort(sqrs.rbegin(),sqrs.rend());
        dp[0]=0;
        dp[1]=1;
        for(int i=2;i<=n;i++){
            dp[i]=INT_MAX;
            for(int j=0;j<sqrs.size();j++){
                if(sqrs[j]<=i){
                    int res = dp[i-sqrs[j]];
                    if(res!=INT_MAX && res+1<dp[i])
                        dp[i]= res+1;
                }
            }
        }
        
        return dp[n];
    }
};
