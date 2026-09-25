class Solution{	
	public:
		bool checkPrime(int num){
			//your code goes here
            if(num==1 || num==0) return false;
            for(int i=2; i<=num/2; i++){
                if(num%i==0){
                    return false;
                }
            }
            return true;
		}
};