class Solution{
public:
    int signleNumber(vector<int> &nums){
    	int bitNum[32]={0};
        int ret=0;
    	for(int i=0;i<32;i++){
    		for(int j=0;j<nums.size();j++){
    			bitNum[i]+=(nums[i]>>i)&1;
    		}

    		ret|=(bitNum[i]%3)<<i;
    	}
    }	
};