class Solution{
public:
    vector<int> searchRange(int A[],int n,int target){
        int left=0;
    	int right=n-1;
    	vector<int> ret;
    	

    	while(left<=right){
    		int mid=(left+right)/2;
    		if(A[mid]==target){
    			left=mid;
    			right=mid;
    			while(A[left]==A[mid]&&left>=0) left--;
    			left=left+1;
    			ret.push_back(left);
    			while(A[right]==A[mid]&&right<n) right++;
    			right=right-1;
    			ret.push_back(right);
    			return ret;
    		}

    		else if(A[mid]>target){
    			right=mid-1;
    		}
    		else left=mid+1;
    	}
    	
    	ret.push_back(-1);
    	ret.push_back(-1);

    	return ret;
    }	
};