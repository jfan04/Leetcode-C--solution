class Solution{
public:
	bool isValid(vector<int> &A,int r){
	      for(int i=0;i<r;i++){
	      	if(A[r]==A[i]||(abs(A[r]-A[i])==r-i)) return false;
	      }
	      return true;
	}

	void printQueens(vector<int> &A,vector<vector<string>> &ret,int n){
		vector<string> r;
		for(int i=0;i<n;i++){
			string str(n,'.');
			str[A[i]]='Q';
			r.push_back(str);
		}
		ret.push_back(r);

	}

	void nQueens(vector<int> &A,vector<vector<string>> &ret,int n,int cur){
		if(cur==n){
			printQueens(A,ret,n);
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
    vector<vector<string>> solveNQueens(int n){
    	vector<vector<string>> ret;
    	ret.clear();
    	vector<int> A(n,-1);
    	nQueens(A,ret,n,0);
    	return ret;   	
    }	
};