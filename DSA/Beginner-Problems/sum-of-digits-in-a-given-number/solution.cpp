class Solution{
public:
	int addDigits(int num){
		//your code goes here
        while(num>9){
          //  int temp=num;
            int sum=0;
            while(num>0){
                sum+=num%10;
                num/=10;
            }
            num=sum;
        }
        return num;
	}
};