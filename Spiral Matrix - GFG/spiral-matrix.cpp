//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	int findK(vector<vector<int>> &a, int n, int m, int k)
    {
        // Your code goes here
        int rb=0,re=n-1,cb=0,ce=m-1;
        vector<int> ans;
        while(rb<=re && cb<=ce){
            for(int i=cb;i<=ce;i++){
                ans.push_back(a[rb][i]);
            }
            rb++;
            for(int i=rb;i<=re;i++){
                ans.push_back(a[i][ce]);
            }
            ce--;
            if(rb<=re){
                for(int i=ce;i>=cb;i--){
                    ans.push_back(a[re][i]);
                }
                re--;
            }
            if(cb<=ce){
                for(int i=re;i>=rb;i--){
                    ans.push_back(a[i][cb]);
                }
                cb++;
            }
        }
        
        return ans[k-1];
    }

};

//{ Driver Code Starts.

int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        vector<vector<int>> a(n, vector<int>(m, 0));
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }

        Solution obj;

        cout<< obj.findK(a, n, m, k) << "\n";
        
       
    }
}
// } Driver Code Ends