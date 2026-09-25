class Solution{
    public:
        vector<int> primeTillN(int n){
            //your code goes here
            vector<int>ans(n+1,1);
            for(int i=2; i<=n; i++){
                if(ans[i]==1){
                    for(int j=i*2; j<=n; j+=i){
                        ans[j]=0;
                    }
                }
            }
           vector<int>aaa;
           for(int i=2; i<=n; i++){
                 if(ans[i]!=0){
                    aaa.push_back(i);
                 }
           }
           return aaa; 
        }
};