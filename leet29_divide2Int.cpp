class Solution{
public:
    int divide(int dividend,int divisor){
       long long a=abs((long)dividend);// abs(INT_MIN)error
       long long b=abs((long)divisor);
        
        long long ret=0;
        
        while(a>=b){
            
            long long c=b;
            int i=0;
            while(a>=c){
                c=c<<1;
                i++;
            }
            ret+=((long long)1<<(i-1));
            a-=(b<<(i-1));
        }
        ret = ((dividend^divisor)>>31)?-ret:ret;
        if(ret>((1<<31)-1))
            return (1<<31)-1;
        return ret;
    	
    }	
};