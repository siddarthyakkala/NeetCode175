//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > mat, int r, int c) 
    {
        // code here 
        int rb=0,cb=0,re=r-1,ce=c-1;
        
        vector<int> ans;
        while(rb<=re && cb<=ce){
            for(int i=cb;i<=ce;i++){
                ans.push_back(mat[rb][i]);
            }
            rb++;
            for(int i=rb;i<=re;i++){
                ans.push_back(mat[i][ce]);
            }
            ce--;
            if(rb<=re){
                for(int i=ce;i>=cb;i--){
                    ans.push_back(mat[re][i]);
                }
                re--;
            }
            if(cb<=ce){
                for(int i=re;i>=rb;i--){
                    ans.push_back(mat[i][cb]);
                }
                cb++;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends