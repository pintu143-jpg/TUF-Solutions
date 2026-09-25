class Solution {
public:
    int countDigit(int n) {
        if(n==0 || n==1) return 1;
      int ans=log10(n);
      return ans+1;
    }
};