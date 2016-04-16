class Solution{
public:
    string getPermutation(int n,int k){
    	vector<int> num;
    	int factor=1;

    	for(int i=0;i<n;i++){
    		num[i]=i+1;
            factor*=(i+1);
    	}

    	string ret="";
    	k--;

    	for(int i=0;i<n;i++){
            factor=factor/(n-i);
            int code=k/factor;
            ret+=(num[code]+'0');

            for(int j=code;j<n-i-1;j++){
            	num[j]=num[j+1];
            }
            k=k%factor;
    	}
        return ret;    	
    }	
};