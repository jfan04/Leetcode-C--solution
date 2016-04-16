class Solution{
public:
   uint32_t reverseBits(uint32_t n){
   	uint32_t ret=0;
   	int reminder;
   	for(int i=0;i<32;i++){
        reminder=n%2;
        ret+=reminder<<(31-i);
        n>>=1;
   	}
  	return ret;
   }	
};