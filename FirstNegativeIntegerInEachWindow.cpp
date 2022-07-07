vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {
  
    int i=0;
    int j=0;
    deque<long long> dq;
    vector<long long> ans;
    
    while(j<N){
        if(A[j]<0){
            dq.push_back(A[j]);
        }
        if(j-i+1<K){
            j++;
        }
        else if(j-i+1==K){
            if(dq.size()==0){
                ans.push_back(0);
            }
            else{
                ans.push_back(dq.at(0));
                if(A[i]==dq.at(0)){
                    dq.pop_front();
                }
            }
            i++;
            j++;
        }
        
        
    }
  
    return ans;                              
 }
