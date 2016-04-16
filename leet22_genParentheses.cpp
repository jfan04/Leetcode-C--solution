class Solution{
public:
	  void dfs(int n,vector<string> &ret,int left,int right,string tmp){
	  	if(left==n){
	  		ret.push_back(tmp.append(n-right,')'));
	  		return;
	  	}

	  	dfs(n,ret,left+1,right,tmp+'(');
	  	if(left>right){
	  		dfs(n,ret,left,right+1,tmp+')');
	  	}
	  }
	  vector<string> generateParenthesis(int n){
	  	vector<string> ret;
	  	ret.clear();
	  	dfs(n,ret,0,0,"");
	  	return ret;
	  }
};