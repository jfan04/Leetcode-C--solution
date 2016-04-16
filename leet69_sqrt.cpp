class Solution{
public:
    int sqrt(int x){
    	if(x==0) return 0;

    	unsigned long long begin=0;
    	unsigned long long end=(x+1)/2;
    	unsigned long long mid;

    	unsigned long long tmp;

    	while(begin<end){
    		mid=(begin+end)/2;
    		tmp=mid*mid;

    		if(tmp==x) return mid;
    		else if(tmp>x) end=mid-1;
    		else begin=mid+1;
    	}
        if(end*end>x) return end-1;
        else return end;
    }	
};