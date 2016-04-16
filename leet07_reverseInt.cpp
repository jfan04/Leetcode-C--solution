class solution{
private:
   bool overflow(int x){
   	if(x/1000000000==0) return false;
   	if(x==INT_MAX||x==INT_MIN) return true;
   	x=abs(x);
    for(int cmp=463847412;cmp!=0;x/=10,cmp/=10){

    	if(x%10>cmp%10){
    		return true;
    	}
    	else if(x%10<cmp%10){
    		return false;
    	}
    }
    return false;
   }	
public:
    int reverse(int x){

    	if(overflow(x)){
    		return 0;
    	}
    	int ret=0;
    	int tmp=abs(x);

    	while(tmp){
    	ret=ret*10+tmp%10;
    	tmp=/10;
    	}

     return (x>0?ret:(-ret));

    }	
};