class Solution{
public:
   int trailingZeros(int n){
   	int ret=0;
   	while(n){
   		ret+=n/5;
   		n=n/5;
   	}
    return ret;

   }	
};