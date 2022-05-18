  vector<vector<string>> groupAnagrams(vector<string>& strs) {
        //the first value will hold the key
        //second is vector used to store multiple strings
        unordered_map<string,vector<string>> mp;
        vector<vector<string>> ans;
        
        for(int i=0;i<strs.size();i++)
        {
            
            string key=strs[i];
            //sort the key
            sort(key.begin(),key.end());
            //add the value to that key
            mp[key].push_back(strs[i]);
        }
        
        for(auto x:mp){
          //add all values in final ans
            ans.push_back(x.second);
        }
        
        return ans;
    }
    
    O(N*M)
    N-no.of words
    M-no.of characters each word has
