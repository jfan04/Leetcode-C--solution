class Solution{
public:
     double pow(double x, int n){
     if(n==0) return 1.0;
     else if(n>0){
         double half=pow(x,n/2);
         if(n%2){
             return half*half*x;
         }
         else return half*half;
     }
     else{
         n=-n;
         double half=pow(x,n/2);
         if(n%2){
             return 1/(half*half*x);
         }
         else return 1/(half*half);
     }

    }	
};