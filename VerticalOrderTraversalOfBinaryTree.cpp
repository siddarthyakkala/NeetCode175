/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void dfs(TreeNode* root,int col,int row,map<int,map<int,multiset<int>>> &nodd){
        if(root==NULL) return ;
        
        nodd[col][row].insert(root->val);
        dfs(root->left,col-1,row+1,nodd);
        dfs(root->right,col+1,row+1,nodd);
        
    }
    
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL) return ans;
        map<int,map<int,multiset<int>>> nodd;
        dfs(root,0,0,nodd);
        for(auto i:nodd){
            vector<int> currCol;
            for(auto rows:i.second){
                currCol.insert(currCol.end(),rows.second.begin(),rows.second.end());
            }
            ans.push_back(currCol);
        }
        return ans;
    }
};
