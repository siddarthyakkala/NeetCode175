#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//tc-O(N*N)
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        
        vector<int> ar(n);
        for(int i=0;i<n;i++)
            cin>>ar[i];
        
        bool ans=false;
        
        for(int i=0;i<n;i++)
        {
            int kk=ar[i]+k;
            for(int j=0;j<n;j++)
            {
                if(kk==ar[j])
                {
                    ans=true;
                    break;
                }
            }
        }
        if(ans){
            cout<<"true"<<endl;
        }
        else{
            cout<<"false"<<endl;
        }
    }
    return 0;
}


//with hashMap
//tc-O(N)
#include <cmath>
#include <cstdio>
#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        
        vector<int> ar(n);
        for(int i=0;i<n;i++)
            cin>>ar[i];
        
        bool ans=false;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            mp[ar[i]]=1;
        }
        
        for(int i=0;i<n;i++)
        {
            int kk=ar[i]+k;
            if(mp[kk]){
                ans=true;
                break;
            }
        }
        
        if(ans){
            cout<<"true"<<endl;
        }
        else{
            cout<<"false"<<endl;
        }
        
    }
    return 0;
}
