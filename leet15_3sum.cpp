class Solution{
public:
    vector<vector<int>> threeSum(vector<int> &num){

    	vector<vector<int>> ret;
    	sort(num.begin(),num.end());

    	for(int i=0;i<num.size();i++){
    		if(num[i]>0) return ret;
    		if(i!=0&&num[i]==num[i-1]) continue;
    		int left=i+1,right=num.size()-1;

    		while(left<right){
    			if(left>i+1&&num[left]==num[left-1]){
    				left++;
    				continue;
    			}

    			if(right<num.size()-1&&num[right]==num[right+1]){
    				right--;
    				continue;
    			}

    			int sum=num[left]+num[right]+num[i];
    			if(sum==0){
    				vector<int> tmp;
    				tmp.push_back(num[i]);
    				tmp.push_back(num[left]);
    				tmp.push_back(num[right]);
    				ret.push_back(tmp);
    				left++;
    				right--;
    			}

    			else if(sum>0){
    				right--;
    			}
    			else{
    				left++;
    			}
    		}
    	}

    	return ret;
    }	
};