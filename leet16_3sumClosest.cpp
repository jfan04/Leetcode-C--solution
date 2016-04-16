class Solution{
public:
    int threeSumClosest(vector<int> &num,int target){
    	int sum;
    	int minL=INT_MAX;
    	sort(num.begin(),num.end());
    	for(int i=0;i<num.size()-2;i++){
    		int left=i+1,right=num.size()-1;
    		while(left<right){
    			sum=num[i]+num[left]+num[right]-target;
    			if(sum==0) return (sum+target);
    			if(abs(minL)>abs(sum)){
    				minL=sum;
    			}
    			else if(sum<0){
    				left++;
    			}
    			else{
    				right--;
    			}

    		}

    	}

    	return (minL+target);

    }	
};