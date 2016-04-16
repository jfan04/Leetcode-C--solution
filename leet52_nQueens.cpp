class Solution{
public:
	bool isValid(vector<int> &A,int r){
		for(int i=0;i<r;i++){
			if(A[i]==A[r]||(abs(A[r]-A[i])==r-i)) return false;
		}

		return true;
	}
	void nQueens(vector<int> &A,int &ret,int n,int cur){
		if(cur==n){
			ret++;
			return;
		}
		else{
			for(int i=0;i<n;i++){
				A[cur]=i;
				if(isValid(A,cur)){
					nQueens(A,ret,n,cur+1);
				}
			}
		}

	}
    int totalNQueens(int n){
    	int ret=0;
    	vector<int> A(n,-1);
    	nQueens(A,ret,n,0);
    	return ret;
    }	
};