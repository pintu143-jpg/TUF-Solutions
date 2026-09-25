class Solution {
public:
    int LCM(int n1,int n2) {
          
        
             if(n1>n2){
              int inc=n1; 
              while(true){
                if(n1%n2==0) return n1;
                n1=n1+inc;
                
         //       i++;
              }
               
             }else{
              int inc=n2;
                while(true){ 
                if(n2%n1==0) return n2;
                n2=n2+inc;
               // i++;
                } 
             }
    
        return n1;
    }
};