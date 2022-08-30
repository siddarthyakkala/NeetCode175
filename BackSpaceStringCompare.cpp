class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string ans1="";
        string ans2="";
        int i=0;
        while(s[i]!='\0'){
            if(s[i]>='a' && s[i]<='z'){
                ans1+=s[i];
            }
            else if(!ans1.empty()){
                ans1.pop_back();
            }
            
            i++;
        }
        i=0;
        while(t[i]!='\0'){
            if(t[i]>='a' && t[i]<='z'){
                ans2+=t[i];
            }
            else if(!ans2.empty()){
                ans2.pop_back();
            }
            
            i++;
        }
        
        if(ans1.compare(ans2)==0){
            return true;
        }
        else{
            return false;
        }
    }
};
